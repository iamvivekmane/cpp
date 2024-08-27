#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // vector<int>::iterator itr_start = v.begin();
    // vector<int>::iterator itr_end = v.end();
    // while (itr_start != itr_end)
    // {
    //     cout << *itr_start << " ";
    //     itr_start++;
    // }
    // cout << endl;
    // // --------------------------------------------------------------
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    vector<int>::iterator itr_start = v.begin();
    vector<int>::iterator itr_end = v.end();
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}