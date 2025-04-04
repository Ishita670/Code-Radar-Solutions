// Your code here...
int binarySearch(int arr[], int n, int target){
    int high=n-1;
    int low=0;
    int mid;
    while(low<=high){
        mid=(high+low)/2;
        if(target<arr[mid]){
            high=mid-1;
        }
        if(target>arr[mid]){
            low=mid+1;
        }
        if(target==arr[mid]){
            return mid;
        }
    }
    return -1;
}