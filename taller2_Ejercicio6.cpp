#include <iostream>
#include <string>
using namespace std;

int main (){

    int numero1;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    int numero2;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    int numero3;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    if (numero1 > numero2 and numero1 > numero3){
        cout << "El numero mayor primer numero \n";
    } else if ( numero2 > numero1 and numero2 > numero3){
        cout << "El numero mayor es el segun numero \n";  
    }else{
        cout << "El numero mayor es el tercer numero\n";
    }
    if (numero1 == numero2 and numero2 == numero3 ){
            cout << "Los tres números son iguales";
    }else if (numero1 == numero2 or numero1 == numero3 or
    numero2 == numero3) {
        cout << "Hay dos iguales y uno distinto";
    }else {
        cout << "Los tres números son distintos";
    }
    
}