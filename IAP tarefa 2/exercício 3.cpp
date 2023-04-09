#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float PI, raio, area;
  PI = 3.1416;

  cout << "Insira o raio do círculo: ";
  cin >> raio;
  area = PI * (raio * raio);

  if (area < 10) {
    cout << "Área pequena";
  }

  else (area > 10); {
    cout << "Área grande";
  }

  cout << endl << endl;
  return 0;
}