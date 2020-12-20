/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_space.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:59:01 by tyamagis          #+#    #+#             */
/*   Updated: 2020/12/20 16:45:06 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** vars
**  - global init
**  - global not init
**
**  - local
**  - - static init
**  - - static not init
**  - - normal var
**
** Arrays
**  - static array
**  - int array
**  - char array
**  - malloc array
**  - char literal
*/

#include <stdio.h>
#include <stdlib.h>

// GLOBAL
int g1 = 255;
int g2;

int main(void)
{
	// LOCAL
	//var
	static int st_v1 = 511;
	static int st_v2;
	int v1 = 1023;
	char v2 = 63;

	// ARRAY
	static char st_a1[128];
	static char st_a2[128] = "this is the static char array.";
	char *str1 = "this is the char pointer [LITERAL].";
	char *str_m = malloc(128);

	// var settings display
	printf("---- settings ----\n");
	printf("<GLOBAL>\n");
	printf("\tint g1 = 255;\n\tint g2;\n");
	printf("<LOCAL>\n");
	printf("\tstatic int st_v1 = 511;\n\tstatic int st_v2;\n");
	printf("\tint v1 = 1023;\n\tchar v2 = 63;\n");
	printf("<ARRAY>\n");
	printf("\tstatic char st_a1[128];\n");
	printf("\tstatic char st_a2[128] = \"this is the static char array.\";\n");
	printf("\tchar *str1 = \"this is the char pointer [LITERAL];\n");
	printf("\tchar *str_m = malloc(128);\n");
	// memory display
	printf("---- VAR ----\n");
	printf("[name]\t[value]\t\t[address]\n");
	printf("g1\t%8d\t%10x\n", g1, &g1);
	printf("g2\t%8d\t%10x\n", g2, &g2);
	printf("st_v1\t%8d\t%10x\n", st_v1, &st_v1);
	printf("st_v2\t%8d\t%10x\n", st_v2, &st_v2);
	printf("v1\t%8d\t%10x\n", v1, &v1);
	printf("v2\t%8d\t%10x\n", v2, &v2);

	printf("---- ARRAY ----\n");
	printf("st_a1[0]\t%8d\t%10x\n", st_a1[0], st_a1);
	printf("st_a2[0]\t%8d\t%10x\n", st_a2[0], st_a2);
	printf("*str1\t%8d\t%10x\n", *str1, str1);
	printf("*str_m\t%8d\t%10x\n", *str_m, str_m);

	printf("---- FUNCTIONS ----\n");
	printf("main\t%8d\t%10x\n", *main, main);
	printf("printf\t%8d\t%10x\n", *printf, printf);
	printf("malloc\t%8d\t%10x\n", *malloc, malloc);

	return (0);
}
