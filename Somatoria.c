#include <stdio.h>
int Somatoria(int n, int v[]){
  if(n==1){
    return v[0];
  }
  else{
    int soma;
    soma = Somatoria(n-1, v);
    return soma + v[n-1];
  }

}

int main(void) {
  int lista[]={1,2,3};
  int soma = Somatoria(3,lista);
  printf("soma = %d",soma);
  return 0;
}
