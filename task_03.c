#include <stdio.h>

int main(void)
{
    char a = 'S', b = 'a', c = 'K', d = 'l', e = 'I', f = 'n', g = 'E';

    printf("\n%c%c%c%c%c%c%c", a, b, c, d, e, f, g);
    printf("\nUppercase of these characters: %c%c%c%c%c%c%c", toupper(a),toupper(b),toupper(c),toupper(d),toupper(e),toupper(f),toupper(g));
    printf("\nLowercase of these characters: %c%c%c%c%c%c%c", tolower(a),tolower(b),tolower(c),tolower(d),tolower(e),tolower(f),tolower(g));

    return 0;
}
