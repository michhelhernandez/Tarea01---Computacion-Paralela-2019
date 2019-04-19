#include <cstdlib>
#include <iostream>
#include <fstream>
#include "header.h"

using namespace std;


int main(int argc, char** argv)
{
    if(argc<2) //en caso de no contar con mas de un argumento, se muestra un mensaje de error
        cout<<"Error, no has introducido como minimo un argumento."<<endl;
    
    else
    {
        ofstream archivo;
        archivo.open("Captura_variables_entorno.txt",ios::app); //se abre el archivo para escritura, si no existe se crea

        if(archivo.fail())
            cout<<"Error, no se pudo abrir el archivo."<<endl;
        
        string argumento;
        for (int x=1;x<argc;x++)
        {

            argumento=argv[x];
            mayuscula(argumento); //para efectos practicos el argumento ingresado se convierte a letras mayusculas
            es_variable_entorno(argumento); //se verifica si dicho argumento corresponde a una variable de entorno
            if(es_variable_entorno(argumento))  //en caso de ser el argumento una variable de entorno
            {
                cout<<"'"<<argumento<<"' "<<"es variable de entorno en Linux."<<endl;
                archivo<<argumento<<"= "<<getenv(argumento.c_str())<<endl; //se extrae la variable de entorno y se guarda en el archivo 
            }
                
            else
                cout<<"'"<<argumento<<"' "<<"no es variable de entorno en Linux."<<endl;

        }
        archivo.close(); //se cierra el archivo
        
    }
        
    return 0;
}

