#include <iostream>
using namespace std;

/*Programa que recibe una cadena de caracteres y separa las letras de los numeros
 en dos cadenas diferentes
 */

int main()
{
    char cadena[50], tex[50], nums[50];//cadenas que almacenan las entradas y salidas
    char numeros[11]={48,49,50,51,52,53,54,55,56,57};//Representacion de los numeros del 0-9 en ascii
    int cont=0, c=0;
    bool det=true;
    cout << "Escriba una cadena de letras y numeros: " << endl;
    cin.getline(cadena,50);

    cout<<"Original: "<<cadena<<endl;
    for (int i=0; i<50; i++){
        det=true;
        for (int l=0; l<10; l++){
            if (cadena[i]==numeros[l]){//Se evalua si en la cadena hay numeros
                 nums[c]=cadena[i];//Se agregan los numeros a la cadena de salida
                 c++;
                 det=false;
                 break;
            }
                 }
        if(det){
              tex[cont]=cadena[i];//Se agregra el texto a la cadena de salida
              cont++;
             }
 }
    cout<<"Texto: "<<tex<<endl;
    cout<<"Numero: "<<nums<<endl;
    return 0;
}
