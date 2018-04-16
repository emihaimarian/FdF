/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   center_mesh.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 19:07:39 by mienache          #+#    #+#             */
/*   Updated: 2018/02/06 19:07:40 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_draw.h>

void	center_mesh(t_mesh *mesh)
{
	mx_new(&mesh->init_translation);
	mx_new(&mesh->persp_rotation);
	mx_new(&mesh->ortho_rotation);
	mx_translate(&mesh->init_translation,
		-(mesh->width / 2 - (((int)(mesh->width) % 2 == 1) ? 0.5 : 0)), 0,
		-(mesh->depth / 2 - (((int)(mesh->depth) % 2 == 1) ? 0.5 : 0)));
	mx_rotate(&mesh->persp_rotation, 180, 0, 0);
	mx_rotate(&mesh->ortho_rotation, 0, 180, 0);
}
