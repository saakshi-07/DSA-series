#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // code here
    int p,q,r,t,u;
    p=x+y;
    q=x-y;
    r=x*y;
    t=x/y;
    double s=(double) x/y;
    u=x%y;
    

    cout << p << " " << q << " " << r << " " << fixed << setprecision(3) << s << " "
         << t << " " << u;

    return 0;
}
