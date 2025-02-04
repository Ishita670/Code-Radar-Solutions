#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2!=0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}
//lsb is 1 if number is odd and 0 if number is even
//lsb is the last digit in the binary representation 
//1 will come at last only in the case of odd numbers