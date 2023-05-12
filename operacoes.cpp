#include <iostream>
#include <windows.h>
#include <math.h>
 
using namespace std;

#define PI 3.14159265

void soma (int a, int b) {
    cout << a + b << endl;
}

int soma2 (int a, int b) {
    return a + b;
}

void sub (int a, int b) {
    if (a > b) 
        cout << a - b << endl;
    else 
        cout << b - a << endl;
}

void produto (int a, int b) {
    cout << a * b << endl;
}

void razao (float a, float b) {
    cout << a / b << endl;
}
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int x, y;

  cout << "Digite o valor de x: ";
  cin >> x;
  cout << "Digite o valor de y: ";
  cin >> y;

  cout << "Soma: ";
  soma(x, y);

  int soma = soma2(x, y);
  cout << "Soma: " << soma << endl;
 
  cout << "Diferença: ";
  sub(x, y);

  cout << "Multiplicação: ";
  produto(x, y);

  cout << "Razão: ";
  razao(x, y);

  cout << pow(5, 2) << endl;
  cout << sqrt(25) << endl;

  cout << sin(30 * PI / 180) << endl;
  cout << cos(60 * PI / 180) << endl;
  cout << tan(45 * PI / 180) << endl;

  cout << abs(-10) << endl;

    cout << isless(10, 20) << endl;
    cout << islessequal(10, 20) << endl;
    cout << isgreater(10, 20) << endl;

    int resposta;

    resposta = isless(10, 20);

    if (resposta == 1)
        cout << "10 é menor que 20\n";
    else
        cout << "10 não é menor que 20\n";
 
  cout << endl << endl;
  return 0;
}