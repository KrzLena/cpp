#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//zad1
void los(int tab[], int n, int mini, int maxi)
{
    for(int i = 0; i<n; i++)
    {
        int r = rand();
        if (r>maxi)
        {
            while(r>maxi)
            {
                r = r/maxi;
            }
            tab[i] = r;
            cout<<tab[i]<<endl;
        }
        else
        {
            tab[i] = r;
            cout<<tab[i]<<endl;
        }
    }
}

//zad2
void minimum(int tab[], int start, int stop, int n)
{
    for(int i=0; i<n)
}


int main()
{srand(time(NULL));
    cout<<rand()<<endl;
    int tablica;
    los(&tablica,10,1,10);
}

