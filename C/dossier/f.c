#include<stdio.h>
#include<stdlib.h>
int main(){
	
	const float pi=3.14;
	float C,r;
	printf("veuillez saisir le rayon de la cercle");
	scanf("%f",&r);
	C=2*pi*r;
	printf("le circonference est:%f",C);
	return 0;
	
}