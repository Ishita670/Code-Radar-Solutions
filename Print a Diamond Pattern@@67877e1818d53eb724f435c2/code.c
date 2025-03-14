#include <stdio.h>
int main(){
    int n;
    int i,j,k,x,y,z;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
    for(x=n-1;x>=1;x--){
        for(y=1; y<=n-x; y++){
            printf(" ");
        }
        for(z=n-1; z>=1; z--){
            printf("*");
        }
        printf("\n");
    }
}