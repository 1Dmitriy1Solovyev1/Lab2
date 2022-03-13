#include <iostream>
#include <string>
using namespace std;
struct info
{
    int day;
    string point;
    int value_place;
};
struct time
{
    int hours;
    int min;
};
const int sz_p = 2;
const int sz_d = 3;
int free_day[sz_d] = { 1,4,7 };
int free_place = 10;
int free_time_h = 12; int free_time_m = 30;
string free_point[] = { "moscow","bobroisk" };
int main()
{
    info in1;
    time t1;
    char ch;
    int flag = 0;
    cout << "Mesto naznachenia: " << endl;    cin >> in1.point;
    for (int j = 0; j < sz_p; j++)
    {
        if (free_point[j] == in1.point)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Takogo poezda net" << endl;
        goto exit;
    }

    cout << "Vvedite den'" << endl;           cin >> in1.day;
    for (j = 0; j < sz_d; j++)
    {
        if (free_day[j] == in1.day)
        {
            flag++;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Na takoi den poezda net" << endl;
        goto exit;
    }
    cout << "Vvedite vremia (hh:mm)" << endl; cin >> t1.hours >> ch >> t1.min;
    if (t1.hours <= free_time_h)
    {
        cout << "Vvedite kol-vo mest" << endl;    cin >> in1.value_place;
        if (in1.value_place <= free_place)
            cout << "Mogno oformit' bilet" << endl;
        else
        {
            cout << "Mest net" << endl;
            goto exit;
        }
    }
    else
    {
        cout << "Na eto vremia net" << endl;
        goto exit;
    }

exit:
    return 0;
}