#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    int d, dr, c;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;

        if(b > a){
            d = b;
            dr = a;
        }else{
            d = a;
            dr = b;
        }

        while(d % dr != 0)
        {
            c = d % dr;
            d= dr;
            dr = c;
        }

        cout << dr << endl;
    }

    return 0;
}
