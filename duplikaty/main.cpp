#include <iostream>
#include <stdlib.h>

using namespace std;

int Random(int t[], int n, int mini, int maxi, bool dup = true)
{
    //jesli mini jest wieksza od maxi
    if(mini>maxi) swap(mini, maxi);
    //jesli moga byc duplikaty
    if (dup == true)
    {
        for(int j = 0; j<n ; j++)
        {
            t[j] = rand()%(maxi-mini)+mini;
        }
    }
    //jesli ma nie byc duplikatow i jest za maly zakres aby ich nie bylo
    else if(dup == false && n > maxi-mini)
    {
        return -1;
    }
    //jesli nie ma byc duplikatow
    else
    {
        int l = rand()%(maxi-mini)+mini;
        for(int i = 0;i<n; i++)
        {
            int k = 0;
            while (k<n)
            {
                for (int z = 0;z<n; z++)
                {
                    if(l==t[z])
                    {
                        l = rand()%(maxi-mini)+mini;
                    }
                }
                k+=1;
            }
        t[i] = l;
        }

    }

}

int wypisz(int t[], int n)
{
    for (int i = 0; i<n; i++)
    {
        cout<<t[i]<<endl;
    }

}

void bubble(int t[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j< n-1-i; j++)
        {
            if (t[j]>t[j+1])
            {
                swap(t[j],t[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Podaj rozmiar tablicy"<<endl;
    cin>>n;
    int *p = new int[n];

    Random(p,n,0,10, false);
    wypisz(p,n);
    cout<<"----"<<endl;
    bubble(p,n);
    wypisz(p,n);
}
