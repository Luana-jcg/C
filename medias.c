#include <stdio.h>

float media(char l, float a, float b, float c){
	if(l == 'a' || l == 'A'){
		return ((a + b + c) / 3); 
	}
	else if(l == 'p' || l == 'P'){
		return ((a * 5 + b * 3 + c * 2) / (5 + 3 + 2));
	}
	else if(l == 'h' || l == 'h'){
		return (3 / (1/a + 1/b + 1/c));
	}
	
}

int main(){
	
	float n1, n2, n3, m;
	char letra;
	
	printf("Digite \nA para media aritmética\nP para média ponderada\nH para média harmonica\n ");
	scanf("%c", &letra);
	
	printf("Digite n1: ");
	scanf("%f", &n1);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	printf("Digite n3: ");
	scanf("%f", &n3);
	
	m = media(letra, n1, n2, n3);
	
	printf("A media e: %.2f", m);
	
	return 0;
}
