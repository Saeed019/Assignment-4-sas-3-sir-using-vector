#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include <vector>

using namespace std;

int main()
{
    int arr[8] = {14,33,27,10,35,19,48,44};
    SelectionSort s;
    vector<int> a;
    a.insert(a.begin(),arr,arr+8);
    int n = a.size();
    s.SelectionSorter(a,n);

     int arr1[8] = {14,33,27,10,35,19,48,44};
    InsertionSort i;
    vector<int> b;
    b.insert(b.begin(),arr1,arr1+8);
    int n1 = b.size();
    i.InsertionSorter(b,n1);

    cout<<"Merge sort\n"<<endl;
    int arr2[8] = {14,33,27,10,35,19,48,44};
    MergeSort m;
    vector<int> c;
    c.insert(c.begin(),arr2,arr2+8);
    int n3 = c.size();
    m.merge_sort(c,0,n3-1);

    int arr3[8] = {14,33,27,10,35,19,48,44};
    BubbleSort bu;
    vector<int> d;
    d.insert(d.begin(),arr3,arr3+8);
    int n4 = d.size();
    bu.BubbleSorter(d,n4);

    return 0;
}
