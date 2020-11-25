/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:15:18 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/25 20:19:39 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (start > ft_strlen(s))
		return ((char *)s);
	if (!(sub = malloc(len + 1)))
		return (NULL);
	while (len-- > 1 || *(s + start))
	{
		*sub++ = *((s++) + start);
	}
	*sub = '\0';
	return (sub);
}
