/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:57:43 by ebennace          #+#    #+#             */
/*   Updated: 2022/10/28 11:57:44 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"

t_ambiant	init_ambient_light(t_color color, float ratio)
{
	t_ambiant	ambiant;

	ambiant.color = color;
	ambiant.ratio = ratio;
	return (ambiant);
}

t_camera 	init_camera(t_pos position, t_vector vector)
{
	t_camera	cam;

    cam.position = position;
    cam.vector = vector;
	return (cam);
}

t_light 	init_light(t_pos position, t_color color, float ratio)
{
	t_light	light;

    light.ratio = ratio;
    light.position = position;
    light.color = color;
	return (light);
}

t_plan 	init_plan(t_pos position, t_vector vector, t_color color)
{
	t_plan	plan;

    plan.position = position;
    plan.vector = vector;
    plan.color = color;
	return (plan);
}



