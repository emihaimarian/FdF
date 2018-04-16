/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblanks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 06:55:51 by mienache          #+#    #+#             */
/*   Updated: 2017/12/14 11:35:32 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isblanks(int c)
{
	if (c == ' ' || c == '\t' || c == '\f' ||
			c == '\r' || c == '\v' || c == '\n')
		return (1);
	return (0);
}
