#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
	char name[50],LastName[50];
	int age, phoneNumber;
	bool sexe ;
	
	printf("veuillez saisir votre nom:\n");
	scanf("%s",&LastName);
	printf("veuillez saisir votre prenom:\n");
	scanf("%s",&name);
	printf("veuillez saisir votre age:\n");
	scanf("%d",&age);
	printf("veuillez saisir votre numero de telephone:\n");
	scanf("%d",&phoneNumber);
	printf("veuillez saisir votre sexe:\n");
	scanf("%d",&sexe);
	printf("votre nom est %s \n",name);
	printf("votre nom est %s\n",LastName);
	printf("votre nom est %d\n",age);
	printf("votre nom est %d\n",phoneNumber);
	printf("votre nom est %s\n",sexe);
return 0;
}