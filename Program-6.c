//INPUT: 10 2
//OUTPUT: Arithmetic expression evaluation of 10 and 2 is = 20

#include <stdio.h>
int main()
{
int a,b,result;
printf("Enter 2 numbers for Arithmetic evaluation operation:");
scanf("%d%d",&a, &b);  // correct the code
result = (a+b*a/b-a%b);    // correct the codea%b
printf("Arithmetic expression evaluation of %d and %dis = %d",a,b,result); 
// insert the missing code
}
