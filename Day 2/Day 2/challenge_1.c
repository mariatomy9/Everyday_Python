#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t=0;   
    scanf("%d",&t);                      //inputting number of test cases
    for(int i=0;i<t;i++)                 //loop for each test case     
    {
        int n,k;  
        int count =0;                      // a count variable to count the number of time  cl is found
        char s[10000],a[10000];            // defining a string s and a temporary string a
        scanf("%d %d",&n,&k);              // inputting the length of the initial string S and the number of repetitions 
        scanf("%s",s);                     // inputting the string
        strcpy(a,s);                        //making a copy of the string
        for(int j=1;j<k;j++)               //loop to add the string to itself K number of times
         strcat(s,a);
        for(int y=0;y<n*k;y++)             /* loop for searching number of cl, here y is counted n*k times since now the length of the new string is n*K since we concatenated the string n times to itself using a temp string*/
        {
            if(s[y]=='c')                   // checking for c
            {
                for(int x = y;x<n*k;x++)    //a loop to check if a l occurs after the c
                {
                    if(s[x]=='l')
                        count++;            //increment the counter
                }
            }
        }
        printf("%d \n",count);           //output the count
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
