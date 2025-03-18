// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        arr[i+k]=arr[i];
        printf("%d",arr[i+k]);
    }
}