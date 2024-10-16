#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,sum=0;
   printf("enter the number of elements in the array:");
   scanf("%d",&n);
   int array[n];
   printf("enter %d elements:\n",n);
   for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    sum=array[i];
   }
   printf("sum of array elements:%d\n",sum);
   printf("array in reverse order:\n");
   for(i=n-1;i>=0;i--){
    printf("%d",array[i]);
   }
   printf("\n");
   return 0;
}

