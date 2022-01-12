#include<stdio.h>


int main()
{
    // we need to find 1 missing number from n natural numbers assigned to you
    // We will find the sum of those n natural numbers and then i shall substract it from the sum of the numbers entered by user
    // Sum(n)- Sum(user types) =  missing number

    int n;
    printf("Enter the total number of digits you think but will write only number-1\n");
    scanf("%d",&n);
    
   int arr[n-1];

   for(int i=0;i<n-1;i++)
   {
       scanf("%d",&arr[i]);
      
   }

   int sum;
   sum = 0;
   for(int i=0;i<n-1;i++)
   {
       sum = sum+arr[i];
   }
   int totalsum;
   totalsum = ((n*(n+1))/2);

   printf("this missing number is %d\n",(totalsum)-(sum));

  
    
    

   
   
   

}