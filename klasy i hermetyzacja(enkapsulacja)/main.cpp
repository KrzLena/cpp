#include <iostream>

using namespace std;

struct P
{
    int x,y;
public:
    void change(int n, int d)
    {
        x = n;
        if(d == 0)
        {
            y = 1;
        }
        else
        {
            y = d;
        }
    }


    void output()
    {
        cout<<x<<"/"<<y<<endl;
    }
    double fraction()
    {
            return x/y;
    }

};

int main()
{
    P A;
    A.x = 3;
    A.y = 4;
    A.output();
    A.fraction();
    return 0;
}

//Class is an advanced data type which lets you (pozwala na agregacje danych). Oprocz obiektów, sk³adniami klasy mog¹ byc funkcje sk³adowe:
//-w³asciwoœæ/cecha = zmienna sk³adowa
//-metoda = funkcja sk³adowa.
/*

przyk³adowy kod na moodle


*/


//Hermentyzacja (enkapsulacja) to mechanizm stosowany w jezyku cpp do ograniczania dostepu do sk³adnikow klasy(struktury) za pomoc¹ s³ow kluczowych:
//public = sk³adnik jest publiczny, dostêpny z ka¿dego miejsca tj. z wnêtrza oraz z zewnêtrza klasy.
//protected = sk³adnik jest publiczny, dostêpny dla klas potomnych (dziedzicznie) oraz dla funkcji zaprzyjaŸnionych
//private =
