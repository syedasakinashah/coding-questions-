
#include <iostream>
using namespace std;

int main()
{
    int age, experience;
    int lift, wpm;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter years of experience: ";
    cin >> experience;

    cout << "Enter maximum weight you can lift (pounds): ";
    cin >> lift;

    cout << "Enter typing speed (words per minute): ";
    cin >> wpm;

    if ((age >= 20 || experience >= 5) &&
        (lift >= 25 || wpm >= 60))
    {
        cout << "Accept";
    }
    else
    {
        cout << "Reject";
    }

    return 0;
}
