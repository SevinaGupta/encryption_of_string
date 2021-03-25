#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i=0,d,s,n;
	char name[20],a[20];
	printf("enter a string that you want to encrypted :-");
	gets(name);
	//puts(name);
	n=strlen(name);
	//while(name<=n)
	for(i=0;i<n;i++)
	{
	  s=name[i];
	  	if(s<=109)
	  	{
	  	   d=109-s;
	       a[i]=s+(2*d)+1;
	      // printf("the ascii value of %s = %s",name,a);
		}
		else
		{
			d=s-110;
		    a[i]=s-(2*d+1);
		    //printf("the ascii value of %s = %s",s,a[i]);
		}

	  	
	}
	printf("encrypted string of %s = %s",name,a);
	
}
