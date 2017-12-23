#include<stdio.h>
#include<math.h>
#include<conio.h>
float func(float m){
	float k;
	k=(m*m*m)*exp(m-1);
	return(k);
}
int main()
 {
	 float h,sum=0,k=0,m=0;
 	float x[100];
 	int i,n,h1,j;
 	printf("simpson rule for function");
 	printf("enter number of points");
 	scanf("%d",&h1);
 	
 	
 	n=h1+1;
 	h=1/h1;
 	
 	if((n%2)==0){
 		printf("can not be calculated");
 	
	 }
	 else
	 {
	 
	 	for(i=1;i<n+1;i++){
	 		k=func(m);
	 		x[i]=k;
	 		m=m+h;
		 }
		 
		 for(j=1;j<n+1;j=j+2){
		 	sum=sum+((h/3)*(x[j]+4*x[j+1]+x[j+2]));
		 }
 	printf("value of intrigration %f",sum);
 	
	 }
 	
 	return 0;
 }
 
