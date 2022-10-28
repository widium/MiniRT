/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_object.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:57:45 by ebennace          #+#    #+#             */
/*   Updated: 2022/10/28 11:57:46 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"


t_sphere *init_sphere(t_pos pos, t_color color, float diameter)
{
	t_sphere *sphere;

	sphere = (t_sphere *)malloc(sizeof(t_sphere));
	if (!sphere)
		return (NULL);
    sphere->position = pos;
    sphere->color = color;
    sphere->diameter = diameter;
	return (sphere);
}


t_cylinder *init_cylinder(t_pos pos, t_vector vector, t_color color, float height, float diameter)
{
	t_cylinder *cylinder;

	cylinder = (t_cylinder *)malloc(sizeof(t_cylinder));
	if (!cylinder)
		return (NULL);
    cylinder->position = pos;
    cylinder->vector = vector;
    cylinder->color = color;
    cylinder->height = height;
    cylinder->diameter = diameter;
	return (cylinder);
}


