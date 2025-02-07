#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(islower(ch)){
        printf("Lowecase");
    }
    else if(isupper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}