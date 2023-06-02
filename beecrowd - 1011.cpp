#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
  long long r;
  double v,pi=3.14159;
  cin >> r;
  v = double(4) / double(3) * pi * r * r * r;
  cout << "VOLUME = " <<fixed<<setprecision(3)<< v << endl;
  return 0;
}
