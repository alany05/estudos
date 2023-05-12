#include <iostream>
#include <windows.h>
 
using namespace std;

#define linhas 3
#define colunas 3
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int matriz[linhas][colunas];
  int cont = 9;

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
        matriz[i][j] = cont;
        cont--;
    }
  }
  for ( int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
        cout << matriz[i][j] << " ";
  }
  cout << endl;
  }
 
 
  cout << endl << endl;
  return 0;
}