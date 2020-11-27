/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/28 03:58:54 by tyamagis         ###   ########.fr       */
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
	end_s = (char *)(s + len + 1);
	while (s++ != end_s)
	{
		if (*(s - 1) == c && *s == c)
			len--;
	}
	return (len);
}

static void		ft_spltfree(char **c, int i)
{
	while (i >= 0)
		free(c[i--]);
	free(c);
}

static void		ft_spltcpy(char **sp, char const *s, char c )
{
	int i;
	int j;

	i = 0;
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		while (*s && (*s != c))
			sp[i][j++] = *s++;
		if (*s)
		{
			sp[i++][j] = '\0';
			if (!(sp[i] = (char *)malloc(1)))
				ft_spltfree(sp, i);
		}
	}
	sp[i] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**sp;

	if (!*s || !(sp = (char **)malloc(sizeof(char *))))
		return (NULL);
	if (!(*sp = (char *)malloc(ft_spltlen(s, c) + 1)))
		return (NULL);
	ft_spltcpy(sp, s, c);
	return (sp);
}

int				main(void)
{
	int i;

	char *s1 = ",,a,bc,,cde,,,defg,e,,,fgh,,,,";
	char c = ',';
	char **r1 = ft_split(s1, c);

	i = 0;
	printf("split\"%s\"\n\n", s1);
	while (r1[i])
	{
		printf("r1[%d] : \"%s\"\n", i, r1[i]);
		i++;
	}

	char *s2 = "aaa,,,,,,,,aaaaa";
	char c2 = ',';
	char **r2 = ft_split(s2, c2);

	i = 0;
	printf("split\"%s\"\n\n", s2);
	while (r2[i])
	{
		printf("r2[%d] : \"%s\"\n", i, r2[i]);
		i++;
	}

	char *s3 = ",,,,,,,,,   abcd,,ab,,cd,,,efg,,,hij,";
	char c3 = ',';
	char **r3 = ft_split(s3, c3);

	i = 0;
	printf("split\"%s\"\n\n", s3);
	while (r3[i])
	{
		printf("r1[%d] : \"%s\"\n", i, r3[i]);
		i++;
	}

	return (0);
}
