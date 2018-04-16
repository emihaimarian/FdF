/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_button.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 18:25:28 by mienache          #+#    #+#             */
/*   Updated: 2018/02/09 18:25:29 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** Clear the image used for displaying the selected colors in the ui
*/

void	clear_button(t_img_data *image, int alpha)
{
	int		i;
	int		*current_pixel;

	i = 0;
	while (i < GRAD_W * GRAD_H)
	{
		current_pixel = (image->pixel) + i;
		if (alpha == 1)
			*current_pixel = 0X00000000;
		else
			*current_pixel = 0XFF000000;
		i++;
	}
}
