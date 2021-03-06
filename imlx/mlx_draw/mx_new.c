/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:41:52 by mienache          #+#    #+#             */
/*   Updated: 2018/01/26 11:41:53 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_draw.h>

void	mx_new(t_mx4 *mx)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		mx->x[i] = (i == 0) ? 1 : 0;
		mx->y[i] = (i == 1) ? 1 : 0;
		mx->z[i] = (i == 2) ? 1 : 0;
		mx->t[i] = (i == 3) ? 1 : 0;
	}
}
