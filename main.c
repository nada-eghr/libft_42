 #include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "ABCDEFGH";
    char str2[] = "ABCDEFGH";
    printf("string: %s\n",ft_memcpy(str1+2,str1,4));
    printf("string: %s\n",ft_memmove(str2+2,str2,4));
}



