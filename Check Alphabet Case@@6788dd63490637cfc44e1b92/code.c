#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(islower(a)){
        printf("Lowecase");
    }
    else if(isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}