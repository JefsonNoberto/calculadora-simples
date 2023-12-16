// inchuido bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// condicional para saber a opição
int verif(opicao, numero1, numero2)
int opicao;
{
  switch (opicao)
  {
  case 1:
  {
    return soma(numero1, numero2);
  };
  break;
  case 2:
  {
    return subtracao(numero1, numero2);
  };
  break;
  case 3:
  {
    return multiplica(numero1, numero2);
  };
  break;
  case 4:
  {
    return divisao(numero1, numero2);
  };
  break;
  default:
    printf("opicao invalida");
    break;
  };
  return 0;
};
// declaração dos operadores da calculadora
int soma(int numero1, int numero2)
{
  return (numero1 + numero2);
};
int subtracao(int numero1, int numero2)
{
  return (numero1 - numero2);
};
int multiplica(int numero1, int numero2)
{
  return (numero1 * numero2);
};
int divisao(int numero1, int numero2)
{
  return (numero1 / numero2);
};

// função principal da calculadora
int main()
{

  int opicao = 0;

  while (opicao <= 4)
  {
    printf("digite uma opicao \n");
    printf("\t1 soma \n");
    printf("\t2 subtracao\n");
    printf("\t3 multilicacao \n");
    printf("\t4 divisao \n");
    printf("\t5 sair \n");
    scanf("%i", &opicao);
    if (opicao < 5)
    {
      int number1;
      int number2;
      int resultado = 0;
      printf("escreva a o primeiro numero 1 \n");
      scanf("%i", &number1);
      fflush(stdin);
      printf("escreva a o primeiro numero 2 \n");
      scanf("%i", &number2);
      fflush(stdin);
      resultado = verif(opicao, number1, number2);
      printf("seu resultado e : %d  \n", resultado);
      system("pause");
      system("cls");
    }
    else
    {
      printf("saindo do programa \n");
    };
  };
  return 0;
}
