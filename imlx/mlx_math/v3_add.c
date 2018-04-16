/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:32:30 by mienache          #+#    #+#             */
/*   Updated: 2018/01/25 20:32:31 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_math.h>

t_v3	v3_add(t_v3 v1, t_v3 v2)
{
	t_v3	result;

	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return (result);
}