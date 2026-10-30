#include <iostream>
using namespace std;

int main()
{
    /*Да се напише програма каде од тастатура ќе се внесе цена на производ,
    број на рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до 100).
    Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот*/
    float cena, rata, kamata, vkupno;
    int br;
    cout<<"Vnesi cena na proizvodot "<<endl;
    cin>>cena;
    cout<<"Vnesi broj na rati "<<endl;
    cin>>br;
    cout<<"Vnesi kamata na proizvodot "<<endl;
    cin>>kamata;
    vkupno=cena*(1+kamata/100);
    rata=vkupno/br;
    cout<<"Edna rata kje iznesuva "<<rata<<endl;
    cout<<"Vkupnata suma shto kje se isplati za proizvodot e "<<vkupno<<endl;




    return 0;
}