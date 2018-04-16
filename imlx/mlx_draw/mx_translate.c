/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 01:52:44 by mienache          #+#    #+#             */
/*   Updated: 2018/01/26 01:52:47 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_draw.h>

void	mx_translate(t_mx4 *transform, double x, double y, double z)
{
	t_v3	translation;

	translation.x = x;
	translation.y = y;
	translation.z = z;
	*transform = mx_mult_4x4(*transform, mx_trans(translation));
}
