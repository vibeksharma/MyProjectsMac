#include<stdio.h>

int fact(int num){

    if (num==1)
        return 1;

    return num * fact(num-1);
}

int main(){
    printf("%d",fact(20));
    printf("Pagla");
    return 0;
}



