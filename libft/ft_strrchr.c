/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 07:15:40 by mienache          #+#    #+#             */
/*   Updated: 2017/12/07 18:23:20 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long long	m;
	size_t		i;

	m = -1;
	i = -1;
	while (++i <= ft_strlen(s))
		if (s[i] == (char)c)
			m = i;
	if (m != -1)
		return ((char*)s + m);
	return (NULL);
}
