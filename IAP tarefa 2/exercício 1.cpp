#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  string sexo;

  cout << "Digite o seu sexo: ";
  cin >> sexo;

  if (sexo == "M") {
    cout << "É homem!";
    }
    
  else (sexo == "F"); {
      cout << "";
    }

  cout << endl << endl;
  return 0;
}