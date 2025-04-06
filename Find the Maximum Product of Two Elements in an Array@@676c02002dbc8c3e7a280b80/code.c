// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int c,max;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){
                c=i*j;
                if(c>max){
                    max=c;
                }
            }
        }
    }
    printf("%d",max);
}