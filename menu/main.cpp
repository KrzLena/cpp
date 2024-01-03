#include <iostream>
#include <fstream>

using namespace std;

int menu()
{
    int odp;
    cout<<"1|  Add an element to the end of the array"<<endl;
    cout<<"2|  Delete an element of the array"<<endl;
    cout<<"3|  Add an element "<<endl;
    cout<<"4|  Wyswietl elementy tablicy"<<endl;
    cout<<"5|  Wczytaj z pliku"<<endl;
    cout<<"6|  Zapisz do pliku"<<endl;
    cout<<"7|  End"<<endl;

    cin>>odp;
    return odp;
}


int main()
{
    int m;
    int *p = NULL;
    int n =0;

    while(true)
    {
        m = menu();
        switch(m)
        {
            case 7:
            {
                return 0;
            }
            case 1:
            {
                int *tab = NULL;
                tab = new int[+1];
                if(p != NULL)
                {
                    for(int i = 0; i<n; ++i)
                    {
                        tab[i] = p[i];
                    }
                    delete[] p;
                }
                cout<<"Enter an array element: "<<endl;
                cin>>tab[n];
                p = tab;
                ++n;
                break;
            }
            case 2:
            {

                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                cout<<"Array content\n-----"<<endl;
                for(int i = 0; i<n; ++i)
                {
                    cout<<p[i]<<endl;
                }
                cout<<"-----\n"<<endl;
                break;
            }
            case 5:
            {
                break;
            }
            case 6:
            {

                fstream file;
                file.open("c:\\save.txt", ios::out | ios::app);

                if (file.is_open())
                {
                    file << "file2"<<endl;
                    file.close();
                }
                else
                {
                    cout << "File couldn't open"<<endl;
                }
                break;
            }
            default:
            {
                cout<<"ERROR"<<endl;
                break;
            }

        }


    }

}
