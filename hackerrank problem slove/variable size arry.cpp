#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q; // read number of arrays and queries

    vector<vector<int>> arr(n); // this is like a box of boxes

    // read the arrays
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;         // how many numbers in this array
        arr[i].resize(k); // make space for k numbers
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j]; // fill the array
        }
    }

    // answer queries
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;             // read array index and element index
        cout << arr[x][y] << endl; // print that element
    }

    return 0;
}
