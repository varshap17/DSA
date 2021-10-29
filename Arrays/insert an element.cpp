#include <iostream>
using namespace std;
  
int* insert(int n, int arr[],int x, int pos)
{
    int i;
    n++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    return arr;
}
  int main()
{
	int i, x, pos, n;
	cin>>n;
    int arr[n];
  
    for (i = 0; i < n; i++)
        cin>>arr[i];
    x = 50;
    pos = 5;
  
    insert(n, arr, x, pos);
  
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
  
    return 0;
}
