#include <iostream>
using namespace std;
/*ик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една
во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат)
Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.*/
int main()
{
    int broj;
    while (cin >> broj)
    {
        if (broj < 10)
            continue;

        int broj1 = broj;
        bool cikcak = true;
        int prethodna = broj1 % 10;
        broj1 /= 10;
        int nasoka = 0;

        while (broj1 > 0 && cikcak)
        {
            int tekovna = broj1 % 10;
            int novan;
            if (tekovna > prethodna)
                novan = 1;
            else if (tekovna < prethodna)
                novan = -1;
            else
                novan = 0;

            if (novan == 0 || novan == nasoka)
                cikcak = false;

            nasoka = novan;
            prethodna = tekovna;
            broj1 /= 10;
        }

        if (cikcak)
            cout << broj << endl;
    }
    return 0;
}