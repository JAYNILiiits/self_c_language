#include<stdio.h>
int main(){
    printf("%d",fib(2));
    return 0;
}
int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;

    }
    int fibNM1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN= fibNM1 +fibNm2;
    return fibN;

}