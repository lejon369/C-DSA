#include <iostream>
using namespace std;

void greset_num(int a, int b, int c, int d)
{

    int grtest = a;

    if (b > grtest)
    {
        grtest = b;
    }
    if (c > grtest)
    {
        grtest = c;
    }
    if (d > grtest)
    {
        grtest = d;
    }
    cout << grtest << endl;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    greset_num(a, b, c, d);
    return 0;
}
