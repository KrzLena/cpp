#include <iostream>

using namespace std;

int main()
{
int *tab = NULL;
int r;
cout<<"Enter the size of the table:"<<endl;
cin >> r;
tab = new int[r];
int sum = 0;

if (tab == NULL)
{
    cout<<"Allocation failed"<<endl;
    return 1;
}
cout<<endl<<"Your table:"<<endl;
for (int i = 0; i<r; i++)
{
    tab[i]= i;
    sum+=i;
    cout<<tab[i]<<", "<<endl;;
}

double aveg = sum/r;
cout<<endl<<"Average: "<<aveg<<endl<<"sum: "<<sum<<endl;

}
