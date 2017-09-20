#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char string[256];
    
    for(int i=0; i<5; i++)
    {
        scanf("%s", &string[256]);
        printf("%s\n", &string[256]);
    }

    return 0;
}
