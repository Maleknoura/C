#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,d,Sum;
	float Moy ;
	printf("veuillez saisir les valeurs de a b c d ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	Sum=0;
	Sum= Sum+a+b+c+d ;
	Moy=Sum/4;
	printf("la somme est :%d\n",Sum);
	printf("la moyenne est : %f",Moy);
	
	return 0;
	
}