#include <bits/stdc++.h>
using namespace std;
  
// Function to return the count 
// of unvisited indices starting 
// from the index 0 
int countUnvisited(int n, int m)
{
      
    // Largest index that 
    // cannot be visited 
    int X = (m * n) - m - n; 
  
    // Push the index to the queue 
    queue<int> queue;
  
    queue.push(X); 
  
    // To store the required count 
    int count = 0; 
    while (queue.size() > 0) 
    { 
  
        // Current index that cannot be visited 
        int curr = queue.front(); 
        queue.pop();
  
        // Increment the count for 
        // the current index 
        count++; 
  
        // (curr - m) and (curr - n) are also 
        // unreachable if they are valid indices 
        if (curr - m > 0) 
            queue.push(curr - m); 
        if (curr - n > 0) 
            queue.push(curr - n); 
    } 
  
    // Return the required count 
    return count; 
}
  
// Driver code 
int main()
{
    int n = 5, m = 6; 
  
    cout << countUnvisited(n, m);
  
    return 0;
}
