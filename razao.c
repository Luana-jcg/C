#include <stdio.h>

char razao(float x, float y){
	if(y == 0){
		return ('0');
	}
	else{
		return ('1');
	}
}

int main(){
	
	float n1, n2;
	char res;
	
	printf("Digite n1: ");
	scanf("%d", &n1);
	
	printf("Digite n2: ");
	scanf("%d", &n2);
	
	res = razao(n1, n2);
	
	printf("%c", res);
	
	return 0;
	
}
