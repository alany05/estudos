#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int n;

  cout << "Contagem Regressiva: ";
    cin >> n;

  for (int i = n; i >= 0; i--) 
  {
        Sleep(1000);
        cout << i << " "; 
  }
 
  cout << endl << endl;
  return 0;
}