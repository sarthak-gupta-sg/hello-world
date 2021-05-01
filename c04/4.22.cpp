#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> grades { 91, 75, 40, 50, 25,};
    string result;

    //Advanced for loop
    for(auto x : grades)
    {
        result =  (x > 90) ? "high pass" : (x > 75 && x <= 90) ? "pass" : (x >= 60 && x <= 75) ? "low pass" : "fail";
        cout << x << " " << result << endl;
    }

    return 0;
}
