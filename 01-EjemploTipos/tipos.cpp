/* hello.cpp
 * Defining data types and validating operations with Assert function 
 * AAV
 * 20220518
 */

#include <cassert>
#include <iostream>
#include <iomanip>

int main () {
    
    // Tipos de variables y sus operaciones

    // bool: Booleanos
    assert(true);
    assert(false==false);
    assert(false!=true);
    assert(true or false);
    assert(true and true);

    // char: Caracteres
    assert('a'==97);
    assert('a'=='a');
    assert('a'!='A');
    assert('a'+'A'==162); //sumar caracteres no tiene mucho sentido, pero se prueba que lo que estamos sumando son los valores ASCII que representa cada caracter, 97 y 65 respectivamente

    //unsigned: Enteros sin signo (Naturales)
    assert(21==21);
    assert(21!=12);
    assert(21>=12);
    assert(12<=21);
    assert(0+2==2);
    assert(3-2==1);
    assert(20*4==80);
    assert(13/2==6);
    assert(13%2==1);

    //int: Enteros con signo  
    assert(32==32);
    assert(-32==-32);
    assert(2+-3==-1);
    assert(-1<=3);

    //double: Tipo flotante, Decimales. Se utilizan para medir continuos que tienen algo de error, como pueden ser tiempo, temperatura, volumenes, etc.
    assert(2.0==1.0+1.0);
    assert(1.0==0.1*10.0); 
    assert(1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);

    //string: Cadena de caracteres
    assert("Igual"=="Igual");
    assert("Igual"!="Desigual");
    assert("a">="A");

}

    /* ¿Son esos realmente todos los tipos que vimos en clase?

        La respuesta se desprende de la definición de tipo de dato: "Conjunto de valores y conjunto de operaciones sobre esos valores".

        Concretamente, los conjuntos de valores y operaciones sobre esos valores que definimos son todos, pero lo que puede variar es la cantidad de bytes que ocupan
        en memoria de acuerdo a como las declaremos, lo que también variará el rango de valores donde nos podremos mover:

        short:  Entero corto:   2 bytes
        int:    Entero:         4 bytes    
        long:   Entero largo:   8 bytes

        float:  Real (Número en coma flotante): 4 bytes
        double: Real  doble(Número en coma flotante de doble precisión): 8 bytes

    */
