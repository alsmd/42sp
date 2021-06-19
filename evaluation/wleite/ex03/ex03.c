#include <stdio.h>

int    ft_str_is_numeric(char *str);

int    main(void)
{
    //alpha 0 1 2 3 3 ... 9
    char str[] = { "0123" };
    char str2[] = { "012a" };
    char str3[] = { "012+" };

    printf("\n   FT_STR_IS_NUMERIC: OK=1 -> %d\n", ft_str_is_numeric(str));
    printf("   FT_STR_IS_NUMERIC: OK=0 -> %d\n", ft_str_is_numeric(str2));
    printf("   FT_STR_IS_NUMERIC: OK=0 -> %d\n\n", ft_str_is_numeric(str3));

    return (0);
}