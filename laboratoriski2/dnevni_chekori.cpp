#include <iostream>
using namespace std;

int main() {
    int denovi,goal=0, best=0,bday=0;
    cin>>denovi;
    double vkupno=0;
    if (denovi<=0)
    {
        cout<<"Invalid number of days"<<endl;
        return 0;
    }
    for (int i=1; i<=denovi; i++)
    {
        int chekori;
        cin>>chekori;
        vkupno+=chekori;
        if (chekori >=10000)
            goal++;
        if (chekori>best)
        {
            best=chekori;
            bday=i;
        }
        else if (chekori==best)
            continue;
    }
    if (bday==0)
        bday=1;
    double prosek=vkupno/denovi;
    cout<<"Goal days: "<<goal<<endl;
    cout<<"Best day: "<<bday<<" ("<<best<<" steps)"<<endl;
    cout<<"Average: "<<prosek<<endl;

    return 0;
}