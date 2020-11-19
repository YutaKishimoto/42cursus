/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:24:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/19 14:34:06 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	f00(){;}
void	f01(){;}
void	f02(){;}
void	f03(){;}
void	f04(){;}
void	f05(){;}
void	f06(){;}

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
		printf("\nR : return main menu\n");
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){f00();}
		else if (c == '1'){f01();}
		else if (c == '2'){f02();}
		else if (c == '3'){f03();}
		else if (c == '4'){f04();}
		else if (c == '5'){f05();}
		else if (c == '6'){f06();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	f10(){;}
void	f11(){;}
void	f12(){;}
void	f13(){;}
void	f14(){;}
void	f15(){;}
void	f16(){;}

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
		printf("\nR : return main menu\n");
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){f10();}
		else if (c == '1'){f11();}
		else if (c == '2'){f12();}
		else if (c == '3'){f13();}
		else if (c == '4'){f14();}
		else if (c == '5'){f15();}
		else if (c == '6'){f16();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	f20(){;}
void	f21(){;}
void	f22(){;}
void	f23(){;}
void	f24(){;}
void	f25(){;}
void	f26(){;}

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
		printf("\nR : return main menu\n");
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){f20();}
		else if (c == '1'){f21();}
		else if (c == '2'){f22();}
		else if (c == '3'){f23();}
		else if (c == '4'){f24();}
		else if (c == '5'){f25();}
		else if (c == '6'){f26();}
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

void	f40(){;}
void	f41(){;}

void	t_others(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("4 : test calloc, strdup\n");
		printf("--- --- --- --- ---\n");
		printf("0 : calloc\n");
		printf("1 : strdup\n");
		printf("\nR : return main menu\n");
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){f40();}
		else if (c == '1'){f41();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	f50(){;}
void	f51(){;}
void	f52(){;}
void	f53(){;}
void	f54(){;}
void	f55(){;}
void	f56(){;}
void	f57(){;}
void	f58(){;}
void	f59(){;}

void	t_add(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("5 : test additional\n");
		printf("--- --- --- --- ---\n");
		printf("0 : substr\n");
		printf("1 : strjoin\n");
		printf("2 : strtrim\n");
		printf("3 : split\n");
		printf("4 : itoa\n");
		printf("5 : strmapi\n");
		printf("6 : putchar_fd\n");
		printf("7 : putstr_fd\n");
		printf("8 : putendl_fd\n");
		printf("9 : putnbr_fd\n");
		printf("\nR : return main menu\n");
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){f50();}
		else if (c == '1'){f51();}
		else if (c == '2'){f52();}
		else if (c == '3'){f53();}
		else if (c == '4'){f54();}
		else if (c == '5'){f55();}
		else if (c == '6'){f56();}
		else if (c == '7'){f57();}
		else if (c == '8'){f58();}
		else if (c == '9'){f59();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

void	f60(){;}
void	f61(){;}
void	f62(){;}
void	f63(){;}
void	f64(){;}
void	f65(){;}
void	f66(){;}
void	f67(){;}
void	f68(){;}

void	t_lst(void)
{
	char c;
	while (1){
		printf("--- --- --- --- ---\n");
		printf("6 : test lst- (BONUS)\n");
		printf("--- --- --- --- ---\n");
		printf("0 : lstnew\n");
		printf("1 : lstadd_front\n");
		printf("2 : lstsize\n");
		printf("3 : lstlast\n");
		printf("4 : lstadd_back\n");
		printf("5 : lstdelone\n");
		printf("6 : lstclear\n");
		printf("7 : lstiter\n");
		printf("8 : lstmap\n");
		printf("\nR : return main menu\n");
			printf("\nQuit this program, press 'Ctrl + C'\n\n");
		printf("SELECT your test\n\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){f60();}
		else if (c == '1'){f61();}
		else if (c == '2'){f62();}
		else if (c == '3'){f63();}
		else if (c == '4'){f64();}
		else if (c == '5'){f65();}
		else if (c == '6'){f66();}
		else if (c == '7'){f67();}
		else if (c == '8'){f68();}
		else if (c == 'R'){return ;}
		else
		{
			printf("! ! ! ! !\n\n");
			printf("wrong number input. Try again\n\n >>");
		}
	}
}

int	main(void)
{
	char c;
	while (1)
	{
		printf("\x1b[44m--- --- --- --- ---\n");
		printf("this is the test each functions. \n");
		printf("--- --- --- --- ---\x1b[m\n");
		printf("input number for each test\n\n");
		printf("0 : mem-\n");
		printf("1 : str-\n");
		printf("2 : is-\n");
		printf("3 : atoi\n");
		printf("4 : calloc, strdup\n");
		printf("5 : Part2. additionnals\n");
		printf("6 : Bonus\n");
		printf("\n\x1b[31mQuit this test, press 'Ctrl + C'\x1b[m\n\n");
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
