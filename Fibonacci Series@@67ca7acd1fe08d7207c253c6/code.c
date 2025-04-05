// Your code here...
int fibonacciSeries(int n){
    int k,n1,n2;
    n1=0;
    n2=1;
    for(int i=1; i<=n; i++){
        printf("%d ",n1);
        k=n1+n2;
        n1=n2;
        n2=k;
    }
}