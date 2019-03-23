#include <stdio.h>


int ordena(int a, int b){
  int aux;
  if(a>b){
  	aux = a;
  	a = b;
  	b = aux;
  	printf("A: %d\n", a);
  	printf("B: %d", b);
  }
  else{
  	a = a;
  	b = b;
  	printf("A: %d\n", a);
  	printf("B: %d", b);
  }
}


int main() {
  int x, y;
  printf("Digite o valor de x:\n");
  scanf("%d", &x);
  printf("Digite o valor de y:\n");
  scanf("%d", &y);
  ordena(x, y);
  return 0;

}
