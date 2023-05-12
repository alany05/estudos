#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  char gab[] = {'a', 'd', 'b', 'b', 'c', 'a', 'd', 'b', 'a', 'c'};
  char respostas[10];
  string nome;
  int acertos = 0;

  cout << "Nome do aluno: ";
  cin >> nome;

  for(int i = 0; i < 10; i++) {
    cout << "Questão" << i + 1 << ": ";
    cin >> respostas[i];
  }
  
  for (int i = 0; i < 10; i++) {
    if(gab[i] == respostas[i]){
            acertos++;
    }
  }

  system("cls");

  cout << "\tGabarito\tRespostas\n\n" << endl;
  for(int i = 0; i < 10; i++) {
    cout << "Questão" << "("<< i + 1 << ")" << ": " << gab[i] << "\t\t " << respostas[i] << endl;
  }

  cout << "\nAluno: " << nome << endl;
  cout << "Acertos: " << acertos << endl;
  cout << "Erros: " << 10 - acertos << endl;
  cout << "Percentual de acertos: " << (acertos * 100) / 10 << "%\n\n" << endl;

 
  cout << endl << endl;
  return 0;
}