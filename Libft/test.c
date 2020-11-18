#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void){
	char *s1 = "63410682753376583680";
	char *s2 = "63410682753376583681";
	char *s3 = "-63410682753376583680";
	char *s4 = "-63410682753376583681";
	char *s5 = "634106827533765836810";
	char *s6 = "6341068275337658368100";
	char *s7 = "63410682753376583681000";
	char *s8 = "9223372036854775807";
	char *s9 = "9223372036854775808";
	char *s10 = "-9223372036854775808";
	char *s11 = "-9223372036854775809";

	printf("atoi_test[2] \n\n");
	printf("str\tatoi(str)\tft_atoi(str)\n");
	printf("%s\t%d\t%d\n", s1, atoi(s1), ft_atoi(s1));
	printf("%s\t%d\t%d\n", s2, atoi(s2), ft_atoi(s2));
	printf("%s\t%d\t%d\n", s3, atoi(s3), ft_atoi(s3));
	printf("%s\t%d\t%d\n", s4, atoi(s4), ft_atoi(s4));
	printf("%s\t%d\t%d\n", s5, atoi(s5), ft_atoi(s5));
	printf("%s\t%d\t%d\n", s6, atoi(s6), ft_atoi(s6));
	printf("%s\t%d\t%d\n", s7, atoi(s7), ft_atoi(s7));
	printf("%s\t%d\t%d\n", s8, atoi(s8), ft_atoi(s8));
	printf("%s\t%d\t%d\n", s9, atoi(s9), ft_atoi(s9));
	printf("%s\t%d\t%d\n", s10, atoi(s10), ft_atoi(s10));
	printf("%s\t%d\t%d\n", s11, atoi(s11), ft_atoi(s11));

	return (0);
}
