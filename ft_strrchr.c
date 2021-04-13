#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = 0;
    while (s[len])
    {
        len++;    
    }
    len++;
    while (len >= 0)
    {
        if(s[len] == (char)c)
            return ((char*)(s + len));
        len--;
    }
    return (NULL);
} 
