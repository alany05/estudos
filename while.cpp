#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int main ();
  float soma = 0;
  cout << "Digite os valores (negativo finaliza): ";

  while (true)
  {
    float valor;
    cin >> valor;
    if (valor < 0)
       break;
    soma += valor;

  }

  cout << "\nSoma: " << soma << endl;
 
  cout << endl << endl;
  return 0;
}