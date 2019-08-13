#include <stdio.h>

int Fibonacci(int n){
  if(n==1){
    printf("%d",n);
    return n;
  }
  else{
    int temp;
    temp = Fibonacci(n-1);
    printf(" %d ", temp);
    return temp+n;
  }
}

int main(void) {
  int fibonacci;
  printf("------------Sequência de Fibonacci------------\n");
  printf("Digite até qual número da sequência deseja: ");
  scanf("%d", &fibonacci);
  Fibonacci(fibonacci);
  return 0;
}
