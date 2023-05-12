#include <iostream>
#include <windows.h>
 
using namespace std;

int menu () {
    int opcao;
  cout << "MENU PRINCIPAL\n" << endl;
  cout << "1. Novo jogo\n" << endl;
  cout << "2. Carregar jogo\n" << endl;
  cout << "3. Sair\n" << endl;
  cout << "Opção: ";
  cin >> opcao;
  return opcao;
}
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

  int opcao;
  do
  {
    system("cls");
    opcao = menu();
    if (opcao < 1 || opcao > 3) {
        cout << "Opção inválida.\n";
        Sleep(1000);
    }
  } while (opcao < 1 || opcao > 3);
  
  opcao = menu();

  cout << "Opção escolhida: " << opcao << endl;

  switch (opcao)
  {
  case 1:
    system("cls");
    cout << "Novo jogo\n";
    break;
  case 2:
    system("cls");
    cout << "Carregar jogo\n";
    break;
  case 3:
    system("cls");
    cout << "Sair\n";
    break;
    
  default:
    break;
  }
 
 
  cout << endl << endl;
  return 0;
}