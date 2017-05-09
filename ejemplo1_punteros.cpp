#include <iostream>


using namespace std;

int main()  
{
    //variable normal
   int x=10;
   cout << "El valor de x es: " << x << endl; //imprimir el valor 
   cout << "La direccion de x es: " << &x << endl; //imprime direccion de una variable
   cout << "El tamano de x es: " << sizeof(x) << endl; //tamaño
 
    //variable puntero
    int* ptrX; //nomenclatura camello Ejemplo: nombreArchivo
                //nomenclatura c      Ejemplo: nombre_archivo
    
    //asignando la direccion de X al puntero ptrX
    ptrX = &x; 
    cout << "El valor de otrX es: " << ptrX << endl;   // valor del puntero
    cout << "La direccion de ptrX es: " << &ptrX << endl; // direccion del puntero
    cout << "El tamano de ptrX es: " << sizeof(ptrX) << endl; // tamaño del puntero
    
    
    
    
    
    
    return 0;
}