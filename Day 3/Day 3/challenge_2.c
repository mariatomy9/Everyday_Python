#include <stdio.h>


int max(int a, int b, int c)                     //function to find maximum of the three values
{ if((a>b)&&(a>c))
 return a;
else if(b>c)
 return b;
else return c;
} 
  
 /*to find the sum of the subarray is crossing over the two halves  that we have divided the array into*/
int maxmiddle(int arr[], int l, int m, int h)     
{   int sum = 0; 
    int left= -100000,right = -100000; ; 
    for (int i = m; i >= l; i--) 
    { 
        sum = sum + arr[i]; 
        if (sum > left) 
          left= sum; 
    } 
    sum = 0; 
    for (int i = m+1; i <= h; i++) 
    { 
        sum = sum + arr[i]; 
        if (sum > right) 
          right = sum; 
    } 
 sum = left+right;
     return sum; 
} 
   /* the recursive function that calls itself, and returns the maximum between subarray in left halt, subarray in right half, and subarray that crosses over midpoint*/
int maxsum(int arr[], int l, int h)                                   
{ 
   
   if (l == h) 
     return arr[l]; 

   int m = (l + h)/2; 
   return max(maxsum(arr, l, m), maxmiddle(arr, l, m, h),maxsum(arr, m+1, h)); 
} 
  

int main() {
int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++)                                     //loop for each test case
    {
        int n,r,a[100000],i;
        scanf("%d %d",&n,&r);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);                                   //input array
        for(int j=1;j<r;j++)
        for(int g=0;g<n;g++)                                         //concating the array
        a[i++]=a[g];
        printf("%d \n",maxsum(a,0,(n*r)));                         //calling recursive function with first and last index
        
            
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
