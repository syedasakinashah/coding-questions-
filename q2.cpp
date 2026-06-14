
#include <iostream>
using namespace std;

int main()
{
    int base1, base2, height1, height2;
    int area1, area2;

    cout << "Enter value of base1: ";
    cin >> base1;

    cout << "Enter value of height1: ";
    cin >> height1;

    area1 = base1 * height1;

    cout << "Enter value of base2: ";
    cin >> base2;

    cout << "Enter value of height2: ";
    cin >> height2;

    area2 = base2 * height2;

    if (area1 > area2)
    {
        cout << "First parallelogram has the greater area: " << area1;
    }
    else if (area2 > area1)
    {
        cout << "Second parallelogram has the greater area: " << area2;
    }
    else
    {
        cout << "Both parallelograms have the same area: " << area1;
    }

    return 0;
}
