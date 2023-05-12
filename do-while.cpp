#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int n;

  do
  {
   cout << "Digite um número: ";
   cin >> n;

   
  } while ();
  
 
 
  cout << endl << endl;
  return 0;
}