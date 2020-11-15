/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/15 20:04:01 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!(split = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
			**split++ = *s++;
		else
		{
			**split++ = '\0';
			*split = split;
		}
	}
	**split = (NULL);
	return (split);
}
