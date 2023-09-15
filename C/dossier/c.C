#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,s,p ;
	float Sous,div,mod ;
	printf("veullez saisir la valeur a et b ");
	scanf("%d%d",&a,&b);
		
		
	s = a+b;
	p = a*b;
	Sous = a-b;
	div = a/b;
	mod = a%b;
	printf("%d\n",s);
	printf("%d\n",p);
	printf("%f\n",Sous);
	printf("%.2f\n",div);
	printf("%f\n",mod);
	
	return 0 ;
}