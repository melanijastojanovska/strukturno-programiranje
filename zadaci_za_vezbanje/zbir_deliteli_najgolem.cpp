#include <iostream>
using namespace std;

int main() {
    /*Од стандарден влез се чита еден природен број n. Меѓу природните
    броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
    Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.*/
    int n;
    cin>>n;
    int najgolemzbir=-1;
    int brojsonajgolemzbir=0;
    for (int i=1; i<n; i++)
    {
        int zbir=0;
        for (int j=1; j<i; j++)
        {
            if (i%j==0)
            {
                zbir+=j;
            }
        }
        if (zbir>najgolemzbir)
        {
            najgolemzbir=zbir;
            brojsonajgolemzbir=i;
        }
    }
    cout<<brojsonajgolemzbir<<endl;

    return 0;
}