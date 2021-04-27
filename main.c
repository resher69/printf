#include <stdio.h>
#include <stdlib.h>
#include "includes/ft_printf.h"

int main(void)
{
	char test;

	printf("%*c\n", -2, '0');
	ft_printf("%*c", -2, '0');
}
