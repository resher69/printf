#include <stdio.h>
#include <stdlib.h>
#include "includes/ft_printf.h"
#include <limits.h>
int	main(void)
{
	char	*test = "0000000000000000000000000000000000000000001";
	int d, i;
	// d = ft_strlen(test);
	// printf("g ecri %d\n\n", d);

	d = printf("|%-192.131%|\n");
	i = ft_printf("|%-192.131%|\n");
	printf("g ecri %i carac alor ke jaurai du ecrire %d\n", i, d);
//LONG_MIN, LONG_MAX)
//ULONG_MAX, -ULONG_MAX

//1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.KO 9.SIGSEGV 10.SIGSEGV 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.OK 22.SIGSEGV 23.SIGSEGV 24.SIGSEGV 25.SIGSEGV 26.SIGSEGV 27.OK 28.KO 29.KO 30.OK 31.KO 32.KO 33.KO 
// TEST(1, print(""));
//         TEST(2, print("ccccc"));
//         TEST(3, print("ddddd"));
//         TEST(4, print("ppppp"));
//         TEST(5, print(" %%c%%s%%p%%d%%i%%u%%x%%X%% "));
//         TEST(6, print(" a%c%%c%%s%%p%%d%%i%%u%%x%%X%% ", 0));
//         TEST(7, print(" Tripouille "));
//         TEST(8, print(" a%c%%c%%s%%p%%d%%i%%u%%x%%X%%p%p", 0, (void *)42));
//         TEST(9, print(" a%c%%c%%s%%p%%d%%i%%u%%x%%X%%p%s", 0, ""));
//         TEST(10, print("%%%%%%%%%%%%%%%%%s%%%s%%%s", "", "", ""));
//         TEST(11, print("%s+", ""));
//         TEST(12, print("%sChinimala%s", "xXx ", " xXx"));
//         TEST(13, print("%s = <3 %s", "", ""));
//         TEST(14, print("%s", NULL));
//         TEST(15, print(" 10%s ", "42"));
//         TEST(16, print("%.4s%.s", "12345", "12345"));
//         TEST(17, print("%10.4s%.5s", "12345", "12345"));
//         TEST(18, print("%10.4s%s", "12345", "12345"));
//         TEST(19, print("s%10.4s%ss", "12345", "54321"));
//         TEST(20, print("0%10.4s0%ss", "12345", "54321"));
//         TEST(21, print("*%10.4s*%ss", "1", "5"));
//         TEST(22, print("%%*.s%10.4s*%ss", "1", "5"));
//         TEST(23, print("%%*.s%10.4s%%*.s*%ss%%*.s", "1", "5"));
//         TEST(24, print("%%*.s%c%%*.s*%ss%%*.s", 0, "5"));
//         TEST(25, print("%%*.s%c%%*.s*%ss%%*.s", '2', ""));
//         TEST(26, print("%%*.s%c%%*.s*%ss%%*.s", '0', "  "));
//         TEST(27, print("%.5s%.s", "12345", "12345"));
//         TEST(28, print("%%*.c%c%%*.s*%ps%%*.X", '0', NULL));
//         TEST(29, print("%%%s%c%%c", "", 0));
//         TEST(30, print("%10.*i%*.10i", 7, 42, 8, -42));
//         TEST(31, print(" %% %% %% %% %c %%cc%%cc%%%c ", -1, 0));
//         TEST(32, print(" %%* *%%. %%* *%%. .-%c -%%*cc*%%c*c%%%c %s%%%c", -1, 1, "Tripouille", 0));
//         TEST(33, print("xXx%x%XxXx%%xXx%x%X", 15, 15, 16, 16));
}
