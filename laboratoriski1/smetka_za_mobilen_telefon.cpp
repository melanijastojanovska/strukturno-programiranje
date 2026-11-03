#include <iostream>
using namespace std;

int main() {
    int minraz, potmb, plusmin=0,plusmb=0, blok=0,total=0;
    cin>>minraz>>potmb;
    if (minraz>1000)
        plusmin=minraz-1000;
    if (potmb>5000)
        plusmb=potmb-5000;
    blok=(plusmb+99)/100;
    total=600+plusmin*2+blok*25;
    cout<<"Extra minutes: "<<plusmin<<endl;
    cout<<"Extra data blocks: "<<blok<<endl;
    if (total>=2000)
        cout<<"Total: "<<2000<<" den"<<endl;
    else cout<<"Total: "<<total<<" den"<<endl;

    return 0;
}