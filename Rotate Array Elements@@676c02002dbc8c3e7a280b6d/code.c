// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        arr[i+k]=arr[i];
        printf("%d",arr[i+k]);
    }
}