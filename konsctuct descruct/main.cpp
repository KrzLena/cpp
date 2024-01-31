#include <iostream>
//ヽ(‘ ∇‘ )ノ
using namespace std;

class fraction
{
    int n, d;
public:
    void setlm(int _n, int _d)
    {
        n = _n;
        if(_d == 0) d=1;
        else d = _d;
    }

    void ret()
    {
        cout<<n<<"/"<<d<<endl;
    }

    ~fraction()
    {
        cout<<" i delete ヽ(‘ ∇‘ )ノ"<<endl;
    }

};

int main()
{
    fraction A;
    //fraction B(1,2);
    fraction *p = NULL;
    p = new fraction[2];
    delete[] p;

    /*
    A.setlm(12,23);
    fraction B(A);
    B = A;
    A.ret();
    B.ret();
    fraction C;
    C.setlm(1,2);
    C.ret();
    */
    return 0;
}
