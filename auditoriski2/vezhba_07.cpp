#include <iostream>
using namespace std;

int main() {
    /*Да се напише програма за пресметување на возраста на едно куче во човечки години.
    Кучешката возраст се чита од стандарден влез.
    Доколку се внесе негативен број за возраста, да се испечати следната порака:
    “Vozrasta mora da bide pozitiven broj”.
    Забелешка: За првите две години, една кучешка година е еднаква на 10,5 човечки години.
    После тоа, секоја кучешка година е еднаква на 4 човечки години.*/
    int kuce, covek;
    cout<<"Vnesi kucheshka vozrast:";
    cin>>kuce;
    if (kuce<0)
        cout<<"Vozrasta mora da bide pozitiven broj";
    else
    {
        if (kuce<=2)
            covek=kuce*10.5;
        else
            covek=2*10.5+(kuce-2)*4;
        cout<<"Vozrasta vo chovechki godini e "<<covek<<endl;
    }
    return 0;
}