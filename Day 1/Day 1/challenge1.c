//Challenge 1(Day 1)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int t;
    	char a[30];
    	scanf("%d",&t);
    	for(int i=0;i<t;i++)
    		{ 
		int counto=0,countb=0,l;
     		scanf("%s",a);
      		l= strlen(a);
      		for(int j=0;j<l;j++)
     		 { 
		if(a[j]=='o')
          		counto++;
       		else if(a[j]=='b')
           		countb++;
                
     				 }
     	if(countb==counto)
         	printf("%d \n",countb);
    	else if (countb<counto)
         	printf("%d \n",countb);
     	else  if(counto<countb)
           	printf("%d \n",counto);
                    
    				}     
    return 0;
}