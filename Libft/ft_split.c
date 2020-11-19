/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/19 23:44:29 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!(split = (char **)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
			**split++ = *s++;
		else
		{
			**split++ = '\0';
			if (!(*split = (char *)malloc(sizeof(char *))))
			{
				free(split);
				return (NULL);
			}
			*split = split;
		}
	}
	**split = (NULL);
	return (split);
}
