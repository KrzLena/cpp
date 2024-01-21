#include <iostream>
#include <fstream>

using namespace std;

int menu()
{
    int odp;
    cout<<"1|  Add an element to the end of the array"<<endl;
    cout<<"2|  Delete an element of the array"<<endl;
    cout<<"3|  Add an element in the chosen place"<<endl;
    cout<<"4|  Display the elements of the array"<<endl;
    cout<<"5|  Load from file"<<endl;
    cout<<"6|  Save to file"<<endl;
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
                cout<<"Bye :)"<<endl;
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
                if ( p== NULL)
                {
                    cout<<"The array is empty :("<<endl;
                    break;
                }
                int *tab = NULL;
                tab = new int[n-1];
                cout<<"Enter what element wou want to delete from the array: "<<endl;
                int ele;
                cin >> ele;
                if(ele >= 0 && ele < n)
                {
                    for (int i = 0; i<n; ++i)
                    {
                        if(tab[i] == ele)
                        {
                            *p = tab[i];
                            delete[] p;
                        }
                    }


                }
            break;
            }

            case 3:
            {
                int *tab = NULL;
                int place;
                tab = new int[n+1];

                cout<<"Enter the place you want to add the element: "<<endl;
                cin>>place;
                if(place >=0 && place <=n)
                {
                    for(int i=n-1; i>=0; i--)
                    {
                        if(i>=place)
                        {
                            tab[i+1] = p[i];
                        }
                        else if(i<place)
                        {
                            tab[i] = p[i];
                        }
                    }
                    delete[] p;
                    cout<<"Enter the element you want to add: ";
                    cin>>tab[place];
                    p = tab;
                    n++;
                }
                else
                {
                    cout << "This place doesn't exists (the range is from 0 to " << n << ")" << endl;
                }
                break;
            }
            case 4:
            {
                if (p != NULL)
                {
                    cout<<"Array content\n-----"<<endl;
                    for(int i = 0; i<n; ++i)
                    {
                        cout<<p[i]<<endl;
                    }
                    cout<<"-----\n"<<endl;
                    break;
                }
                else
                {
                    cout<<"The array is empty :("<<endl;
                }

            }
            case 5:
            {
                fstream m_file;

                m_file.open("C:\\Users\\PC\\Desktop\\menu.txt", ios::in);
                string e;
                if(!m_file.is_open())
                {
                    cout<<"File couldn't open"<<endl;
                    break;
                }
                n = 0;
                while(getline(m_file, e))
                {

                    ++n;
                }


                delete[] p;
                int * p = NULL;
                p = new int[n];
                int j = 0;

                m_file.close();
                m_file.open("C:\\Users\\PC\\Desktop\\menu.txt", ios::in);

                while(getline(m_file, e))
                {
                    p[j] = stoi(e);
                    j++;
                }

                m_file.close();
                cout  << "Loading from file has been completed" << endl;
                break;
            }
            case 6:
            {

                fstream m_file;
                m_file.open("C:\\Users\\PC\\Desktop\\menu.txt", ios::out | ios::app);

                if (m_file.is_open())
                {
                    for(int i = 0;i<n; ++i)
                    {
                        m_file << p[i]<<endl;
                    }

                    m_file.close();
                    cout << "Saved"<<endl;
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
