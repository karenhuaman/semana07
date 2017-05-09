#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()                                                                        
{
    
    
    
    // pedir el nombre del archivo
    
    
    string narchivo;
      cout << "Ingrese el nombre del archivo: ";
      cin >> narchivo;
     
    //Generar el archivo
    ofstream archivo(narchivo);
    //pedir la cantidad de numeros a generar
    int n;
    cout << "ingrese cantidad de numeros:";
    cin >> n;
    
      //pedir el limite del rango y validar que no sea mayor a RAND_MAX
      
      int limite = 0;
      do
      {
          cout << "ingrese el limite:";
          cin >> limite;
      }
     while (limite >= RAND_MAX);
    
    //generar numeros aleatorios que deberan ser grabados en el archivo (FUNCION)
   for (int i = 0; i <n;i++)
   {
       archivo << rand() % limite << endl;
   }
    
    //cerrar el archivo
    archivo.close();
    
    return 0;
}