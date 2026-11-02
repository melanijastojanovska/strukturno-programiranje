#include <iostream>
using namespace std;

int main() {
    /*Од тастатура се внесуваат должини на три отсечки во произволен редослед.
    Да се напише програма што ќе провери дали од отсечките може
    да се конструира триаголник, при што ако може, да се провери дали истиот е правоаголен и
    да се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни пораки.*/
    int a, b, c;
    cout<<"Vnesi strani na triagolnik:";
    cin>>a>>b>>c;
    if ((a+b<=c) || (a+c<=b) || (b+c<=a) || (c+a<=b))
        cout<<"Ne mozhe da se konstruira triagolnik!";
    else
    {
        if (a>=b)
        {
            float tmp=a;
            a=b;
            b=tmp;
        }
        if (a>=c)
        {
            float tmp=a;
            a=c;
            c=tmp;
        }
        if (b>=c)
        {
            float tmp=b;
            b=c;
            c=tmp;
        }
        //so ova c stanuva hipotenuzata (najdolgata strana)
        if (a*a+b*b==c*c)
        {
            cout<<"Triagolnikot e pravoagolen"<<endl;
            cout<<"Negovata ploshtina iznesuva "<<a*b/2<<endl;
        }
        else
            cout<<"Triagolnikot ne e pravoagolen"<<endl;
    }


    return 0;
}