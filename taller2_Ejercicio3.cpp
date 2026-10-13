#include <iostream>
#include <string>
using namespace std;

// Puse las librerias
int main() {

    float peso;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    float estatura;
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;
    /* Defini las tres peso y estatura y puse un cout para que se pudieran ingresar y por ultimo
    un cin para que lo ingresado se guardara en  las variables*/

    if (peso <= 0 or estatura <= 0) {
        cout << "Error: el peso y la estatura deben ser mayores que cero";
    /* Luego puse el if para que pudiera medir la condicion de que peso y la altuta no fueran 
    menores o iguales a 0*/
    } else {
        float IMC = peso / (estatura * estatura);

        cout << "Su IMC es: " << IMC << "\n";

        if (IMC < 18.5) {
            cout << "Rango: Bajo peso";
        } else if (IMC < 25) {
            cout << "Rango: Normal";
        } else if (IMC < 30) {
            cout << "Rango: Sobrepeso";
        } else {
            cout << "Rango: Obesidad";
        }
    }
    /*aqui se calcula el imc y con un condicional dentro del else se 
    midio el rango de imc*/
    return 0;
    // y el return para  que el programa retorne a 0
}