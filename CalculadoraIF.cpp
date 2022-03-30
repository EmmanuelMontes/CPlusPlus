/**
* Fecha: 12 de Marzo de 2022
* Programa: Calculadora FACILÍSIMO v1
* comentarios: Programa básico utilizando Estructuras Selectivas (condicionales) IF, EL, ELSE IF, DO y WHILE.
* Alumno: Emmanuel Montes Lugo
* IA CENTER
*/

#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(){
    float num1, num2;
    int operacion;
    cout <<"¡Bienvenido a tu calculadora FACILÍSIMO🤣!" << endl;
    sleep(2);
    do{
        cout << "MENÚ DE OPCIONES" << endl
            << "Sigue las instrucciones por favor" << endl
            << "Presiona alguna de las siguientes teclas: " << endl
            << "El número 1 para sumar" << endl
            << "El número 2 para restar" << endl
            << "El número 3 para multiplicar" << endl
            << "El número 4 para dividir" << endl
            << "Si deseas salir presiona el número 0" << endl;
    sleep(2);
        cout <<"¿Qué operación deseas realizar? recuerda utilizar solamente el número válido y después pulsar la tecla ENTER" <<endl;
        cin >> operacion;
        if (operacion == 0) {
            cout << "Seleccionaste salir, lo intentamos pero no pudo ser😪, hasta pronto!" << endl;
            break;
        }else if (operacion < 5) {
            cout << "¡QUE ALEGRÍA! Seleccionaste una opción valida, entonces haz lo siguiente:" << endl;
            cout << "Por favor digita el primer valor" << endl;
            cin >> num1;
            cout << "Ahora el segundo" << endl;
            cin >> num2;
            if (operacion == 1) {
            cout << "Seleccionaste la suma, por lo tanto el resultado es: " << num1 + num2 << endl;
            }else if (operacion == 2) {
            cout << "Seleccionaste la resta, por lo tanto el resultado es: " << num1 - num2 << endl;
            }else if (operacion == 3) {
            cout << "Seleccionaste la multiplicación, por lo tanto el resultado es: " << num1 * num2 << endl;
            }else if (operacion == 4) {
            cout << "Elegiste dividir, el resultado es: " << num1 / num2 << endl;
            }
        }else {
            cout << "No seleccionaste una opción valida, ejecuta el programa nuevamente" << endl;
        }
    sleep(2);
    }
    while (operacion == 1 || operacion == 2 || operacion == 3 || operacion == 4);
    return 0;
}