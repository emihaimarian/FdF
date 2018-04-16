/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx_scal_2x2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 11:02:27 by mienache          #+#    #+#             */
/*   Updated: 2018/01/17 11:02:28 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_math.h>

t_mx2	mx_scal_2x2(t_mx2 mx, double d)
{
	t_mx2	result;

	result.x[0] = mx.x[0] * d;
	result.x[1] = mx.x[1] * d;
	result.y[0] = mx.y[0] * d;
	result.y[1] = mx.y[1] * d;
	return (result);
}
