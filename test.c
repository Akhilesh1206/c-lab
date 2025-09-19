// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,i,r;
    int b=0;
    printf("enter a number:");
    scanf("%d",&a);
    if(a<=1){
        printf("the number is not a prime number");
        }
    else  {                                                             for(i=2;i<a;i++)                                           { r= a%i;
    if (r==0){
        b++;
    }}}
    if(b==0){
        printf("the number is prime\n");
    }
    else {
        printf("the number is not prime\n");
    }
    printf("%d",b);
    return 0;
}