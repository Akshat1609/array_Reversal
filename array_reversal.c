#include <stdio.h>
#include <stdlib.h>
//Simply traversing in reverse is not efficient way
int main()
{
     int n,i,start,num,temp,arr[1000];
     scanf("%d",&num);
     for(i=0;i<num;i++)
     {
         scanf("%d",&arr[i]);
     }
     //initiaslizing start and end.
     start=0;
     n=num;
     while(start<n-1)
     {
        temp=arr[start];
        arr[start]=arr[n-1];
        arr[n-1]=temp;
        start++;
        n--;
     }
     for(i=0;i<num;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("\n");

    return 0;
}



