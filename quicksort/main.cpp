#include <iostream>


using namespace std;

void quick(int tab[], int mini, int maxi)
{
    int p = tab[maxi];
        for(int i = 0; i <= maxi; i++)
        {
            if (tab[i]<p)
            {
                swap(tab[i], tab[maxi]);
            }
            else if(tab[i]>p)
            {
                swap(tab[i], tab[mini]);
            }
            cout<<i<<"proba\n"<<endl;

        }
}

/*
void quick(int tab[], int mini, int maxi)
{
    if(mini<maxi)
    {
        int p = tab[maxi];
        int l = mini;
        for(int i = 0; i>mini && i<maxi; i++)
        {
            if (tab[i] <p)
            {
                int temp = tab[l];
                tab[l] = tab[i];
                tab[i] = temp;
                l+=1;
            }
        }
        switch(tab[maxi],tab[l]);
        quick(tab, mini, l-1);
        quick(tab,l+1, maxi);

    }
}*/
void wypisz(int tab[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<tab[i]<<endl;
    }
    cout<<"\n"<<endl;
}

int main()
{
    int t[]={5,2,9,4,19,6,11,8,3};
    cout<<"\n"<<endl;
    wypisz(t, 9);
    quick(t,0,9);
    wypisz(t, 9);
}
