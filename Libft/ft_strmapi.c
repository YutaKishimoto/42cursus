/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:48:44 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/14 22:01:01 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*f_str;
	int		i;

	s_len = ft_strlen(s);
	if (!(f_str = (char *)malloc(s_len + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		f_str[i] = f(i, *s);
		i++;
	}
	f_str[i] = '\0';
	return (f_str);
}
