#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,inv;
	printf("veuillez saisir 3 chiffres");
	scanf("%d",&N);
	
	inv=0;
	inv=(inv*10)+(N%10);
	N=N/10;
	inv=(inv*10)+(N%10);
		N=N/10;
	inv=(inv*10)+(N%10);
		N=N/10;
	printf("linverse%d",inv);
	return 0;
	
}