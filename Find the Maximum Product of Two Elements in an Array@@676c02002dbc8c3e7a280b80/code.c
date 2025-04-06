// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int c=0,max=0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        for(int i=0;i<n-1;i++){
            c=0;
            for(int j=0; j<n-1;j++){
                c=i*j;
                if(c>max){
                    max=c;
                }
            }
        }
    }
    printf("%d",max);
}