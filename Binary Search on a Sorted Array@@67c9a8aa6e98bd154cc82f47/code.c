// Your code here...
int binarySearch(int arr[], int n, int target){
    int high=arr[n-1];
    int low=arr[0];
    int mid;
    for(int i=0; i<n; i++){
        mid=(high+low)/2;
        if(target<mid){
            high=mid-1;
        }
        if(target>mid){
            low=mid+1;
        }
        if(target==mid){
            return i;
            break;
        }
    }
    return -1;
}