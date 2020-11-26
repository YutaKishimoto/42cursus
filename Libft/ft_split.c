/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/27 02:49:30 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_spltlen(const char *s, int c)
{
	size_t	len;
	char	*end_s;

	len = 0;
	while (*s && (*s == c))
		s++;
	len = ft_strlen(s);
	while (*(s + len - 1) == c && len > 0)
		len--;
	end_s = (char *)(s + len - 1);
	while (s++ != end_s)
	{
		if (*(s - 1) == c && *s != c)
			len--;
	}
	return (len);
}

static char		*ft_subsplt(char const *s, int len)
{
	char	*spl;
	int		i;

	if (!(spl = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (len-- > 0)
	{
		spl[i] = s[i];
		i++;
	}
	spl[i] = '\0';
	return (spl);
}

static char		**ft_splalloc(char **spl, char const *s, size_t len, char c)
{
	int		i;
	int		idx;
	size_t	cp;

	i = 0;
	idx = 0;
	cp = 0;
	while (s[i] && cp < len)
	{
		while (s[i] == c)
			i++;
		idx = i;
		while (s[i] != c)
			i++;
		if (!(spl[cp++] = ft_subsplt(s + idx, i - idx)))
		{
			free(spl);
			return (NULL);
		}
	}
	spl[cp] = (NULL);
	return (spl);
}

char			**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	len;

	len = ft_spltlen(s, c) + 2;
	if (!(spl = (char **)malloc(sizeof(char *) * len)))
		return (NULL);
	spl = ft_splalloc(spl, s, len, c);
	return (spl);
}
