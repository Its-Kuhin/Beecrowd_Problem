#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main()
{
    int r1,x1,y1,r2,x2,y2;
    while((scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF)){
    double d=sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    if (d + r2 == r1)
    {
        cout << "RICO" << endl;
    }
    else if (d + r2 < r1)
    {
        cout << "RICO" << endl;
    }
    else
    {
        cout << "MORTO" << endl;
    }

    }

    return 0;
}
