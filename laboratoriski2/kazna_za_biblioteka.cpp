#include <iostream>
using namespace std;
int main() {
    int denovi,late=0,kazna=0;
    cin >> denovi;
    if (denovi>14)
    {
        late=denovi-14;
        kazna=late*20;
        if (kazna>500)
        {
            kazna=500;
        }
    }
    cout<<"Late days: "<<late<<endl;
    cout<<"Fee: "<<kazna<<endl;
    if (kazna==500)
        cout<<"Status: MAXIMUM FEE"<<endl;
    else if (kazna<500 && late!=0)
        cout<<"Status: LATE"<<endl;
    else cout<<"Status: ON TIME"<<endl;

    return 0;
}
