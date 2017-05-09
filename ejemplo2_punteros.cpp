#include <iostream>
#include <string>


using namespace std;

int main() 
{
    
    int numero = 20;
    string texto = "UTEC";
    
    //Punteros a variables
    int* ptrNumero = &numero;
    string* ptrTexto = &texto;
    
   //impimiendo los valores de la varible usando operador *
    cout << "El valor de numero es: " << *ptrNumero << endl;
    cout << "El valor de texto es: " << *ptrTexto << endl;
    
    
    
    
    return 0;
}7