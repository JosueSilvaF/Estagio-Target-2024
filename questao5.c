#include <stdio.h>
#include <string.h>

void invertestring(char *string) {
    int n = stringlen(string), i;
    for(i = 0; i < n / 2; i++) {
        char temp = string[i];
        string[i] = string[n-i-1];
        string[n-i-1] = temp;
    }
}

int main() {
    char string[] = "teste"; 
    printf("string original: %s\n", string);
    
    invertestringing(string);
    printf("string invertida: %s\n", string);
    
    return 0;
}
