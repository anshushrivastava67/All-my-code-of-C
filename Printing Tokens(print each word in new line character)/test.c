#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s =(char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]s", s);
    
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' ')
            printf("\n");
        else {
            printf("%c",s[i]);
        }    
    }
    return 0;
}
