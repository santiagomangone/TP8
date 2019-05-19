
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "stubs.h"
char operators[MAX_OPERATORS];                                                  //Arreglo de operadores
float (* actions [MAX_OPERATORS] ) (float, float);                              //Arreglo con las direcciones de las funciones de cada operando

int main(void) {
    int error_code;                                                             //Variable utilizada para validar entrada de datos
    float operando1, operando2;                                                 //Variables usadas para almacenar los operandos
    char operador;                                                              //Variables usadas para almacenar el operador
                                                                                /*Agrega a los 2 arreglos las operaciones; por un lado guarda el simbolo de la 
                                                                                operacion y por otro guarda la direccion de la que se encuentra dicha funcion.*/
    add_operation ('+', suma);                                                  
    add_operation ('-', resta);
    add_operation ('*', producto);
    add_operation ('/', division);
    add_operation ('^', exponenciacion);
   
    error_code=get_input(&operando1,&operando2,&operador);                      //Almacena en su debido lugar los datos que ingrese el usuario
    check_errors(error_code);                                                   //Verifica la salida de get input,verificando si hubo o no errores.
    printf("\n= %f\n", calc_res(operando1,operando2,operador));                 //Imprime en pantalla el resultado de la operacion a realizar.
    return 0;
}

