/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/26 22:40:19 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_subsplit(char *spl, char *t, char c)
{
	while (*t)
	{
		if ((*(t - 1) == c) && (*t++ != c))
			*spl++ = '\0';
		else if (*t != c)
			*spl++ = *t++;
		else
			t++;
	}
	return (spl);
}

char		**ft_split(char const *s, char c)
{
	char	**spl;
	char	*t;
	size_t	t_len;
	int		seq_c;

	if (!(t = ft_strctrim(s, c)))
		return (NULL);
	t_len = ft_strlen(t);
	while (*t)
		seq_c = ((*t == c) && (*++t == c)) ? ++seq_c : seq_c;
	if (!(spl = (char **)malloc((sizeof(char *)) * (t_len - seq_c + 1))))
	{
		free(t);
		return (NULL);
	}
	t -= t_len;
	spl = t;
	t = ft_subsplit(spl, t, c);
	*t = (NULL);
	return (spl);
}
