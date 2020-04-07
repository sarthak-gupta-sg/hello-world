#include <iostream>
#include <vector>

/* If using #define NDEBUG it must come before <cassert> as NDEBUG is checked by cassert. 
 * Better way is to NOT USE #define and use -DNDEBUG during compile time
#define NDEBUG
*/

#include <cassert>

using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    //Will abort program during last condition
    //assert( beg != end); 

    if(beg != end)
    {
        #ifndef NDEBUG
        cerr << "From function "
             << __func__ << " in file "
             << __FILE__ << " in line "
             << __LINE__ << " compiled at "
             << __TIME__ << " on "
             << __DATE__ << ". Vector has size: " << end - beg << endl;
        #endif
        cout << *beg;
        print(++beg, end);
    }
    return;
}


int main()
{
    vector<int> v {1, 2, 3, 4, 5};
    print(v.begin(), v.end());
    return 0;
}
