#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> numbers;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    } 
    // Sort numbers
    sort(numbers.begin(), numbers.end());

    // Check first and last pairs to determine maximum range of values
    int max1 = numbers[1] * numbers[0] + numbers[1] - numbers[0];
    int max2 = numbers[n - 1] * numbers[n-2] + numbers[n - 1] - numbers[n - 2];
    int maximum = max(max1, max2);
    
    cout << maximum << endl;
    return 0;
}