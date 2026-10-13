#include <iostream>
#include <string>
using namespace std;
// Puse las libreria

int main(){
    int lado1;
    cout << "Ingrese el lado uno del triangulo: ";
    cin >> lado1;

    int lado2;
    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> lado2;

    int lado3;
    cout << "Ingrse el tercer lado del triangulo: ";
    cin >> lado3;
    /* Defini las variables lado1, lado 2 y lado3 y puse un cout para que se pudieran ingresar y por ultimo
    un cin para que lo ingresado se guardara en  la variable*/
    
    if (lado1 <= 0 or lado2 <= 0 or lado3 <= 0 ){
        cout << "Error los lados deben ser mayores que cero";
    /* puse este if para que evaluara que ningun lado fuera menor o igual a 0*/
    } else if (lado1 + lado2 <= lado3 or
    lado1 + lado3 <= lado2 or lado2 + lado3 <= lado1){
        cout << "Los lados no forman un triangulo";
    /* luedo este else if para ver si la suma de dos lados era menor que el otro para
    asi saber si los tres lados podrian formar un triangulo*/
    }else {
        int perimetro = lado1 + lado2 + lado3;
        cout << "El perimetro es: "<< perimetro << "\n";

        if (lado1 == lado2 and lado2 == lado3){
            cout << "El triangulo es equilatero";
        }else if (lado1 == lado2 or lado1 == lado3 or lado2 == lado3){
            cout << "El triangulo es isosceles";
        }else {
            cout << "El triangulo es escaleno";
        }
    /* Por ultimo calculo el perimetro y con un condicional dentro del else determine si el trigulo
    era equilatero, isosceles y por ultimo escaleno */
    }
    return 0;
    // y el return para  que el programa retorne a 0
}