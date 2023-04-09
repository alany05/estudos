#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  string nome;
  int idade;

  cout << "Digite seu nome: ";
  cin >> nome;

  cout << "\nDigite sua idade: ";
  cin >> idade;

  cout << "\nSeu nome é " << nome << endl;

  cout << "\nSua idade é " << idade << endl;
 
  cout << endl << endl;
  return 0;
}