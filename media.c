#include <stdio.h>

//erro ao digitar 6.9 ao inves de 6,9.

void media(float m){
	if(m >= 0 && m <= 4.9){
		printf("D");
	}
	else if(m >= 5 && m <= 6.9){
		printf("C");
	}
	else if(m >= 7 && m <= 8.9){
		printf("B");
	}
	else if(m >= 9 && m <= 10){
		printf("A");
	}
	else{
		printf("Media incorreta");
	}
}

int main(){
	float med;
	printf("Digite a media do aluno: ");
	scanf("%f", &med);
	media(med);
	return 0;
}
