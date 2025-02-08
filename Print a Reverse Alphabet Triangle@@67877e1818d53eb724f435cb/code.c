#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n=n+64;
    for(int i=n;i>=65;i--){
        for(int j=65;j<=i;j++){
            printf("%c",(char)j);
        }
        printf("\n");
    }
}