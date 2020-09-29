/*
Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.
Ej: si se ingresa 7 se debe imprimir:
1x7=7
22x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70
*/

#include <iostream>
using namespace std;

int main(){

    int numero_N;
    cout << "Ingrese el numero N: ";
    cin >> numero_N;
    cout << "Multiplos del " << numero_N << " menores que 100 :" << endl;

    for(int i=1; i<=10; i++){
        cout << i << "x" << numero_N << "=" << i * numero_N << endl;
    }

    return 0;
}
