#include <iostream>
using namespace std;
int main(){
    double numero1, numero2;
    int opcion;

    cout << "ingresa un numero" <<endl;
    cin >> numero1;

    cout << "ingresa el siguinte numero" <<endl;
    cin >> numero2;

    cout << "\nSelecciona una opcion:\n";
    cout << "Multiplicar\n";
    cout << "Dividir\n";
    cout << "opcion:";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
     cout << "Resultado de la multiplicacion:" << (numero1 * numero2) <<endl;

    
        break;
    case 2: 
    if (numero2 == 0){
            //mostrar el siguiente mensaje al usuario en caso que la divusion no sea posible//
            cout << "No es posible dividir entre 0" <<endl;
        }
        else {
            cout << "resultado de la division:" << (numero1 / numero2) <<endl;
        }    
    
    default:
        break;

        cout << "Opcion no valida" <<endl;
    }

    

    
    return 0;
}
