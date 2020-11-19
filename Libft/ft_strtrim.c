/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:52:09 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/19 23:32:59 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 *
 * VERY ROUGH ABOUT MEMORY MNGMNT, 
 * only login struct,
 * NEED TO deepthought.
 *
 */

static int	ccmpset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trim;

	len = ft_strlen(s1);
	while (ccmpset(s1[len], set))
		len--;
	while (ccmpset(*s1, set))
		s1++;
	len = (&s1[len] - s1);
	if (!(trim = (char *)malloc(len)))
		return (NULL);
	while (len-- > 0)
		*trim++ = *s1++;
	*trim = '\0';
	return (trim);
}
