#include <stdio.h>
#include <stdlib.h>
#include "includes/ft_printf.h"

int	main(void)
{
	char	*test = "0000000000000000000000000000000000000000001";
	int d ; 
	// d = ft_strlen(test);
	// printf("g ecri %d\n\n", d);

	printf("| %u |\n", 0);
	ft_printf("| %u |", 0);
}
