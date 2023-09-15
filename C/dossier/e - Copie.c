#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
	int x1,x2;
	int y1,y2;
	float D;
	printf("veuillez saisir les valeurs x1,x2,x3,x4");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	D=sqrt(pow(x1-x2,2)+pow(y2-y1,2));
	printf("la distance est :%f",D);
	return 0;
	
}