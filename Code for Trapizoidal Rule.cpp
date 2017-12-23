#include<stdio.h>
#include<math.h>
main()
{
	float a[100],b[100];
	float s=0;
	float t=0;
	int n, p;
	b[0]=0;
	printf("Trapizoidal Rule:-\n");
	printf("Enter the no of terms:-");
	scanf("%d",&n);
	printf("Enter the difference between the time interval:-");
	scanf("%d",&p);
	printf("Enter the values of all the functions for their respective point:-\n");
	for(int i=0; i<n; i++)
	{
		printf("f(%d)=",i+1);
		scanf("%f",&a[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		s=s+(a[i]+a[i+1])*p*.5;
	}
	printf("The value of the 1st integral is %f",s);
	for(int i=1; i<n+1; i++) 
	{
		b[i]=a[i-1]*p+b[i-1];
	}
		for(int i=0; i<n-1; i++)
	{
		t=t+(b[i]+b[i+1])*p*.5;
	}
	printf("\nThe value of the 2nd integral is %f",t);
}
