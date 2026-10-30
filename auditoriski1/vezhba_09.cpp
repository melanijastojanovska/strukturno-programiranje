#include <iostream>
using namespace std;

int main() 
{
    //Да се напише програма каде од тастатура ќе се внесе цена на производ,
    //а потоа ќе ја испечати неговата цена со пресметан ддв.
    float cena;
    cout<<"Vnesi cena na proizvod: ";
    cin>>cena;
    cout<<"Vkupnata cena na proizvodot so vkluchen DDV e "<<cena*1.18<<endl;
    return 0;
}