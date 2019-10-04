#include <stdio.h>
main(){
    char *str = new char[1000];
    fgets(str, 1000, stdin);
    int i = 0, j;   
    while (str[i] != '\0'){
        if (str[i] != ' ')
        printf("%c ", str[i]);
        i++;
    }
}
