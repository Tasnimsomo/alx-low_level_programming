#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: integer to test.
 * Return: entire string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int s1_len = strlen(s1);
    unsigned int s2_len = strlen(s2);
    if (n >= s2_len)
        n = s2_len;

    unsigned int concat_len = s1_len + n;
    char *concat = (char *)malloc((concat_len + 1) * sizeof(char));
    if (concat == NULL)
        return NULL;

    unsigned int i, j;
    for (i = 0; i < s1_len; i++) {
        concat[i] = s1[i];
    }
    for (j = 0; j < n; j++) {
        concat[i + j] = s2[j];
    }
    concat[i + j] = '\0';

    return concat;
}
