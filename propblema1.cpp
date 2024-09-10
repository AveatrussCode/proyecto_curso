//se vienen el primer problema vomoooooooo

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
    cout<<"voy a calcular la suma, resta, multiplicacion y division de dos numeros enteros"<<endl;
    cout<<"dame el primer numero: ";
    cin>>numero1;
    cout<<"dame el segundo numero: ";
    cin>>numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;
    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;


    return 0;
}
