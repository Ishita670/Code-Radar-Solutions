#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int x=n-1;x>=1;x--){
        for(int y=1; y<=n-i; y++){
            printf(" ");
        }
        for(int z=n-1; z>=1; z++){
            printf("*");
        }
        printf("\n");
    }
}