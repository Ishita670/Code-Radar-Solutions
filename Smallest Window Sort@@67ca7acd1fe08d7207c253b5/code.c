// Your code here...
int findUnsortedSubarray(int arr[],int n){
    int temp,c=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                c++;
            }
        }
    }
    return c;
}