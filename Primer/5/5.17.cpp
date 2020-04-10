#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v {0, 1, 1, 2, 3, 4, 5, 6, 7},
                v1 {0, 1, 1, 2, 3, 4,},
                v2 {0, 1, 1, 2, 4,};

    bool result = true;
    auto iter = v.begin();
    for(auto x : v2)
    {
        if(x != *iter)
        {
            result = false;
            break;
        }
        iter++;
    }
    
    cout << "For v2 result is:" << std::boolalpha << result << endl;
            

    return 0;
}
