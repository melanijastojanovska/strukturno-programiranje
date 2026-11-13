#include <iostream>
using namespace std;

int main() {
    int vreme,late=0,blocks=0,price=0;
    cin>>vreme;
    if (vreme>30)
        blocks=((vreme-30)+29)/30;
    if (vreme>300)
        late=300;
    price=blocks*40+late;
    cout<<"Paid blocks: "<<blocks<<endl;
    cout<<"Late fee: "<<late<<endl;
    cout<<"Price: "<<price<<endl;
    return 0;
}