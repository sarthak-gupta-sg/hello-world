// C++ program to demonstrate segmentation
// fault when array out of bound is accessed.
#include <iostream>

using namespace std;

int main()
{
   int arr[2] = { 5, 10};
   arr[3678] = 10;  // Accessing out of bound
   return 0;
}
