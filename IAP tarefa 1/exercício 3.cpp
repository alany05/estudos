#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float n1, n2, n3, média;

  cout << "Digite a primeira nota: ";
  cin >> n1;

  cout << "Digite a segunda nota: ";
  cin >> n2;

  cout << "Digite a terceira nota: ";
  cin >> n3;

  cout << "A média é: " << (n1 + n2 + n3) / 3 << endl;


  cout << endl << endl;
  return 0;
}