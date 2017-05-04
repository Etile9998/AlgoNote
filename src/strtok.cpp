#include <cstdio>

char *strchr(const char *s, int c)
{
    while (*s != (char)c)
        if (!*s++)
            return 0;
    return (char *)s;
}

size_t strspn(const char *s1, const char *s2)
{
    size_t ret = 0;
    while (*s1 && strchr(s2, *s1++))
        ret++;
    return ret;
}

size_t strcspn(const char *s1, const char *s2)
{
    size_t ret = 0;
    while (*s1)
        if (strchr(s2, *s1))
            return ret;
        else
            s1++, ret++;
    return ret;
}

char *strtok(char *str, const char *delim)
{
    static char* p = 0;
    if (str)
        p = str;
    else if (!p)
        return 0;
    str = p + strspn(p, delim);
    p = str + strcspn(str, delim);
    if (p == str)
        return p = 0;

    if (*p) {
        *p = 0;
        p = p + 1;
    }
    else {
        p = 0;
    }
    return str;
}

int main() {

    return 0;
}