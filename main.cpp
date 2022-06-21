#include <iostream>
#include <windows.h>
#include "funcoes.hpp"
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    cout << "Trabalhando com Módulos\n\n";

    cout << soma(2,3) << endl;
    cout << subtracao(10,3) << endl;
    cout << multiplicacao(7,3) << endl;
    cout << divisao(10,2) << endl;
    cout << resto(28,3) << endl;

    cout << endl;
    return 0;
}