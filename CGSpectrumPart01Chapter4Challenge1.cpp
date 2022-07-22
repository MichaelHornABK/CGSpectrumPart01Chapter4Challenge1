#include <iostream>
using std::cout;
using std::cin;
using std::string;

int getBiggestFromArray(int arr[]);

int main()
{
    int arr[6] = { 20, 10,5,66,35,898 };

    cout << "The largest in the array is: " << getBiggestFromArray(arr);
}

int getBiggestFromArray(int arr[])
{
    int largest = arr[0];
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}