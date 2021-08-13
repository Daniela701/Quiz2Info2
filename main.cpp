#include <iostream>
using namespace std;

/*Programa que recibe un numero n y lee una cadena de caracteres y las separa en n cifras
 e imprime la suma de los numeros
 */

int main()
{
    char cadena[50];
    int n=0, suma=0, contador, numero, cadnum[1];
    cout<<"Escriba la cadena de numeros : "<<endl;
    cin.getline(cadena,50);

    cout << "Escriba un numero : " << endl;
    cin >>n;

    cout<<"Original: "<<cadena<<endl;
    int size= sizeof(cadena);
    size/=n;

    for (int i=0; i<50; i++){
        contador=0;
        if(size % 2==0){
            while (contador!=n){
                cadnum[0]+=cadena[i];
                i++;
                contador++;
            }
        }
        else{

        }
  }
}
