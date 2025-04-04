// Your code here...
int binarySearch(int arr[], int n, int target){
    int high=arr[n];
    int low=arr[1];
    int mid,index=0;
    for(int i=1; i<=n; i++){
        mid=(high+low)/2;
        if(target<mid){
            high=mid-1;
        }
        if(target>mid){
            low=mid+1;
        }
        if(target==mid){
            index=i;
        }
    }
    if(index){
        return index;
    }
    else{
        return -1;
    }
}