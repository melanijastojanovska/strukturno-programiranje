#include <iostream>
using namespace std;

int main() {
    int brl, brp, slices, leftover, pizzas;
    float cena, cena1, cenac;
    cin>>brl>>brp>>cena;
    slices=brl*brp;
    pizzas=(slices+7)/8;
    leftover=pizzas*8-slices;
    cena1=cena*pizzas;
    cenac=cena1/brl;
    cout<<"Slices needed: "<<slices<<endl;
    cout<<"Pizzas: "<<pizzas<<endl;
    cout<<"Leftover slices: "<<leftover<<endl;
    cout<<"Total: "<<cena1<<" den"<<endl;
    cout<<"Per person: "<<cenac<<" den"<<endl;
    return 0;
}