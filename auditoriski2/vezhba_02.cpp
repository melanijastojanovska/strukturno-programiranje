#include <iostream>
using namespace std;

int main() {
    //Од тастатура се внесуваат координати на една точка од рамнина. Да се напише
    //програма со која ќе се испечати на кој квадрант припаѓа внесената точка.
    int x, y;
    cout<<"Vnesi koordinati na tochka.\n";
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    if (x>0 && y>0)
        cout<<"Koordinatot se naogja vo prviot kvadrant";
    else if (x<0 && y>0)
        cout<<"Koordinatot se naogja vo vtoriot kvadrant";
    else if (x<0 && y<0)
        cout<<"Koordinatot se naogja vo tretiot kvadrant";
    else if (x>0 && y<0)
        cout<<"Koordinatot se naogja vo chetvrtiot kvadrant";
    else if (x==0 && y==0)
        cout<<"Koordinatot se naogja na koordinatniot ppchetok";
    else if (x==0)
        cout<<"Koordinatot lezi na x-oskata";
    else
        cout<<"Koordinatot lezi na y-oskata";
    return 0;
}