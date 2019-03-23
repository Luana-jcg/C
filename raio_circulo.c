#include <stdio.h>
#include <math.h>


float area(float r){
  return 3.14*pow(r,2);
}

float perimetro(float r){
  return 2*3.14*r;
}

int main() {
  float a, raio, p;
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);
  a = area(raio);
  p = perimetro(raio);
  printf("A area do circulo e: %.2f\n", a);
  printf("O perimetro e: %.2f", p);
  return 0;
}
