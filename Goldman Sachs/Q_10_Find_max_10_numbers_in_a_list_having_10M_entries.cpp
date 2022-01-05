// Find max 10 numbers in a list having 10M entries

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Creating a Priority Queue and Initializing it with first 10 entries.
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < 10; i++)
    {
        pq.push(arr[i]);
    }

    // Adding next element and removing the smallest.
    for (int i = 10; i < n; i++)
    {
        pq.push(arr[i]);
        pq.pop();
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
