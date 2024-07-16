#include <bits/stdc++.h>
using namespace std;
// brute
int removeDuplicateBrute(int arr[], int n)
{
    // set only takes the unique element and in ascending order.
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    // iterate through the set and add value of set to the original array.
    int j = 0;
    for (int x : s)
    {
        arr[j] = x;
        j++;
    }
    // return the size of set , which has the count of unique element.
    return s.size();
}

// optimal approach => 2-pointer.
int removeDuplicateOptimal(int arr[],int n){
    int i=0,j=0;
    while (j<n)
    {
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
        j++;
    }
    return i+1;

}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << removeDuplicateBrute(arr, n);
    cout<< removeDuplicateOptimal(arr,n);

    return 0;
}