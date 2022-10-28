# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 10:05:16 by ebennace          #+#    #+#              #
#    Updated: 2022/10/28 10:05:17 by ebennace         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = miniRT

# === File && Header === #
SRCS		= 	source/main.c \
				source/init/init_env.c \
				source/init/init_object.c \
				source/parsing/file.c \


# ==== Template ==== #
TEMPLATE = source/header/header.txt

# ==== Execute ==== #
EXE = @./$(NAME)
LIBFT = source/libft/libft.a

# ==== Debug && Leak ==== #
SANITIZE 		= -fsanitize=address
LEAKS 			= -fsanitize=leak
DEBUGGER		= lldb

# ==== Remove ==== #
RM_FILE = /bin/rm -rf

# ==== Objet && compiling ==== #
OBJS			= $(SRCS:.c=.o)
CC				= gcc
FLAGS			= -g3
FLAGS 			+= -Wall -Werror -Wextra
FLAGS 			+= $(SANITIZE)
MAKE			= make -s

# ==== Cross Compilation and Flags of Minilibx ====
UNAME = $(shell uname -s)

# si c'est linux
ifeq ($(UNAME), Linux)
	NPROC := $(shell nproc)
	FLAGS += -lmlx -lXext -lX11 -lm
	OS = "Linux"
else
#	@echo "==== OS : MAC Detected ===="
	NPROC := $(shell sysctl -n hw.ncpu)
	FLAGS += -lmlx
    FLAGS += -Lminilibx -framework OpenGL -framework Appkit
    OS = "MACOS"
endif

# === Convert all .c to .o with flags and header === #
%.o : %.c
			@$(CC) $(FLAGS) -c $< -o $@

$(NAME) : 	    $(OBJS)
				@echo "==== OS : $(OS) Detected ===="
				@echo "==== Create all .o ===="
				@echo "==== Compiling all .c ===="
				@echo "==== Compiling libft ===="
				@$(MAKE) -C source/libft
				@echo "==== Compiling Mini_RT ===="
				@$(CC) $(OBJS) $(FLAGS) $(LIBFT) -o $(NAME)
#				@cat "$(TEMPLATE)"

all : 	 $(NAME)

clean :
				@echo "==== Remove all Libft .o ===="
				@$(MAKE) clean -C source/libft
				@echo "==== Remove all Mini_RT .o ===="
				@$(RM_FILE) $(OBJS)

fclean : clean
				@$(MAKE) fclean -C source/libft
				@$(RM_FILE) $(NAME)

debug : 		$(OBJS)
				@echo "==== Mode Debug Activate ===="
				@$(CC) $(OBJS) $(FLAGS) $(SANITIZE) $(LIBFT) -o $(NAME)
				$(DEBUGGER) $(NAME)
				@cat "$(TEMPLATE)"

sanitize :		$(OBJS)
				@echo "==== Mode Sanitize Activate ===="
				@$(CC) $(OBJS) $(FLAGS) $(SANITIZE) $(LIBFT) -o $(NAME)
				@cat "$(TEMPLATE)"

leak :			$(OBJS)
				@echo "==== Mode Leak Activate ===="
				@$(CC) $(OBJS) $(FLAGS) $(LEAKS) $(LIBFT) -o $(NAME)
				@cat "$(TEMPLATE)"


re : fclean all
.PHONY			: all clean fclean re leak sanitize