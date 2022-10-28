/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:28:39 by ebennace          #+#    #+#             */
/*   Updated: 2022/10/28 16:28:49 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/minirt.h"

t_color	init_color(int red, int green, int blue)
{
	t_color	color;

    color.red = red;
    color.green = green;
    color.blue = blue;
    color.hexa = rgb_to_hexadecimal(0, red, green, blue)
	return (color);
}

t_pos	init_position(float x, float y, float z)
{
	t_pos	pos;

    pos.x = x;
    pos.y = y;
    pos.z = z;
	return (pos);
}

t_vector	init_vector(float x, float y, float z)
{
	t_vector vector;

    vector.x = x;
    vector.y = y;
    vector.z = z;
	return (vector);
}

