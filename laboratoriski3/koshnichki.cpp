#include <iostream>
using namespace std;

int main() {
    int kupuvachi,vkupno=0,nad=0,prazno=0;
    cin>>kupuvachi;
    for(int i=1; i<=kupuvachi; i++)
    {
        int brojach=0;
        int ceni;
        while (true)
        {
            cin>>ceni;
            if (ceni==0)
                break;
            vkupno++;
            brojach++;
            if (ceni>500)
                nad++;
        }
        if (brojach==0)
            prazno++;
    }
    cout<<"Total items: "<<vkupno<<endl;
    cout<<"Items over 500: "<<nad<<endl;
    cout<<"Empty baskets: "<<prazno<<endl;
    return 0;
}