//Challenge 2 (Day 1)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    	int t;
    	scanf("%d \n",&t);
    	for(int i=0;i<t;i++)
    	{
     	int n,si[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
     	scanf("%d \n",&n);
     	for(int j=0;j<n;j++)
     		{
      		int p,s;
      		scanf("%d %d",&p,&s);
      		if(si[p-1]<s)
             		si[p-1]=s;
       			} 
     	int sum=0;
     	for(int j=0;j<8;j++)
        	sum=sum+si[j];
     
        printf("%d \n",sum);
        
    }
      
    return 0;
}