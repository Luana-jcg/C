#include <stdio.h>
#include <stdbool.h>

bool nprimo(int *p){
	int i = *p;
	int cont = 0;
	bool b;
	while(i > 0){
		if(*p % i == 0)
			cont = cont + 1;
		i--;
	}
	if(cont == 2){
		return b = true;
	}
	else{
		return b = false;
	}
}

int main(){
	int n;
	bool res;
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &n);
	res = nprimo(&n);
	printf("%d", res);
	return 0;
}

