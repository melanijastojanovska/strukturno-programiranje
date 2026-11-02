#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се
    провери дали од дадените отсечки може да се конструра триаголник. Ако може, да се испечати
    дали триаголникот е разностран, рамностран или рамнокрак и да му се пресмета плоштината.*/
    int a, b, c;
    cout<<"Vnesi dolzhina na tri otsechki:"<<endl;
    cin>>a>>b>>c;
    if ((a+b<=c) || (a+c<=b) || (b+c<=a) || (c+a<=b))
        cout<<"Ne mozhe da se konstruira triagolnik!";
    else
    {
        if (a==b && b==c)
            cout<<"Triagolnikot e ramnostran."<<endl;
        else if (a==b || a==c || b==c)
            cout<<"Triagolniko e ramnokrak."<<endl;
        else
            cout<<"Triagolnikot e raznostran."<<endl;
        float p, s=(a+b+c)/2;
        p=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Ploshtinata iznesuva "<<p<<endl;
    }
    return 0;
}