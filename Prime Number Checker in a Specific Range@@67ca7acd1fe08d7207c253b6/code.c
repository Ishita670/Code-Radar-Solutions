// Your code here...
int printPrimesInRange(int a,int b){
    int c,x=0;
    for(int i=a; i<=b; i++){
        c=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                c++;
                x++;
            }
        }
        if(c==2){
            printf("%d ",i);
        }
    }
    if(x==0){
        printf("No prime numbers");
    }
}