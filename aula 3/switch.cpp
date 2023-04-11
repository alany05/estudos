#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int a = 6, b = 2;

  (a > b) ? cout << "a é maior que b"
          : cout << "a é menor que b";
 
 
  cout << endl << endl;
  return 0;
}