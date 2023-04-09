#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float altura;

  cout << "Qual a sua altura? ";
  cin >> altura;
  altura = altura/100;

  if (altura >= 1.8) {
    cout << "Você é alto!";
  }
  
  else (altura < 1.8); {
    cout << "Você é baixo!";
  }
 
  cout << endl << endl;
  return 0;
}