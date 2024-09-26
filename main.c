#include <stdlib.h>
#include <stdio.h>

int main()
{
	char operateur;
	int first;
	int deux;
	double final;
	printf("Choisisez votre opérateur\n");
	scanf("%c", &operateur);
	printf("Choisisez votre premier nombre\n");
	scanf("%d", &first);
	printf("Choisisez votre deuxième nombre\n");
        scanf("%d", &deux);
	if(operateur == '+'){
	final=first+deux;
	printf("%f\n", final);
	}
	else if(operateur == '-'){
	final=first-deux;
	printf("%f\n", final);
	}
	else if(operateur == '/'){
	final=first/deux;
	printf("%f\n", final);
	}
	else if(operateur == '*'){
	final=first*deux;
	printf("%f\n", final);
	}
	else if(operateur == '%'){
	final=first%deux;
	printf("%f\n", final);
	}
	else{
	printf("Votre opérateur est incorrect\n");
	}
	exit(0);
}
