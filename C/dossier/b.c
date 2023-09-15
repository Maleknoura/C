#include<stdio.h>
#include<stdio.h>

int main()
{
	float f,c ;
	printf ("entrez la temperature en fahreint");
	scanf ("%f",&f);
		c=(f-32)/1.8 ;
	printf ("la temperature est %f\n",c);
	if(c<20)
		printf("il fait tres froid");
	else if (c>20 && c<30)
		printf("il fait froid");
	else if (c>30 && c>40)
		printf("il fait chaud");
	else if(c>40 )
		printf("il fait tres chaud");
	

return 0;	
	
}