#include <iostream>
#include "clsPeriod.h"
#include "clsUtil.h"
using namespace std;
#define e endl;
int main()
{
    clsUtil::Srand();
    cout << clsUtil::random(10, 20) << e;
    cout << clsUtil::getrandomchar(clsUtil::mixletter) << e;
    cout << clsUtil::Generateword(clsUtil::mixletter, 10) << e;
    cout << clsUtil::Generatekey(clsUtil::capitalletter) << e;
    clsUtil::Generatekeys(10, clsUtil::capitalletter);
    clsDate date1, date2("11/12/2015");
    clsUtil::Swap(date1, date2);
    date1.print();
    date2.print();
    int arr[5] = { 1,2,3,4,5 };
    clsUtil::ShuffleArray(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << e;
    }
    string arr2[5] = { "mazen","hazem","gassem","mostafa","mosa" };
    clsUtil::ShuffleArray(arr2, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << e;
    }
    int arr3[5];
    clsUtil::fillarraywithrandomnumbers(arr3, 5, 20, 50);
    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << e;
    }
    string arr4[6];
    clsUtil::fillarraywithrandomwords(arr4, 6, clsUtil::capitalletter, 8);
    clsUtil::printarray(arr4, 6);
    string arr5[8];
    clsUtil::fillarraywithrandomkeys(arr5, 8, clsUtil::capitalletter);
    clsUtil::printarrayverticaly(arr5, 8);
    cout << "hello" << clsUtil::Tabs(3) << "world" << e;
    string s = "hello ";
    s = clsUtil::encrypttext(s, 5);
    cout << s << e;
    s = clsUtil::decrypttext(s, 5);
    cout << s << e;
    return 0;
}