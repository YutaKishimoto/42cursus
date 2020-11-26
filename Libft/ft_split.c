/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:45:53 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/26 11:30:22 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**spl;
	char	*t;
	size_t	s_len;
	int		seq_c;

	t = ft_strctrm(s, c);
	t_len = ft_strlen(t);
	while (*t)
		seq_c = ((*t == c) && (*++t == c)) ? ++seq_c : seq_c;
	if (!(spl = (char **)malloc(s_len - seq_c + 1)))
		return (NULL);
	t -= t_len;
	while (*t)
	{
		if ((*(t - 1) == c) && (*t++ != c))
		{
			**spl++ = '\0';

		else if (*t != c)
			**spl++ = *t++;
		else
			t++;
	}
	**spl = (NULL);
	return (spl);
}
