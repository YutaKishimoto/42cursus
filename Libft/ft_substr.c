/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:15:18 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/20 22:38:36 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;

	if (!(ss = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (len - i > 0)
	{
		*(ss + i) = *(s + start + i);
		i++;
	}
	*ss = '\0';
	return (ss);
}
