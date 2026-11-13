#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tekovna, posakuvana;
    cin >> tekovna >> posakuvana;
    cout<<"Difference: "<<tekovna-posakuvana<<endl;
    if (tekovna==posakuvana+1 || tekovna==posakuvana-1)
        cout<<"Degrees to change: 0"<<endl;
    else
    cout<<"Degrees to change: "<<abs(tekovna-posakuvana)<<endl;
    if (tekovna>posakuvana+1)
    {
        cout<<"Mode: Cooling ON"<<endl;
    }
    else if (tekovna<posakuvana-1)
    {
        cout<<"Mode: Heating ON"<<endl;
    }
    else cout<<"Mode: OK"<<endl;
    return 0;
}