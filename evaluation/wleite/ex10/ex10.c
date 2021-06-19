#include <stdio.h>
#include <bsd/string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int    main(void)
{
    char    src[11] = { "0123456789" };
    char    dest[11] = { "" };

    char    src2[11] = { "0123456789" };
    char    dest2[11] = { "" };

    unsigned int    size = 10;

    ft_strlcpy(dest, src, size);
    printf("\nFT_STRLCPY: %s\n", dest);
    strlcpy(dest2, src2, size);
    printf("   STRLCPY: %s\n\n", dest2);

    printf("   STRLCPY  COPIED BYTES: %zu\n", strlcpy(dest, src, size));
    printf("FT_STRLCPY  COPIED BYTES: %d", ft_strlcpy(dest, src, size));

    if (ft_strlcpy(dest, src, size) == strlcpy(dest, src, size))
    {
        printf("\n\n=======OK=======\n\n");
    } else
    {
        printf("\n\n=======KO=======\n\n");
    }
    return (0);
}