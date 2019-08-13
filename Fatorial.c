#include "stdio.h"

int Fatorial(int n){
  if(n==1){
    return n;  
  }
  else{
    int fatorial;
    fatorial = Fatorial(n-1);
    return fatorial*n; 
  }

}



int main(void) {
  int fatorial;
  printf("Digite o fatorial: ");
  scanf("%d", &fatorial);
  fatorial=Fatorial(fatorial);
  printf("Fatorial = %d",fatorial);
  return 0;
}
