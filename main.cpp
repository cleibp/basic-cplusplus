#include <iostream>

enum class Cor { Vermelho, Verde, Azul, Amarelo, Laranja };

int soma(int a, int b) {
    return a + b;
}
int main() {

  char nome[] = "Cleiton";
  int idade = 20;
  char sexo = 'M';
  double peso = 70.5;
  bool ativo = true;

  int val1, val2, adicao, subtracao, multiplicacao, divisao, modulo;

  int idadeTernario;

  int idadeIF;

  int dia;

  int a = 0;

  int b = 0;

  int c = 0;

  int m = 0;
  int n = 0;

  int *ponteiro; // Declaração de um ponteiro para um inteiro

  int numero1, numero2, res;

// CONSTANTE
#define PI 3.14159265

  // Comentário de uma linha

  /* Comentário
    de varias linhas */

  // ESCREVER NA TELA
  std::cout << "#### ESCREVER NA TELA #### \n";
  std::cout << "Olá Mundo \n";
  std::cout << "\n";

  // VARIAVEIS
  std::cout << "### VARIAVEIS E TIPOS BÁSICOS ###\n";
  std::cout << "Nome: " << nome << "\n";
  std::cout << "Idade: " << idade << "\n";
  std::cout << "Sexo: " << sexo << "\n";
  std::cout << "Peso: " << peso << "\n";
  std::cout << "Ativo: " << ativo << "\n";
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

  adicao = val1 + val2; // Pode usar: (+, -, *, /, %)
  subtracao = val1 - val2;
  multiplicacao = val1 * val2;
  divisao = val1 / val2;
  modulo = val1 % val2;
  std::cout << "Soma: " << adicao << "\n";
  std::cout << "Subtração: " << subtracao << "\n";
  std::cout << "Multiplicação: " << multiplicacao << "\n";
  std::cout << "Divisão: " << divisao << "\n";
  std::cout << "Modulo: " << modulo << "\n";
  std::cout << "\n";

  // TERNARIO
  std::cout << "### TERNARIO ###\n";
  std::cout << "Digite um número: ";
  std::cin >> idadeTernario;
  idadeTernario >= 18 ? std::cout << "Maior de idade \n"
                      : std::cout << "Menor de idade\n";
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

      // ARRAY
    std::cout << "### ARRAY ###" << std::endl;
    int numbers[] = {10, 20, 30, 40};

    for (int i = 0; i < 4; i++) {
        std::cout << numbers[i] << std::endl;
    }
    std::cout << std::endl;

    // MATRIZ
    std::cout << "### MATRIZ ###" << std::endl;
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros

    // Inicialização da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j + 1;
        }
    }

    // Acesso aos elementos da matriz
    std::cout << "Elementos da matriz:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

  // FUNCAO
  std::cout << "### FUNCAO ###\n";
  std::cout<< "Digite o valor 1: ";
  std::cin>> m;

  std::cout<< "Digite o valor 2: ";
  std::cin>> n;

  int resultado = soma(m, n);
  std::cout << "A soma de " << m << " e " << n << " é igual a " << resultado;
  std::cout << "\n";

  std::cout << "\n";
  
  // PROCEDURE
  std::cout << "### PROCEDURE ###\n";
  std::cout << "Não tem PROCEDURE \n";
  std::cout << "\n";

  std::cout << "\n";

  // PONTEIRO
  std::cout << "### PONTEIRO ###\n";
  // Alocação de memória dinamicamente para um inteiro
  ponteiro = new int;

  *ponteiro = 42; // Atribui um valor à variável apontada

  std::cout << "Valor da variável apontada: " << *ponteiro << std::endl;
  
  // Liberação da memória alocada
  delete ponteiro;
  std::cout << "\n";
  
  // TRY
  std::cout << "### TRY ###\n";
  std::cout << "Informe o valor 1 para o dividendo: ";
  std::cin >> numero1;

  std::cout << "Informe o valor 2 para o divisor: ";
  std::cin >> numero2;
    
  try {
      if (numero2 == 0) {
          throw "Divisão por zero não é permitida!";
      }
      res = numero1 / numero2;
      std::cout << "Resultado da divisão: " << res << std::endl;
  } catch (const char* mensagem) {
      std::cout << "Ocorreu uma exceção: " << mensagem << std::endl;
  }
  std::cout << "\n";


  // ENUM
  std::cout << "### ENUM ###\n";
  Cor minhaCor = Cor::Azul;

  switch (minhaCor) {
      case Cor::Vermelho:
          std::cout << "Minha cor favorita é vermelho." << std::endl;
          break;
      case Cor::Verde:
          std::cout << "Minha cor favorita é verde." << std::endl;
          break;
      case Cor::Azul:
          std::cout << "Minha cor favorita é azul." << std::endl;
          break;
      case Cor::Amarelo:
          std::cout << "Minha cor favorita é amarelo." << std::endl;
          break;
      case Cor::Laranja:
          std::cout << "Minha cor favorita é laranja." << std::endl;
          break;
      default:
          std::cout << "Eu não tenho uma cor favorita." << std::endl;
  }
  
}
