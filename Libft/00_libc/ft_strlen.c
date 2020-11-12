/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:41:32 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 14:39:37 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}