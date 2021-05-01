#include <iostream>

using namespace std;

void print(int const *val)
{
    cout << *val << endl;
}

void print(char const * c)
{
    for( ; *c != '\0'; )
    {
        cout << *c++ ;
    }
    cout << endl;
    return;
}

void print(int const * val, int const * start, int const * end)
{
    for(auto i = 0 ; i != (end - start); ++i)
    {
        cout << *val++ ;
    }
    cout << endl;
    return;
}

void print(int const * start, int const * end)
{
    for( ; start != end; )
    {
        cout << *start++ ;
    }
    cout << endl;
    return;
}

void print(int const * val, size_t const size)
{
    for(size_t i = 0 ; i != size; ++i)
    {
        cout << *val++ ;
    }
    cout << endl;
    return;
}

void print(int const (&arr)[5])
{
    for(auto x : arr)
    {
        cout << x ;
    }
    cout << endl;
    return;
}

int main()
{
    int i {0}, 
        j[] {0, 1, 2, 3, 4};
    
    char test[] = {"sarthak"};
    print(&i);
    
    print(test);
    
    cout << begin(j) << " " << end(j) << endl;
    print(j, begin(j), end(j));
    
    print(begin(j), end(j));
    
    print(j, end(j) - begin(j) );
    
    print(j);
    return 0;
}
