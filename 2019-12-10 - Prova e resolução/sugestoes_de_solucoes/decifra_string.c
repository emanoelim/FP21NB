#include <stdio.h>

int main(void) {
    char str[100];
    int i;
    printf("Informe a string codificada: ");
    scanf("%[^\n]", str);
    i = 0;
    while(str[i]) {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            if(str[i] == 'a')
                str[i] = 'z';
            else if(str[i] == 'A')
                str[i] = 'Z';
            else
                str[i] = str[i] - 1;
        }
        i++;
    }
    printf("%s", str);
}
