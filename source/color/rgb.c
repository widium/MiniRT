/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:16:23 by ebennace          #+#    #+#             */
/*   Updated: 2022/10/28 16:16:38 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"

int    rgb_to_hexadecimal(int t, int r, int g, int b)
{
    return (t << 24 | r << 16 | g << 8 | b);
}
