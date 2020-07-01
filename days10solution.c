#include<stdio.h>
#include<math.h>
int main()
{
    int number ,count =0;
    scanf("%d",&number);
    while (number !=0)
   {
    number=number &(number<<1);
    count++;
    }
    printf("%d",count);
}
