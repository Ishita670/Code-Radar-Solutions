#include <stdio.h>
int main(){
    int a,b,c;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch){
        case '+':
            c=a+b;
            printf("%d",c);
            break;
         case '-':
            c=a-b;
            printf("%d",c);
            break;
         case '*':
            c=a*b;
            printf("%d",c);
            break;
         case '/':
            c=a/b;
            printf("%d",c);
            break;
        default:
            printf("error");
            break;
    }
}