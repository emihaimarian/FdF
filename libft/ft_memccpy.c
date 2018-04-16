/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 19:51:40 by mienache          #+#    #+#             */
/*   Updated: 2017/12/08 14:36:06 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	x = (unsigned char)c;
	while (n-- > 0)
	{
		if (*s != x)
		{
			*d = *s;
			d++;
			s++;
		}
		else
			break ;
	}
	if ((int)n != -1)
	{
		*d = *s;
		return (d + 1);
	}
	return (NULL);
}
