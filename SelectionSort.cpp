#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{
}
SelectionSort::~SelectionSort()
{
}
inline void Swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}
void SelectionSort::SelectionSorter(vector<int> arr, int arr_size)
{
    cout <<"SelectionSort :"<<endl;
    for(int index = 0; index < arr_size - 1; ++index)
    {
        int min = index;
        for(int index1 = index+1; index1 < arr_size; ++index1){
            if(arr[index1] < arr[min])
                min = index1;
        }
        Swap(arr[min], arr[index]);
       for(int index3 = 0; index3 < arr_size; ++index3)
    {
        cout << arr[index3]<<" ";
    }
    cout <<endl;
    }
}
