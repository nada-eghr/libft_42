#include "libft.h"
#include <stdio.h>
#include <string.h>

char	upper(unsigned int i, char s)
{
	(void)i;
	if (s >= 'a' && s <= 'z')
		s -= 32;
	return (s);
}
#include <fcntl.h>

int	main(void)
{
	ft_calloc(-1, -1);
	//    char (*ptr) (unsigned int , char )= &upper;
	//    const char s[]= "nada essguiar";
	//    printf("%s",ft_strmapi(s,ptr));
}

//     char *tab = "nada essguiar 1337";
//     int i = 0;
//     // char *str = "NADA";
//     // int i =0;
//     // while(i < 5)
//     // printf("%c\n",str[i++]);

//     // char **ft = ft_split(tab,'\0');
//     // while (ft[i]){

//     //     printf("%s\n",ft[i]);
//     //     free(ft[i]);
//     //     i++;
//     // }

//     // free(ft);
//     char d[] = "nada essghiarna";

//     printf("%s",ft_strtrim(d,"na"));
// }
// void upper(unsigned int i , char *s)
// {
//     (void)i ;
//     if (*s >= 'a' && *s <= 'z')
//         *s -= 32;

// }
// int add(int a , float b,int v) {return (a +b +v);}

// int	main(void)
// {
//     // int a =45;
//     // int *ptr = &a;
//     //printf("%d\n",*ptr);
//     int (*p)(int a , float b,int ) = &add;
//     void (*ptr)(unsigned int, char *) = &upper;
//     char s[] = "nada essguiar";
//     ft_striteri(s,ptr);
//     printf("%s",s);

// }