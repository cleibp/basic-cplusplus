#include <iostream>
int soma(int num1, int num2);
int main() {

  char nome[] = "Cleiton";
  int idade = 20;
  // char sexo[1] = "M";
  double peso = 70.5;
  // bool ativo = true;

  int val1, val2, soma, subtracao, multiplicacao, divisao, modulo;

  int idadeTernario;

  int idadeIF;

  int dia;

  int a = 0;

  int b = 0;

  int c = 0;

  int m = 0;
  int n = 0;

// CONSTANTE
#define PI 3.14159265

  // Comentário de uma linha

  /* Comentário
    de varias linhas */

  // ESCREVER NA TELA
  std::cout << "#### Escrever na tela #### \n";
  std::cout << "Olá Mundo \n";
  std::cout << "\n";

  // VARIAVEIS
  std::cout << "### VARIAVEIS ###\n";
  std::cout << "Nome: " << nome << "\n";
  std::cout << "Idade: " << idade << "\n";
  // std::cout << "Sexo: " << sexo << "\n";
  std::cout << "Peso: " << peso << "\n";
  std::cout << "\n";

  // CONSTANTE
  std::cout << "### CONSTANTE ###\n";
  std::cout << PI << "\n";
  std::cout << "\n";

  // OPERACOES
  std::cout << "#### OPERACOES #### \n";
  std::cout << "Informe o valor 1: ";
  std::cin >> val1;

  std::cout << "Informe o valor 2: ";
  std::cin >> val2;

  soma = val1 + val2; // Pode usar: (+, -, *, /, %)
  subtracao = val1 - val2;
  multiplicacao = val1 * val2;
  divisao = val1 / val2;
  modulo = val1 % val2;
  std::cout << "Soma: " << soma << "\n";
  std::cout << "Subtração: " << subtracao << "\n";
  std::cout << "Multiplicação: " << multiplicacao << "\n";
  std::cout << "Divisão: " << divisao << "\n";
  std::cout << "Modulo: " << modulo << "\n";
  std::cout << "\n";

  // TERNARIO
  std::cout << "### TERNARIO ###\n";
  std::cout << "Digite um número: ";
  std::cin  >>  idadeTernario;
  idadeTernario >= 18 ? std::cout << "Maior de idade \n" : std::cout << "Menor de idade\n";
  std::cout << "\n";

  // IF ELSE IF ELSE
  std::cout << "#### IF ELSE IF ELSE ####\n";
  std::cout << "Informe a idade: ";
  std::cin >> idadeIF;
  if (idadeIF < 12) {
    std::cout << "CRIANCA\n";
  } else if ((idadeIF >= 12) && (idadeIF < 18)) {
    std::cout << "ADOLESCENTE\n";
  } else {
    std::cout << "ADULTO\n";
  }
  std::cout << "\n";

  // CASE
  std::cout << "### SWITCH CASE ###\n";
  std::cout << "Informe um numero 1 - 7 para semana: ";
  std::cin >> dia;

  switch (dia) {

  case 1:
    std::cout << "Domingo";
    break;

  case 2:
    std::cout << "Segunda\n";
    break;

  case 3:
    std::cout << "Terça\n";
    break;

  case 4:
    std::cout << "Quarta\n";
    break;

  case 5:
    std::cout << "Quinta\n";
    break;

  case 6:
    std::cout << "Sexta\n";
    break;

  case 7:
    std::cout << "Sabado\n";
    break;

  default:
    std::cout << "Valor nao existente\n";
    break;
  }
  std::cout << "\n";

  // REPEAT
  std::cout << "### REPEAT ###\n";
  std::cout << "Não tem REPEAT \n";
  std::cout << "\n";

  // DO WHILE
  std::cout << "### DO WHILE ###\n";
  do {
    std::cout << a << "\n";
    a = a + 1;
  } while (a < 10);
  std::cout << "\n";

  // WHILE
  std::cout << "### WHILE ###\n";
  while (b < 10) {
    std::cout << b << "\n";
    b = b + 1;
  }
  std::cout << "\n";

  // FOR
  std::cout << "### FOR ###\n";
  for (c = 0; c < 10; c++) {
    std::cout << c << "\n";
  }
  std::cout << "\n";

  // FUNCAO
  std::cout << "### FUNCAO ###\n";
  std::cout<< "Digite o valor 1 \n";
  std::cin>> a;

  std::cout<< "Digite o valor 2 \n";
  std::cin>> b;

  // std::cout<< "Soma \n" << soma(a, b);

  std::cout << "\n";
}

int soma( int num1, int num2) {
   return num1 + num2;
}
