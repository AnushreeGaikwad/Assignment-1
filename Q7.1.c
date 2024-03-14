#include<stdio.h>
int main()
{
 int num = 9361 ,a,b,c,d;
 int temp = num;
 d = num%10;
 num = num/10;
 c = num%10;
 num = num/10;
 b = num%10;
 num = num/10;
 a = num;
 printf("%d %d %d %d \n",a,b,c,d);
 return 0;
 }
