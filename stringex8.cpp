#include <stdio.h>
#include <string.h>


int main()
{
    char ch[] = { 'g', 'e', 'e',
                  'k', 's', '\0' };

    printf("Length of string is: %lu",
           strlen(ch));

    return 0;
}
