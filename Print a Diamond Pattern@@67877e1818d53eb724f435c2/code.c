#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int k=1; k<i*2; k++){
            printf("*");
        }
        printf("\n");
        a++;
    }
    for(int i=a*2-1; i>=1; i--){
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        for(int k=a*2-1; k>=1; k--){
            printf("*");
        }
        printf("\n");
    }
}