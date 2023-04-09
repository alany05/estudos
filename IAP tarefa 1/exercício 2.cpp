#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int x, y;

  cout << "Digite o primeiro número: ";
  cin >> x;

  cout << "Digite o segundo número: ";
  cin >> y;

  cout << "Soma: " << (x + y) << endl;
  cout << "Subtração: " << (x - y) << endl;
  cout << "Multiplicação: " << (x * y) << endl;
  cout << "Divisão: " << (x / y) << endl;
  cout << "Resto: " << (x % y) << endl;
 
  cout << endl << endl;
  return 0;
}