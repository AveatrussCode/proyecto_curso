#include <iostream>

using namespace std;

int main(){
    int n1, new_precio, impuesto = 0;
    cout<<"dame un numero: "; cin>>n1;
    impuesto = n1 * 0.16;
    new_precio = n1 + impuesto;
    cout<<"el numero mas impuesto es: "<<new_precio;

    return 0;
}
