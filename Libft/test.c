/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:24:25 by tyamagis          #+#    #+#             */
/*   Updated: 2020/11/19 19:53:31 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	t_mem(){
}

void 	t_str(){
}

void	t_is(){
}

void	t_atoi(){
}

void	t_others(){
}

void	t_add(){
}

void	t_lst(){
}

void	t_all(){
	t_mem();
	t_str();
	t_is();
	t_others();
	t_add();
	t_lst();
}

/* put only '\n' */
void	br(){printf("\n");}

/* change font color */
void	f_bk(){printf("\x1b[30m");}		// black
void	f_r(){printf("\x1b[31m");}		// red
void	f_g(){printf("\x1b[32m");}		// green
void	f_y(){printf("\x1b[33m");}		// yellow
void	f_b(){printf("\x1b[34m");}		// blue
void	f_m(){printf("\x1b[35m");}		// magenta
void	f_c(){printf("\x1b[36m");}		// cyan
void	f_w(){printf("\x1b[37m");}		// white
void	f_def(){printf("\x1b[39m");}	// default

/* change background color */
void	b_bk(){printf("\x1b[40m");}		// black
void	b_r(){printf("\x1b[41m");}		// red
void	b_g(){printf("\x1b[42m");}		// green
void	b_y(){printf("\x1b[43m");}		// yellow
void	b_b(){printf("\x1b[44m");}		// blue
void	b_m(){printf("\x1b[45m");}		// magenta
void	b_c(){printf("\x1b[46m");}		// cyan
void	b_w(){printf("\x1b[47m");}		// Gray
void	b_def(){printf("\x1b[49m");}	// default

int	main(void)
{
	char c;
	while (1)
	{
		br();br();
		f_y();
		printf("--- --- --- --- ---\n");
		printf("this is the test each functions. \n");
		printf("--- --- --- --- ---\n");
		printf("0 : mem-\n1 : str-\n2 : is-\n3 : atoi\n4 : calloc, strdup\n");
		printf("5 : Part2. additionnals\n6 : Bonus\n7 : ALL\n");br();
		f_w();b_r();
		printf("Quit this test, press 'Ctrl + C'");
		f_def();b_def();br();br();
		f_g();
		printf("SELECT your test\n >> ");
		c = getchar();
		getchar();
		if (c == '0'){t_mem();}
		else if (c == '1'){t_str();}
		else if (c == '2'){t_is();}
		else if (c == '3'){t_atoi();}
		else if (c == '4'){t_others();}
		else if (c == '5'){t_add();}
		else if (c == '6'){t_lst();}
		else if (c == '7'){t_all();}
		else
		{
			printf("\x1b[31m! ! ! ! !\n\n");
			printf("wrong number input.\n\n! ! ! ! !\x1b[m\n\nTry again >>");
		}
	}
	return (0);
}
