#include <iostream>

using namespace std;

void binarne(int tab[], int n,int l)
{
    int m = n/2;
    int p = 0;
    while (((m+p)/2) != l)
    {

        if (tab[m]==l)
        {
            break;
        }
        else if (tab[m] > l)
        {
            m = m/2;
        }
        else if(tab[m] < l)
        {
            p = m;
            m = (p+n)/2;
        }
    }

    if(tab[m] != l)
    {
        cout<<"nie znaleziono liczby"<<endl;
    }
    else
    {
        cout<<"szukana liczba: "<<l<<"\n znaleziona liczba: "<<tab[m]<<endl;
    }

}


void binv2(int tab[], int n,int num)
{
    int l = 0;
    int p = n-1;
    int mid = (n-1)/2;
    while(p<l)
    {
        if(tab[mid] == num)
        {
            break;
        }
        else if(tab[mid]>num)
        {
            p = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        cout<<tab[mid]<<endl;
    }

}

int main()
{
    int t[10] = {1,2,4,6,7,7,9,10,11,12};
    binarne(t, 10, 3);
}
