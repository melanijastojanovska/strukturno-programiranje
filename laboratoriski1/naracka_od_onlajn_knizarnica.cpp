#include <iostream>
using namespace std;

int main() {
    float cenakniga, cenafull, popust=0,dostava=0,total=0;
    int brknigi,kutii;
    cin>>cenakniga>>brknigi;
    cenafull=cenakniga*brknigi;
    if (brknigi>=5)
        popust=(cenafull*1.10)-cenafull;
    kutii=(brknigi+3)/4;
    if (cenafull-popust<3000)
        dostava=200;
    total=cenafull-popust+dostava+(kutii*30);
    cout<<"Books: "<<cenafull<<" den"<<endl;
    cout<<"Discount: "<<popust<<" den"<<endl;
    cout<<"Boxes: "<<kutii<<endl;
    cout<<"Delivery: "<<dostava<<" den"<<endl;
    cout<<"Total: "<<total<<" den"<<endl;
    return 0;
}