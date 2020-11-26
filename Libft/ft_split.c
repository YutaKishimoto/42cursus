/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/27 06:03:32 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** delete INCLUDE <stdio> and MAIN FUNC!!!!
*/

#include <stdio.h>

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
	end_s = (char *)(s + len);
	while (s++ != end_s)
	{
		if (*(s - 1) == c && *s == c)
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
	int		ix;
	size_t	iy;

	i = 0;
	ix = 0;
	iy = 0;
	while (s[i] && iy < len)
	{
		while (s[i] == c)
			i++;
		ix = i;
		while (s[i] != c)
			i++;
		if (!(spl[iy++] = ft_subsplt(s + ix, i - ix)))
		{
			free(spl);
			return (NULL);
		}
	}
	spl[iy] = (NULL);
	return (spl);
}

char			**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	len;
	int		i;
	int		j;

	len = ft_spltlen(s, c) + 1;
	if (!(*s) || !(spl = (char **)malloc(sizeof(char *) * /* numOfIdxs */)))
		return (NULL);
	while (*s && (*s == c))
		s++;
	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
		{
			i++;
			if (!(spl[i] = (char *)malloc(sizeof(char) * /* numOfChars*/)))
			{
				free(spl);
				while (i-- != 0)
					free(spl[i]);
				return (NULL);
			}
		}
		spl[i][j] = '\0';
	}
	spl[i] = NULL;
	return (spl);
}

int main(void){
	int i;

	char *s1 = "a,b,c";
	char c = ',';
	char **r1 = ft_split(s1, c);

	i = 0;
	printf("split\"%s\"\n\n", s1);
	while (r1)
	{
		printf("r1[%d] : \"%s\"\n", i, r1[i]);
		i++;
	}
	return (0);
}
