#include <stdio.h>


int main() {
int t;
    scanf("%d",&t);
    for( int i=0;i<t;i++)                             //Loop for each test case
    { int l,r,tsum=0;
        scanf("%d %d",&l,&r);                          //input l and r
        while(l<=r)                                   //while loop to get each element between l and r
        { int sum=0; 
           for(int j=1;j<=l;j++)                      
         if(((l%j)==0)&&((j%2)==1))                   // checking for divisors of l and which are odd 
            sum+=j;                                   // sum of each odd divisors
           
            tsum+=sum;                                 // The sum of each divisors of each number between l&r is added together
         l++;   
        }
      printf("%d \n",tsum);                             //output the total sum
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
