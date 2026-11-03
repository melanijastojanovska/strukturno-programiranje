#include <iostream>
using namespace std;

int main() {
    int dnevna, nokjna, dt=0, nt=0,full=0, doplata=0;
    float popust=0, total=0;
    cin>>dnevna>>nokjna;
    dt=dnevna*10;
    nt=nokjna*5;
    if ((dnevna+nokjna)>600)
        doplata+=300;
    full=dt+nt;
    if (nokjna>dnevna)
        popust=(full*1.10)-full;
    total=full-popust+doplata+150;
    cout<<"Energy: "<<full<<" den"<<endl;
    cout<<"Discount: "<<popust<<" den"<<endl;
    cout<<"Surcharge: "<<doplata<<" den"<<endl;
    cout<<"Total: "<<total<<" den"<<endl;

    return 0;
}