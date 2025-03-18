// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int m=0;
    int m1=arr[1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=m){
            m=arr[i];
        }
        if(arr[i]>=m1 && arr[i]<m){
            m1=arr[i];
        }
    }
    printf("%d",m1);
}