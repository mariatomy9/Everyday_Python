#include <stdio.h>
#include <string.h>


int main() {

int n,a[100];
  int count=0;                          // a counter              
    scanf("%d",&n);                     // input number of customers  
    for(int i=0;i<n;i++)                // a loop to get the unique code of each customer
    { scanf("%d",&a[i]);                // inputting each unique code as an element in an array
      if((a[i]%2==0&&a[i]%3==0)&&(a[i]%5!=0)) /*checking if the number inputted is divisible by 2,3&5, if its divisible by 2&3 but not 5 then it proceeds to the increment of counter*/
          {      count++;        //increment count
           }
    }
    printf("%d",count);   //outputs the count

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

