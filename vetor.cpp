#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int v[11];

//   for (int i=0; i<10; i++) {
//     cout << "Digite o " << i << "º número: ";
//     cin >> v[i];
//   }

  for (int i = 0; i < 11; i++) {
    v[i] = i;
  }

  for (int i = 0; i < 11; i++) {
    cout << v[i] << " ";
  }
 
 
  cout << endl << endl;
  return 0;
}