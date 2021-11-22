/*
** ctype.h
** File description:
** my_ispunct
*/

#include <stdbool.h>

#define IS_PUNCT ((str[i] > ' ' && str[i] < '0') \
        || (str[i] > '9' && str[i] < 'A') \
        || (str[i] > 'Z' && str[i] < 'a') \
        || (str[i] > 'z'))

bool my_ispunct(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_PUNCT)
            return true;
    return false;
}