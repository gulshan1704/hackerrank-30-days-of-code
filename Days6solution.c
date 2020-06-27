#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int T,i;
     char s[10000];
     scanf("%d",&T);
     for(i=0;i<T;i++)
     {
         scanf("%s",s);
         OddEven(s);
     } 
      return 0;
}
    

 void OddEven(char s[])
 {
     for(int i=0;i<strlen(s);i++)
     {
         if(i%2==0)
         {
             printf("%c",s[i]);
         }
     }
     printf(" ");

     for(int i=0;i<strlen(s);i++)
     {
         if(i%2!=0)
         {
             printf("%c",s[i]);
         }
     }
     printf("\n");
 }     
