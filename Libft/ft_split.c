/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/28 20:49:02 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** #include <stdio.h>
*/

static size_t	ft_splt_idx(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			idx++;
		s++;
	}
	idx++;
	return (idx);
}

static size_t	ft_splt_len(const char *s, int c)
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
	while (s++ <= end_s)
	{
		if (*(s - 1) == c && *s == c)
			len--;
	}
	return (len);
}

static void		ft_splt_cpy(char **sp, char const *s, char c)
{
	int i;
	int j;

	i = 0;
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			sp[i][j++] = *s++;
		}
		if (*s || j != 0)
		{
			sp[i++][j] = '\0';
			sp[i] = &sp[i - 1][j + 1];
		}
	}
	sp[i] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**sp;

	if (!*s || !(sp = (char **)malloc(sizeof(char *) * ft_splt_idx(s, c))))
		return (NULL);
	if (!(*sp = (char *)malloc(ft_splt_len(s, c) + 2)))
	{
		free(sp);
		return (NULL);
	}
	ft_splt_cpy(sp, s, c);
	return (sp);
}

/*
** testcase
**
** int				main(void)
** {
** 	int i;
** 	int j;
**
** 	char *s1 = "split  ||this|for|me|||||!|";
** 	char c = '|';
** 	char **r1 = ft_split(s1, c);
**
** 	i = 0;
** 	printf("----\nsplit : \"%s\"\n\n", s1);
** 	while (r1[i])
** 	{
** 		printf("r1[%d] : \"%s\"\t%12p\n", i, r1[i], r1[i]);
**  		i++;
** 	}
** 	printf("r1[%d] : \"%s\"\t%12p\n", i, r1[i], r1[i]);
** 	i = 0;
** 	while (r1[i])
** 	{
** 		j = 0;
** 		while (r1[i][j])
** 		{
** 			printf("r1[%d][%d] : %c : %12s\n", i, j, r1[i][j], &(r1[i][j]));
** 			j++;
** 		}
** 		i++;
** 	}
**
** 	char *s2 = "aaa,,,,,,,,aaaaa";
** 	char c2 = ',';
** 	char **r2 = ft_split(s2, c2);
**
** 	i = 0;
** 	printf("----\nsplit : \"%s\"\n\n", s2);
** 	while (r2[i])
** 	{
** 		printf("r2[%d] : \"%s\"\t%12p\n", i, r2[i], r2[i]);
** 		i++;
** 	}
** 	printf("r2[%d] : \"%s\"\t%12p\n", i, r2[i], r2[i]);
** 	i = 0;
** 	while (r2[i])
** 	{
** 		j = 0;
** 		while (r2[i][j])
** 		{
** 			printf("r2[%d][%d] : %c : %12s\n", i, j, r2[i][j], &(r2[i][j]));
** 			j++;
** 		}
** 		i++;
** 	}
**
** 	char *s3 = ",,,,,";
** 	char c3 = ',';
** 	char **r3 = ft_split(s3, c3);
**
** 	i = 0;
** 	printf("----\nsplit : \"%s\"\n\n", s3);
** 	while (r3[i])
** 	{
** 		printf("r3[%d] : \"%s\"\t%12p\n", i, r3[i], r3[i]);
** 		i++;
** 	}
** 	printf("r3[%d] : \"%s\"\t%12p\n", i, r3[i], r3[i]);
** 	i = 0;
** 	while (r3[i])
** 	{
** 		j = 0;
** 		while (r3[i][j])
** 		{
** 			printf("r3[%d][%d] : %c : %12s\n", i, j, r3[i][j], &r3[i][j]);
** 			j++;
** 		}
** 		i++;
** 	}
**
** 	return (0);
** }
*/
