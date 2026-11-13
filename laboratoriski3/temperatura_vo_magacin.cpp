#include <iostream>
using namespace std;

int main() {
    int temperatura,vkupno=0,nad=0,najniska=60,najvisoka=-40;
    while (cin>>temperatura)
    {
        if (temperatura<-40 || temperatura>60)
        {
            continue;
        }
        else
        {
            vkupno++;
            if (temperatura>najvisoka)
                najvisoka=temperatura;
            if (temperatura<najniska)
                najniska=temperatura;
            if (temperatura>25)
                nad++;
        }
    }
    cout<<"Valid readings: "<<vkupno<<endl;
    cout<<"Highest: "<<najvisoka<<endl;
    cout<<"Lowest: "<<najniska<<endl;
    cout<<"Above 25: "<<nad<<endl;
    return 0;
}