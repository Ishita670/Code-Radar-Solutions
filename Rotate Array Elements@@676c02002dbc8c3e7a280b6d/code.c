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
    for(int i=k+1; i<n; i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0; i<=k; i++){
        printf("%d\n",arr[i]);
    }
}