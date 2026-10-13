#include <iostream>
#include <string>
using namespace std;

int main(){
    int anio;
    cout << "Ingrese un año entero: ";
    cin >> anio;

    if (anio <= 0){
        cout << "Error el año debe ser positivo";
    } else {
        
        if (((anio % 4 == 0 and anio % 100 != 0) or anio % 400 == 0)) {
            cout << "El año es bisiesto";
        }
        else {
            cout << "El año no es bisiesto";
        }
    }

    return 0;
}
