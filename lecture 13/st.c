#include <stdio.h>
int main() {
    char str[] = "stringlength";
    int i = 0;
    int sum = 0;
    while(str[i]!=0){
        sum = sum +1;
        i++;
    }
    
    
    printf("Length of the string will be: %d", sum);
    return 0;
}