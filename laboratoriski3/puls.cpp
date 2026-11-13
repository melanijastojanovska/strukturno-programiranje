#include <iostream>
using namespace std;
int main() {
    int cukanja,visoka=0,niska=220,nad=0,vkupno=0;
    while (cin>>cukanja)
    {
        if (cukanja<30 || cukanja>220)
            continue;
        else
        {
            vkupno++;
            if (cukanja>100)
                nad++;
            if (cukanja>visoka)
                visoka=cukanja;
            if (cukanja<niska)
                niska=cukanja;
        }
    }
    cout<<"Valid readings: "<<vkupno<<endl;
    cout<<"Highest: "<<visoka<<endl;
    cout<<"Lowest: "<<niska<<endl;
    cout<<"Above 100: "<<nad<<endl;
    return 0;
}
