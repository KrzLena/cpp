#include <iostream>

using namespace std;

class zwierze
{
    protected:
    //konstruktor
    zwierze()
        {
            cout<<"jestem zwierzeciem"<<endl;
        }
    public:
        //zmienne
        int lnog = 0;
        string nazwa = "zwierze";
        int lserc = 0;

        //funkcje
        void nogi()
        {
            if(lnog==0){cout<<"nie mam nog :("<<endl;}
            else if(lnog<5 && lnog>1){cout<<"mam "<<lnog<<" nogi"<<endl;}
            else{cout<<"mam "<<lnog<<" nog"<<endl;}
        }

        void serce()
        {
            if(lserc == 0){cout<<"Nie mam serca </3"<<endl;}
            else if (lserc == 1){cout<<"Mam 1 serce"<<endl;}
            else if (lserc > 1 && lserc <5){cout<<"Mam "<<lserc<<" serca"<<endl;}
            else {cout<<"Mam "<<lserc<<" serc"<<endl;}
        }


        //destruktor
        ~zwierze()
        {
            char o = nazwa[nazwa.length()-1];
            if(o =='a')
            {
                cout<<"Umarla[*] "<<nazwa<<endl;
            }
            else
            {
                cout<<"Umarl[*] "<<nazwa<<endl;
            }

        }
};

class pies : public zwierze
{
    public:
        pies()
        {
            lserc = 1;
            lnog = 4;
            nazwa = "pies";
            cout<<"Jestem psem!"<<endl;
        }
};

class osmiornica:public zwierze
{
    public:
        osmiornica()
        {
            lserc = 3;
            lnog = 8;
            nazwa = "osmiornica";
            cout<<"jestem osmiornica!"<<endl;
        }
};

class dzodzownica:public zwierze
{
    public:
        dzodzownica()
        {
            lserc = 5;
            lnog = 0;
            nazwa = "dzodzownica";
            cout<<"jestem dzodzownica!"<<endl;
        }
};

int main()
{
    pies Burek;
    Burek.nogi();
    Burek.serce();
    cout<<"---"<<endl;
    osmiornica Staszek;
    Staszek.nogi();
    Staszek.serce();
    cout<<"---"<<endl;
    dzodzownica Mateusz;
    Mateusz.nogi();
    Mateusz.serce();
    cout<<"---"<<endl;

}
