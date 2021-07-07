#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)                            // loop for each test case
    { int n,k,a[10000];                             
      int sum=0,count=0;
        scanf("%d %d",&n,&k);                        // inputt n and k
        for(int j=0;j<n;j++)                       
        { scanf("%d",&a[j]);                         //scanning each element of the array
          sum=(sum+a[j]);                            //finding the total sum
        }
       for(int j=0;j<n;j++)                   //loop to get each array elementt
       { if((a[j]+k)>(sum-a[j]))             /* Checking if the value we get by increasing the array element by k, is greater than the sum of the other elements of the array */
             
               count++;                      //if yes then increment count
       }
        printf("%d \n",count);              //output count
     }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

