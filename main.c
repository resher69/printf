#include <stdio.h>
#include <stdlib.h>
#include "includes/ft_printf.h"

int main(void)
{
	char test;

	printf("%.50s\n", "test");
	ft_printf("%.50s", "test");
}
