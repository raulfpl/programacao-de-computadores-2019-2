#include <stdio.h>

int main(){
	float n1, n2, n3, total;
	printf("Digite as 3 notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	total = n1 + n2 + n3;
	
	if(total < 40){
		printf("Reprovado.\n");
	}
	else if(total < 60){
		printf("Exame especial. \n");
	}
	else {
		printf ("Aprovado");
	}
	return 0;
}
