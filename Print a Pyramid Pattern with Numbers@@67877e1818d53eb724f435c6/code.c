// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        (int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; i<=i; k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}