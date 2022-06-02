/* hello.cpp
 * Defining data types and validating operations with Assert function 
 * AAV
 * 20220602
 */

#include <cassert>
#include <iostream>
#include <iomanip>

int main () {
    
    // Tipos de variables y sus operaciones

    // bool: Booleanos.
    assert(true);
    assert(not(false));
    assert(false==false);
    assert(false!=true);
    assert(true or false);
    assert(true and true);

    // char: Caracteres. 
    assert('a'==97);
    assert('a'=='a');
    assert('a'!='A');
    assert('a'+'A'==162); 
    //sumar caracteres no tiene mucho sentido, pero se prueba que lo que estamos sumando son los valores ASCII que representa cada caracter, 
    //a=97 y A=65 respectivamente

    //unsigned: Enteros sin signo (Naturales).
    assert(21u==21u);
    assert(21u!=12u);
    assert(21u>=12u);
    assert(12u<=21u);
    assert(0u+2u==2u);
    assert(3u-2u==1u);
    assert(20u*4u==80u);
    assert(13u/2u==6u);
    assert(13u%2u==1u);

    //int: Enteros con signo (Enteros). Rango: -2.147.483.648 a 2.147.483.647
    assert(32==32);
    assert(-32==-32);
    assert(2+-3==-1);
    assert(-1<=3);
    assert(20*4==80);
    assert(-13/2==-6);
    assert(13%2==1);

    //double: Tipo flotante, Decimales. Se utilizan para medir continuos que tienen algo de error, como pueden ser tiempo, temperatura, volumenes, etc.

    assert(2.0==1.0+1.0);
    assert(1.0==0.1*10.0); 
    assert(2e3 == 2E3);
    assert(2E6 == 2000000.0);
    assert(2E6 == 2'000'000.0);
    assert(1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    //0.1 en tipo flotante es en realidad un numero con muchísimos decimales, segun la IDE de VSCode es 0.1000000000000000056
    //es por este motivo que no nos da igual la suma de 10 veces 0.1 a 1.0

    //string: Cadena de caracteres. Son vectores de caracteres constantes.
    assert("Igual"=="Igual");
    assert("Igual"!="Desigual");
    assert("a" < "b");
    assert("a" > "A");
    //compara valores ASCII
    assert(16  == std::string("Largo del String").length());
    
}

    /* ¿Son esos realmente todos los tipos que vimos en clase?

        La respuesta se desprende de la definición de tipo de dato: "Conjunto de valores y conjunto de operaciones sobre esos valores".

        Concretamente, los conjuntos de valores y operaciones sobre esos valores que definimos son todos, pero lo que puede variar es la cantidad de bytes que ocupan
        en memoria de acuerdo a como las declaremos, lo que también variará el rango de valores donde nos podremos mover con sus formatos
        típicos:

        short:      Entero corto:   2 bytes: -32.768 a 32.767
        int:        Entero:         4 bytes: -2.147.483.648 a 2.147.483.647
        long long:  Entero largo:   8 bytes: -(2^63) a (2^63)-1

        unsigned:           Natural:        4 bytes: 0 a 4.294.967.295
        unsigned long long: Natural largo:  8 bytes: 0 a 18.446.744.073.709.551.615

        float:  Real (Número en coma flotante): 4 bytes:                         3.4E +/- 38 (7 digitos)
        double: Real doble(Número en coma flotante de doble precisión): 8 bytes: 1.7E +/- 308 (15 digitos)

        fuentes:   
        https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
        https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170
    */
