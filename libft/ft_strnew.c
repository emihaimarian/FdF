/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 12:57:00 by mienache          #+#    #+#             */
/*   Updated: 2017/12/07 07:40:11 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = -1;
	if ((str = (char*)ft_memalloc((size + 1) * sizeof(char))))
	{
		while (++i < size)
			str[i] = '\0';
		return (str);
	}
	return (NULL);
}
