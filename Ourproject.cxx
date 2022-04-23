#include <iostream>
using namespace std;
int coin(int array[], int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return 0;
    }
    else if (m <= 0 && n >= 1)
    {
        return 0;
    }
    else
    {
        return (coin(array, m - 1, n) + coin(array, m, n - array[m - 1]));
    }
}
int main()
{
    int arr[] = {1, 2, 5, 10, 50};
    int m = sizeof(arr) / sizeof(arr[0]);
    int n;
    cout << "Enter the N (N between to 1-200): ";
    cin >> n;
    if (n >= 1 && n <= 200)
    {
        cout << coin(arr, m, n);
    }
    else
    {
        cout << "N not between 1 to 200." << endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}