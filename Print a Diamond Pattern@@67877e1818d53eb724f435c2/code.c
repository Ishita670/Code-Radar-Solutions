#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        a=0;
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int k=1; k<i*2; k++){
            printf("*");
            a++;
        }
        printf("\n");
    }
    for(int i=a-2; i>=1; i--){
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        for(int k=a-2; k>=1; k--){
            printf("*");
        }
        printf("\n");
    }
}