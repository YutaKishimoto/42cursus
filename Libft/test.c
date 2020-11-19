/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:24:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/19 13:44:39 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
/*
void	t_mem(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("0 : test mem-\n");
		printf("--- --- --- --- ---\n");
		printf("0 : memset\n");
		printf("1 : bzero\n");
		printf("2 : memcpy\n");
		printf("3 : memccpy\n");
		printf("4 : memmove\n");
		printf("5 : memchr\n");
		printf("6 : memcmp\n");
		printf("\nR : return main menu\n")
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){();}
		else if (c == '1'){();}
		else if (c == '2'){();}
		else if (c == '3'){();}
		else if (c == '4'){();}
		else if (c == '5'){();}
		else if (c == '6'){();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	t_str(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("1 : test str-\n");
		printf("--- --- --- --- ---\n");
		printf("0 : strlen\n");
		printf("1 : strlcpy\n");
		printf("2 : strlcat\n");
		printf("3 : strchr\n");
		printf("4 : strrchr\n");
		printf("5 : strnstr\n");
		printf("6 : strncmp\n");
		printf("\nR : return main menu\n")
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){();}
		else if (c == '1'){();}
		else if (c == '2'){();}
		else if (c == '3'){();}
		else if (c == '4'){();}
		else if (c == '5'){();}
		else if (c == '6'){();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}

}

void	t_is(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("2 : test is-\n");
		printf("--- --- --- --- ---\n");
		printf("0 : isalpha\n");
		printf("1 : isdigit\n");
		printf("2 : isalnum\n");
		printf("3 : isascii\n");
		printf("4 : isprint\n");
		printf("5 : toupper\n");
		printf("6 : tolower\n");
		printf("\nR : return main menu\n")
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){();}
		else if (c == '1'){();}
		else if (c == '2'){();}
		else if (c == '3'){();}
		else if (c == '4'){();}
		else if (c == '5'){();}
		else if (c == '6'){();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	t_atoi(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("3 : test atoi\n");
		printf("--- --- --- --- ---\n");
	}
}

void	t_others(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("4 : test calloc, strdup\n");
		printf("--- --- --- --- ---\n");
		printf("0 : calloc\n");
		printf("1 : strdup\n");
		printf("\nR : return main menu\n")
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){();}
		else if (c == '1'){();}
		else if (c == '2'){();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	t_add(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("5 : test additional\n");
		printf("--- --- --- --- ---\n");
		printf("0 : memset\n");
		printf("1 : bzero\n");
		printf("2 : memcpy\n");
		printf("3 : memccpy\n");
		printf("4 : memmove\n");
		printf("5 : memchr\n");
		printf("6 : memcmp\n");
		printf("\nR : return main menu\n")
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){();}
		else if (c == '1'){();}
		else if (c == '2'){();}
		else if (c == '3'){();}
		else if (c == '4'){();}
		else if (c == '5'){();}
		else if (c == '6'){();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	t_lst(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("0 : test mem-\n");
		printf("--- --- --- --- ---\n");
		printf("0 : memset\n");
		printf("1 : bzero\n");
		printf("2 : memcpy\n");
		printf("3 : memccpy\n");
		printf("4 : memmove\n");
		printf("5 : memchr\n");
		printf("6 : memcmp\n");
		printf("\nR : return main menu\n")
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){();}
		else if (c == '1'){();}
		else if (c == '2'){();}
		else if (c == '3'){();}
		else if (c == '4'){();}
		else if (c == '5'){();}
		else if (c == '6'){();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}
*/
int	main(void)
{
	char c;
	while (1)
	{
		printf("/x1b[44m--- --- --- --- ---\n");
		printf("this is the test each functions. \n");
		printf("--- --- --- --- ---/x1b[m\n");
		printf("input number for each test\n\n");
		printf("0 : mem-\n");
		printf("1 : str-\n");
		printf("2 : is-\n");
		printf("3 : atoi\n");
		printf("4 : calloc, strdup\n");
		printf("5 : Part2. additionnals\n");
		printf("6 : Bonus\n");
		printf("\nQuit this test, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){t_mem();}
		else if (c == '1'){t_str();}
		else if (c == '2'){t_is();}
		else if (c == '3'){t_atoi();}
		else if (c == '4'){t_others();}
		else if (c == '5'){t_add();}
		else if (c == '6'){t_lst();}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
	return (0);
}
