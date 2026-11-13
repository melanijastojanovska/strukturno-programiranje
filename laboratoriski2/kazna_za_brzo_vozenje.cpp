#include <iostream>
using namespace std;

int main() {
    int ogranicuvanje, brzina, kazna=0;
    int over=0;
    cin>>ogranicuvanje>>brzina;
    if (brzina>ogranicuvanje)
        over=brzina-ogranicuvanje;
    if (brzina>ogranicuvanje+10 && brzina<=ogranicuvanje+30)
        kazna=1500;
    if (brzina>ogranicuvanje+30)
        kazna=4500;
    cout<<"Over the limit: "<<over<<endl;
    if (brzina<=ogranicuvanje)
        cout<<"No fine"<<endl;
    else if (brzina<=ogranicuvanje+10)
        cout<<"Warning"<<endl;
    if (kazna!=0)
    {
        cout<<"Fine: "<<kazna<<endl;
        if (kazna==4500)
            cout<<"License suspended"<<endl;
    }
    return 0;
}