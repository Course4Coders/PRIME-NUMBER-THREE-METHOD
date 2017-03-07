#include<stdio.h>
#include<string.h>
#include<stdbool.h>



void prime(int n)
{
	
	int i,j;
	bool b[n+1];
	
		
	memset(b,true,sizeof(b));

    
    for(i=2;i*i<=n;i++)
        {
        	if(b[i]==true)
        	  { 
        	  	for(j=i*2;j<=n;j=j+i)
        	  	    {
        	  	      b[j]=false;   	
					}
			  }
		}
		
		for(i=2;i<=n;i++)
		    {
		    	if(b[i]==true)
		    	  {
		    	  	printf("%d is prime\n",i);
				  }
			}
	
}


void main()
     {
     	int n;
     	
     	printf("enter number\n");
     	scanf("%d",&n);
     	
     	prime(n);
	 }
