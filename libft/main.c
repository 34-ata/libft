#include "libft.h"
int main()
{
    printf("ft_strlen = %zu\n", ft_strlen("fatih"));
    printf("ft_isalpha = %d\n", ft_isalpha(123));
    printf("ft_isalnum = %d\n", ft_isalnum(')'));
    char src[] = "fatih ";
    printf("ft_memset = %s\n", ft_memset(src, '&', 3));
    char src1[] = "mehmet";
    char dest[] = "fatih ";
    ft_strlcat(dest, src1, 14);
    printf("ft_strlcat = %s\n", dest);
    printf("ft_toupper = %c\n", ft_toupper('A'));
    printf("ft_tolower = %c\n", ft_tolower('B'));
    printf("ft_strchr = %s\n", ft_strchr("fatzih", 'z'));
    printf("ft_strrchr = %s\n", ft_strrchr("faata mebhmet", 'b'));
    printf("ft_strncmp = %d\n", ft_strncmp("abcdef", "abc\\375xx", 5));
    printf("ft_strlcat = %zu\n", ft_strlcat("fatih", "mehmet", 12));
    printf("ft_memchr = %s\n", ft_memchr("fatih", 'i', 4));
    printf("ft_memcmp = %d\n", ft_memcmp("fatih", "fat0ih", 4));
    char src3[10] = "Merhaba";
    //char dest2[20];
    printf("Memcpy ile sonuç : %s\n", ft_memcpy(src3 + 3, src3, 6));

    //char src2[10] = "Merhaba";
    //char dest3[20];
    //printf("Memmove ile sonuç : %s\n", ft_memmove(src2 + 3, src2, 6));
    char a[12];
    int b[] = {4,5,6};
    ft_memmove(a,b, sizeof(b));
    for(int i = 0;i<12;i+=4)
        printf("le me memmove = %d\n", a[i]);
    //printf("src = %s\n", src2);

    printf("ft_strnstr = %s\n", ft_strnstr("bilgisayar", "sayar", 11));
    printf("ft_atoi = %d\n", ft_atoi("     --+++--++324fa"));
    printf("ft_calloc = %s\n", ft_calloc(1, 16));
    printf("ft_strdup = %s\n", ft_strdup("fatih mehmet ata "));
    printf("ft_substr = %s\n", ft_substr("fatih mehmet ata", 6, 6));
    printf("ft_strjoin = %s\n", ft_strjoin("fatih mehmet ", "ata"));
    printf("ft_strtrim = %s\n", ft_strtrim((const char *)"", (const char *)""));

    int i = 0;
    while (i < 3)
    {
        printf("ft_split = %s\n", ft_split((char const *)"fatih mehmet ata", ' ')[i]);
        i++;
    }
    char *res = ft_itoa(-229827);
    printf("ft_ itoa = %s\n", res);
    free(res);

    int fd = open("my_file.txt", O_WRONLY);
    ft_putchar_fd('a', fd);
    close(fd);
    fd = open("my_file.txt", O_RDONLY);
    char *buffer;
    buffer = ft_calloc(1, 100);
    read(fd, buffer, 100);
    printf("ft_putchar_fd = %s\n", buffer);
    close(fd);
    free(buffer);

    fd = open("my_file2.txt", O_WRONLY);
    ft_putstr_fd("fatih mehmet ata", fd);
    close(fd);
    fd = open("my_file2.txt", O_RDONLY);
    char *buffer1;
    buffer1 = ft_calloc(1, 100);
    read(fd, buffer1, 100);
    close(fd);
    printf("ft_putstr_fd = %s\n", buffer1);
    free(buffer1);

    fd = open("my_file.txt", O_WRONLY);
    ft_putendl_fd("endl", fd);
    close(fd);
    fd = open("my_file3.txt", O_RDONLY);
    char *buffer2;
    buffer2 = ft_calloc(1, 100);
    read(fd, buffer2, 100);
    printf("ft_putendl_fd = %s", buffer2);
    printf("deneme\n");
    close(fd);
    free(buffer2);

    fd = open("my_file4.txt", O_WRONLY);
    ft_putnbr_fd(-2147483648, fd);
    close(fd);
    fd = open("my_file4.txt", O_RDONLY);
    char *buffer3;
    buffer3 = ft_calloc(1, 100);
    read(fd, buffer3, 100);
    printf("ft_putnbr_fd = %s\n", buffer3);
    close(fd);
    free(buffer3);
}