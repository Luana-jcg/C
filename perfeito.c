#include <stdio.h>
#include <stdbool.h>

bool perfeito(int v){
	int i = v-1;
	int soma = 0;
	int b;
	while(i > 0){
		if(v % i == 0){
			soma = soma + i;
		}
		i--;
	}
	if(soma == v){
		b = true;
	}
	else{
		b = false;
	}
	return b;
}

int main(){
	int n;
	bool res;
	printf("Digite um número: ");
	scanf("%d", &n);
	res = perfeito(n);
	printf("%d", res);
	return 0;
}
