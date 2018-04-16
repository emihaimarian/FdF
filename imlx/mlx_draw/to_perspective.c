/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_perspective.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 12:09:43 by mienache          #+#    #+#             */
/*   Updated: 2018/01/26 12:09:44 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_draw.h>

void	to_perspective(t_v3 v3, t_v2 *v2, int zoom)
{
	if (v3.z == 0)
		v3.z = 1;
	v2->x = FOCAL_DIST * v3.x / v3.z * zoom + W_WIDTH / 2;
	v2->y = FOCAL_DIST * v3.y / v3.z * zoom + W_HEIGHT / 2;
}
