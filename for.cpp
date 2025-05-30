#include <iostream>
using namespace std;
int main(){
    int numero;
    cout << "ingrese un numero";
    cin>> numero;

    if (numero < 0){
        cout << "No puedes ingresar un numero menor a 0" <<endl;
         cout << "No puedes ingresar un numero menor a 0" <<endl;

    }
    else {
        cout << "Tablas de multiplicar del " << numero << ":" <<endl;
        for (int i = 1; i < 10; i++){
            cout << numero << "x" << i << "=" << numero * i <<endl;
        }
        }
    
    return 0;
}