#include <iostream>
using namespace std;
/*Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5  Пр.  508294, 2638, 81
Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10  (броевите помали од 10 се
игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра.Да се испечатат сите цик-цак броеви.*/
int main() {
    int broj;
    while (cin >> broj)
    {
        if (broj < 10)
            continue;

        int broj1 = broj;
        bool cikcak = true;
        int prethodna = broj1 % 10;
        broj1 /= 10;
        while (broj1 > 0 && cikcak)
        {
            int tekovna = broj1 % 10;
            if ((tekovna < 5) == (prethodna < 5))
                cikcak = false;
            prethodna = tekovna;
            broj1 /= 10;
        }
        if (cikcak)
            cout << broj << endl;
    }
    return 0;
}