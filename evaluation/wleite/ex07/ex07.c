#include <stdio.h>

char    *ft_strupcase(char *str);

int    main(void)
{
    char str[] = { "NomE" };

    printf("\nFT_STRUPCASE: OK=NOME | KO=NomE -> %s\n\n", ft_strupcase(str));

    return (0);
}