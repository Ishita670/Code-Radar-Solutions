#include <stdio.h>
int main(){
    int n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1){
                printf("%d",a);
            }
            else{
                printf("%d ",a-1);
                a++;
            }
        }
        printf("\n");
    }
}