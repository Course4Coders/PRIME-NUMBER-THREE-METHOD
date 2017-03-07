#include<stdio.h>


void prime(int n)
{
	int i,k=1,m=0;
	
	while(k<=n)
	   {
	   	  if(k==1)
	   	     {
	   	       printf("1 is not prime\n");
	   	       ++k;
				  continue;	
			 }
	   	 for(i=2;i<k;i++)
	   	     {
	   	       if(k%i==0)
	   	          {
	   	            ++m;
					break;	
				  }
			 }
	   	      if(m==1)
	   	        printf("%d is not prime number\n",k);
	   	      else
				printf("%d is prime number\n",k);    
	   	++k;
	   	m=0;
	   }
	
}


void main()
     {
     	int n;
     	
     	printf("enter number\n");
     	scanf("%d",&n);
     	
     	prime(n);
	 }
