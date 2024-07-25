#include <stdio.h>
void arm(int maimnum)
{
    int result=0,remainder,n;
    n=mainnum;
    while (mainnum !=0)
        {
        remainder = mainnum%10;
        result +=remainder * remainder*remainder*remainder;
        mainnum /=10;
}
if(result==n)
    {
printf("X");
}
else
{
    printf("no");
    }}
int main (){
int num;
printf("enter");
scanf("%d",&num);
arm(num);
return 0;}
