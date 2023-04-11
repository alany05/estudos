#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int opcao;
 
  cout << "Menu" << endl;
  cout << "1. Cadastro" << endl;
  cout << "2. Listar" << endl;
  cout << "3. Excluir" << endl;
  cout << "4. Sair" << endl;

  cout << "\nopção";
  cin >> opcao;

  switch (opcao) {
  case 1:
    system("cls");
    cout << "Cadastro" << endl;
    break;

  case 2:
    system("cls");
    cout << "Listagem" << endl;
    break;
case 3:
    system("cls");
    cout << "Exclusão" << endl;
    break;
case 4:
    system("cls");
    cout << "Saindo..." << endl;
    break;
case 5:
    system("cls");
    cout << "Opção inválida" << endl;
    break;

  default:
    break;
  }
 
  cout << endl << endl;
  return 0;
}