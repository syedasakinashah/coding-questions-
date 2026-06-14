
/*Calculate and display a table showing the distance traveled by a river 
flowing at a rate of 2.3 meters per second. The table should include the 
distance traveled for each second up to 25 seconds.*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){

    float speed=2.3;
    float distance;

    cout<< "Time\t\t distance"<<endl;
    cout << "------------------------" << endl;
    for(int time=1;time<=25;time++)
    {
        distance = speed*time;
        cout << time << "\t\t" << fixed << setprecision(1) << distance << endl;


    }
    return 0;
}
