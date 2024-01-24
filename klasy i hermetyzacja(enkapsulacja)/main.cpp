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

//Class is an advanced data type which lets you (pozwala na agregacje danych). Oprocz obiekt�w, sk�adniami klasy mog� byc funkcje sk�adowe:
//-w�asciwo��/cecha = zmienna sk�adowa
//-metoda = funkcja sk�adowa.
/*

przyk�adowy kod na moodle


*/


//Hermentyzacja (enkapsulacja) to mechanizm stosowany w jezyku cpp do ograniczania dostepu do sk�adnikow klasy(struktury) za pomoc� s�ow kluczowych:
//public = sk�adnik jest publiczny, dost�pny z ka�dego miejsca tj. z wn�trza oraz z zewn�trza klasy.
//protected = sk�adnik jest publiczny, dost�pny dla klas potomnych (dziedzicznie) oraz dla funkcji zaprzyja�nionych
//private =
