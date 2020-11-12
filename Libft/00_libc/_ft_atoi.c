/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:42:36 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/12 22:36:44 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	l;
	int		minus;

	if (ft_isspace(*str))
		str++;
	if (*str++ == '-')
		minus = -1;
	while (ft_isdigit(*str))
	{
	}
	
