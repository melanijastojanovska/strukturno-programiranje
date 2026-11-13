#include <iostream>
using namespace std;

int main() {
    int brzini,vkupno=0,nad=0,najniska=250,najvisoka=0;
    while (cin>>brzini)
    {
        if (brzini<10 || brzini>250)
            continue;
        else
        {
            vkupno++;
            if (brzini>60)
                nad++;
            if (brzini>najvisoka)
                najvisoka=brzini;
            if (brzini<najniska)
                najniska=brzini;
        }
    }
    cout<<"Valid readings: "<<vkupno<<endl;
    cout<<"Highest: "<<najvisoka<<endl;
    cout<<"Lowest: "<<najniska<<endl;
    cout<<"Above 60: "<<nad<<endl;
    return 0;
}