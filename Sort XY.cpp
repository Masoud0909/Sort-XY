#include <iostream>

using namespace std;

void sort(double* p, double* q) {
    int temp;
    if (*p > *q) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main()
{
    double x = 500;
    double y = 22;
    sort(&x, &y);
    cout << "x = " << x << "\ny = " << y;//should print 22,500
}
