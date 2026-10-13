#include<iostream>
#include<string>
using namespace std;
// puse las librerias
int main() {
    float  nota1;
    cout << "Ingrese la primera nota:";
    cin >> nota1;

    float  nota2;
    cout << "Ingrese la segunda nota:";
    cin >> nota2;

    
    float  nota3;
    cout << "Ingrese la tercera nota:";
    cin >> nota3;
    /* Defini las tres notas y puse un cout para que se pudieran ingresar y por ultimo
    ub cin para que lo ingresado se guardara en  las variables*/

    if (nota1 < 0.0 or nota1 > 5.0 or
    nota2 < 0.0 or nota2 > 5.0 or
    nota3 < 0.0 or nota3 > 5.0) {
    cout << "Error ingresa notas entre 0.0 y 5.0";
    }
     /*  aqui puse un if para que midiera la condicion de que cada nota no pudiera ser menor a 0,0 y mayor 
    a 5.0  y utilice or para que pudiera medir una por una */
    else {
        float  promedio = nota1 * 0.30 + nota2 * 0.30 + nota3 * 0.40;
        cout << "El promedio es de " << promedio << "\n" ;

        if (promedio >= 4.5){
            cout << "Pomedio Excelente" ;
        }else if (promedio >= 4.0){
            cout << " Promedio Bueno";
        }else if (promedio >= 3.0){
            cout << "Promedio Aceptable";
        }else { 
            cout << "Promedio Reprobado";
        }

     /*por ultimo calcule el promedio con las notas y sus porcentajes correspondientes y con un
     condicional dentro del else se midio el concepto de la nota*/
    }

    return 0 ;
    // y el return para el programa retorne a 0

}
    
    
        
        
    
    

    
    



