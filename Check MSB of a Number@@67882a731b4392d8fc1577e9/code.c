
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int num=sizeof(a)*8;
    int m=1<<(num-1);
    int res=a&m;
    if(res==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}