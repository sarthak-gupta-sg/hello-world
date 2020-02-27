#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    
    cout << "Enter a sequence of numbers:" << endl;
    int temp;
    while(cin >> temp)
    {
        v.push_back(temp);
    }
    
    cout << "Input vector is:" << endl;
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " " ;
    }

	/* BAD CODE as it leads to summation of one past the last element in case of odd sized vector
	//Perform summation of adjacent elements
	cout << endl << "Summation of adjacent elements- Approach 1:" << endl;
    for(auto it = v.begin(); it < v.end(); it = it + 2)
    {
        cout << *it + *(it + 1) << " " ;
    }
    */ 
    
    //Perform summation of adjacent elements - Another approach
	cout << endl << "Summation of adjacent elements:" << endl;
    for(auto it = v.begin(); it != v.end() - 1; ++it)
    {
        cout << *it + *(it + 1) << " " ;
    }
    
    //Perform summation of first and last followed by second and second last etc.
	cout << endl << "Summation of first and last elements:" << endl;
    for(auto start = v.begin(), end  = v.end() - 1; start <= end; ++start, --end)
    {
        cout << *start + *end << " " ;
    }
    
    cout << endl;
    return 0;
}
