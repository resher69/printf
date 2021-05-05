#include <stdio.h>
#include <stdlib.h>
#include "includes/ft_printf.h"

int	main(void)
{
	char	*test = "0000000000000000000000000000000000000000001";
	int d, i;
	// d = ft_strlen(test);
	// printf("g ecri %d\n\n", d);

	d = printf("| %-2.2X |\n", 0);
	i = ft_printf("| %-2.2X |\n", 0);
	printf("g ecri %i carac alor ke jaurai du ecrire %d\n", i, d);

}
