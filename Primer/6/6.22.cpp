#include <iostream>

using namespace std;

//References to pointers
void swap(int * & m, int * & n)
{
    int *temp = nullptr;
    temp = m;
    m = n;
    n = temp;
    
    cout << "INSIDE REF TO PTR SWAP FUNCTION:-" << endl;
    cout << "a: " << *m << " and b: " << *n << endl;
    return;
}

//Pointers to pointers
void swap(int ** m, int ** n)
{
    int *temp = nullptr;
    temp = *m;
    *m = *n;
    *n = temp;
    
    cout << "INSIDE PTR TO PTR SWAP FUNCTION:-" << endl;
    cout << "a: " << **m << " and b: " << **n << endl;
    return;
}

int main()
{
    int a {25}, 
        b {45};

    int *pa = &a,
        *pb = &b;

    cout << "ORIGINAL VALUES:-" << endl;
    cout << "a: " << *pa << " and b: " << *pb << endl;
    
    swap(pa, pb);
    cout << "AFTER REF TO PTR SWAP FUNCTION:-" << endl;
    cout << "a: " << *pa << " and b: " << *pb << endl;
    
    swap(&pa, &pb);
    cout << "AFTER PTR TO PTR SWAP FUNCTION:-" << endl;
    cout << "a: " << *pa << " and b: " << *pb << endl;
    return 0;
}
