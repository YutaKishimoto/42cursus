/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:42:36 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/13 01:16:27 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long	l;
	int				minus;

	l = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		l *= 10;
		l += *str - '0';
		str++;
		if (minus == 1 && l > LONG_MAX)
			return (-1);
		if (minus == -1 && l > LONG_MIN * minus)
			return (0);
	}
	return ((int)l * minus);
}
