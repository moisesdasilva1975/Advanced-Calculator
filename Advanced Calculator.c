#include <math.h>
#include <stdbool.h>
#include <stdio.h>

double raiz_quadrada(double numero) {
  double resultado = sqrt(numero);
  printf("A raíz quadrada de %.3lf é %.3lf\n", numero, resultado);
  return 0;
}

int potencia(int base, int expoente) {
  int resultado = pow(base, expoente);
  printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);
  return 0;
}

double logaritmo(double numero) {
  double resultado = log(numero);
  printf("O logaritmo de %.3lf é %.3lf", numero, resultado);
  return 0;
}

int decimal_para_binario(int numero) {
  if (numero == 0) {
    return 0;
  } else {
    return (numero % 2) + 10 * decimal_para_binario(numero / 2);
  }
}

bool ehPrimo(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  printf("Para calcular a raíz quadrada de um número, digite 1\n");
  printf("Para calcular a potencia de um número, digite 2\n");
  printf("Para calcular o logarítmo de um número, digite 3\n");
  printf("Para achar o binário de um número, digite 4\n");
  printf("Para verificar se um número é primo, digite 5\n");
  printf("Digite um número:\n");
  int opcao;
  scanf("%d", &opcao);
  
    if (opcao == 1) {
      printf("Introduza um número:\n");
      double numero;
      scanf("%lf", &numero);
      int resultado = raiz_quadrada(numero);
      return 0;
    }

    else if (opcao == 2) {
      printf("Introduza a base:\n");
      int base;
      scanf("%d", &base);
      printf("Introduza o expoente:\n");
      int expoente;
      scanf("%d", &expoente);
      int resultado = potencia(base, expoente);
      return 0;
    }

    else if (opcao == 3) {
      printf("Introduza o número:\n");
      double numero;
      scanf("%lf", &numero);
      double resultado = logaritmo(numero);
    }

    else if (opcao == 4) {
      int numero;
      printf("Introduza um número:\n");
      scanf("%d", &numero);
      int numero_binario = decimal_para_binario(numero);
      printf("O valor decimal em binario é: %d\n", numero_binario);
    }

    else if (opcao == 5) {
      int numero;
      printf("Introduza um número:\n");
      scanf("%d", &numero);
      if (ehPrimo(numero)) {
        printf("%d é um número primo\n", numero);
      } else {
        printf("%d não é um número primo\n", numero);
      }
      return 0;
    }

    else {
      printf("Opção inválida\n");
      return 0;
    }
}