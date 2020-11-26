/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:50:09 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/26 11:46:59 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strctrim(char const *s1, char const c)
{
	size_t	trmsize;
	char	*trm;
	char	*t;

	while (*s1 && (*s1 == c))
		s1++;
	trmsize = ft_strlen(s1);
	while ((*(s1 + trmsize - 1) == c) && (trmsize > 0))
		trmsize--;
	if (!(trm = (char *)malloc(trmsize + 1)))
		return (NULL);
	t = trm;
	while (trmsize--)
		*t++ = *s1++;
	*t = '\0';
	return (trm);
}
