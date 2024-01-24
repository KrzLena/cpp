#include <iostream>

using namespace std;


struct Example //define structure
{
    int a : 19, b, c; //a equals 19B

};

union Ex //define union
{
    unsigned int a;
    unsigned char t[4];
};
//in union only one arg can be defined
//so when i whrite A.a = 3 and A.t = "arys" alnd ill whrite "cout<<A.a<<", "<<A.t<<endl;"
//the output will be 0, arys
int main()
{

    cout<<sizeof(Ex)<<endl; //print how much Bites are in union Ex

    Ex A;
    A.a = 255; //set a as 255

    cout<<A.a<<endl;
    cout<<(int)A.t[0]<<" "<<(int)A.t[1]<<" "<<(int)A.t[2]<<" "<<(int)A.t[3]<<endl;
    return 0;
}
