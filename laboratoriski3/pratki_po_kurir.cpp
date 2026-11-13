#include <iostream>
using namespace std;

int main() {
    int kuriri,vkupno=0, poteshki=0, bez=0;
    cin>>kuriri;
    for (int i=1; i<=kuriri; i++)
    {
        int tezhini;
        int brojach=0;
        while (true)
        {
            cin>>tezhini;
            if (tezhini==0)
                break;
            brojach++;
            vkupno++;
            if (tezhini>20)
                poteshki++;
        }
        if (brojach==0)
            bez++;
    }
    cout<<"Total parcels: "<<vkupno<<endl;
    cout<<"Parcels over 20 kg: "<<poteshki<<endl;
    cout<<"Couriers without parcels: "<<bez<<endl;
    return 0;
}