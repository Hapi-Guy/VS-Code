#include <stdio.h>
int main()
{ int x=10,age;
 float price;
  printf("Enter your age:");
  scanf("%d",&age);
  if(age<12){
  price=x-(x*0.5);
  printf("Price:$%f",price);
  }
  else if(age>=65){
  price=x-(x*0.3);
  printf("Price:$%f",price);
  }
  else printf("Price:%d",x);
  return 0;
}
