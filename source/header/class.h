/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:34:13 by ebennace          #+#    #+#             */
/*   Updated: 2022/10/28 10:34:33 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

#include "minirt.h"

typedef struct s_vector
{
   float   x;
   float   y;
   float   z;
} t_vector;

typedef struct s_pos
{
   float   x;
   float   y;
   float   z;
} t_pos;

typedef struct s_color
{
    int   red;
    int   green;
    int   blue;
    int   hexa;

} t_color;

typedef struct s_ambiant
{
    float ratio;
    t_color color;
}   t_ambiant;

typedef struct s_camera
{
    t_pos    position;
    t_vector vector;
    int     fov;
}   t_camera;

typedef struct s_light
{
    float   ratio;
    t_pos   position;
    t_color color;
}   t_light;

typedef struct s_sphere
{
    float   diameter;
    t_pos   position;
    t_color color;
}   t_sphere;

typedef struct s_cylinder
{

    float   diameter;
    float   height;
    t_pos   position;
    t_color color;
    t_vector vector;

}   t_cylinder;

typedef struct s_plan
{
    t_pos   position;
    t_vector vector;
    t_color color;
}   t_plan;

#endif