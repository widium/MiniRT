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


typedef struct s_ambiant
{
    float ratio;
    int   red;
    int   green;
    int   blue;
}   t_ambiant;

typedef struct s_camera
{
    float   x;
    float   y;
    float   z;
    float   vector_x;
    float   vector_y;
    float   vector_z;
    int     fov;
}   t_camera;

typedef struct s_light
{
    float   x;
    float   y;
    float   z;
    float   ratio;
    int   red;
    int   green;
    int   blue;
}   t_light;

typedef struct s_sphere
{
    float   x;
    float   y;
    float   z;
    float   diameter;
    int   red;
    int   green;
    int   blue;
}   t_sphere;

typedef struct s_cylinder
{
    float   x;
    float   y;
    float   z;
    float   diameter;
    float   height;
    int   red;
    int   green;
    int   blue;
    float   vector_x;
    float   vector_y;
    float   vector_z;

}   t_cylinder;

typedef struct s_plan
{
    float   x;
    float   y;
    float   z;
    float   vector_x;
    float   vector_y;
    float   vector_z;
    int   red;
    int   green;
    int   blue;
}   t_plan;









#endif