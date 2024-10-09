#include <stdio.h>
int sum(int sum);
int main()
{
    printf("sum %d",sum(5));
return 0;
}
//recursion statement
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);//sum n-1 
    int sumN=sumNm1+n;
    return sumN;

}