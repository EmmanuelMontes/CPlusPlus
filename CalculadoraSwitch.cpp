/**
* Fecha: 12 de Marzo de 2022
* Programa: Calculadora FACILÍSIMO v1
* Comentarios: Programa básico utilizando Estructura Selectiva (condicional) Switch.
* Alumno: Emmanuel Montes Lugo
* IA CENTER
*/
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(){
    float num1, num2, resultado;
    char operacion;
    cout << "¡Bienvenido a tu calculadora FACILÍSIMO🤣!" << endl;
    sleep(2);
    cout << "MENÚ DE OPCIONES" <<endl
            << "Sigue las instrucciones por favor" << endl
            << "Presiona alguna de las siguientes teclas con los siguientes símbolos: " << endl
            << "Utiliza '+' para sumar" << endl
            << "Utiliza '-' para restar" << endl
            << "Utiliza '*' para multiplicar" << endl
            << "Utiliza '/' para dividir" << endl;
    sleep(2);
    cout <<"¿Qué operación deseas realizar? recuerda utilizar solamente el signo válido y después pulsar la tecla ENTER" <<endl;
    cin >> operacion;
    cout << "A continuación digita el primer valor" << endl;
    cin >> num1;
    cout << "Ahora el segundo" << endl;
    cin >> num2;
        switch(operacion){
            case '+':
            resultado = num1+num2;
                break;
            case '-':
            resultado = num1-num2;
                break;
            case '*':
            resultado = num1*num2;
                break;
            case '/':
            resultado = num1/num2;
                break;
            case '.':
            resultado = num1/num2;
                break;
            default:
            cout << "Símbolo equivocado";
        }
  cout <<"El resultado es: "<< resultado;
  return 0;
}