/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 01:36:24 by mienache          #+#    #+#             */
/*   Updated: 2018/01/26 01:36:27 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_draw.h>

void		mx_rotate(t_mx4 *transform, double x, double y, double z)
{
	*transform = mx_mult_4x4(*transform, mx_rot_x(x));
	*transform = mx_mult_4x4(*transform, mx_rot_y(y));
	*transform = mx_mult_4x4(*transform, mx_rot_z(z));
}
