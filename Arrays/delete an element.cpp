#include <iostream>
using namespace std;
  
int main()
{
	int i, pos, n;
	cin>>n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter the position whose element is to be deleted:\n";
    cin>>pos;
    for (i = pos; i<n; i++)
        arr[i] = arr[i + 1];
    n--;
  
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
  
    return 0;
}
