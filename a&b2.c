#include <stdio.h>


int ordena(int a, int *b){
  int aux;
  if(a>*b){
  	aux = a;
  	a = *b;
  	*b = aux;
  }
  else{
  	a = a;
  	*b = *b;
  }
  return a;
}


int main() {
  int x, y;
  printf("Digite o valor de x:\n");
  scanf("%d", &x);
  printf("Digite o valor de y:\n");
  scanf("%d", &y);
  x = ordena(x, &y);
  printf("A: %d\n", x);
  printf("B: %d", y);
  return 0;

}
