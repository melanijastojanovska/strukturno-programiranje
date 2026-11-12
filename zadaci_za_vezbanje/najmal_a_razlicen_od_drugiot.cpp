#include <iostream>
using namespace std;
/* Од стандарден влез се внесуваат два цели броја N и Х.
Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
Еден број е тотално различен од друг ако и само ако во него не се појавува
ниту една од цифрите на другиот број. Задачата да се реши без употреба на низи и матрици.*/
int main() {
    int n,x,broj=0;
    cin>>n>>x;
    for (int i=n-1; i>0; i--)
    {
        int pamti=i;
        bool dobar=true;
        while (pamti>0 && dobar)
        {
            int l=pamti%10;
            int px=x;
            while (px>0)
            {
                if (px%10==l)
                {
                    dobar=false;
                    break;
                }
                px=px/10;
            }
            pamti/=10;
        }
        if (dobar)
        {
            broj=i;
            break;
        }
    }
    cout<<broj;

    return 0;
}