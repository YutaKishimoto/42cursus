/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_original_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:13:31 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/09 21:12:53 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	const int i_Max = 2147483647;
	const int i_min = -2147483648;
	const int i_zero = 0;
	int i = 0;
	char c;

/* ------------------ */
/* atoi               */
/* ------------------ */
	printf("-----\ntest15 : atoi\n-----\n");
	printf("");

/* ------------------ */
/* isalpha            */
/* ------------------ */
	printf("-----\ntest16 : isalpha\n-----\n");
	printf("int isalpha(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isalpha(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isdigit            */
/* ------------------ */
	printf("-----\ntest17 : isdigit\n-----\n");
	printf("int isdigit(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isdigit(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isalnum            */
/* ------------------ */
	printf("-----\ntest18 : isalnum\n-----\n");
	printf("int isalnum(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isalnum(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isascii            */
/* ------------------ */
	printf("-----\ntest19 : isascii\n-----\n");
	printf("int isascii(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isascii(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* isprint            */
/* ------------------ */
	printf("-----\ntest20 : isprint\n-----\n");
	printf("int isprint(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, isprint(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* toupper            */
/* ------------------ */
	printf("-----\ntest21 : toupper\n-----\n");
	printf("int toupper(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, toupper(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

/* ------------------ */
/* tolwer             */
/* ------------------ */
	printf("-----\ntest22 : tolwer\n-----\n");
	printf("int tolower(int c)\n\n");

/* Test print 0 - 128 */
	i = -1;
	while (i++ < 128)
	{
		c = i;
		printf("i: %3d '%c', return:%d", i, c, tolower(i));
		if (i % 4 == 0)
			printf("\n");
		else
			printf("\t");
	}
	printf("\n");

	return (0);
}
