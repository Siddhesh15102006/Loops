// Experiment Number - 6
// Siddhesh Gajare
// ENTC (A3)
// 25070122511

#include <iostream>
using namespace std;

int main() 
{
int arr[50], num, temp,i,j;
    cout << "Enter the total number of elements:";
    cin >> num;
    
    for(i=0; i<num; i++)
    {
        cout << "Enter Element" << i+1 <<":";
        cin>>arr[i];
    }
    for (i=0, j=num-1; i<j; i++ , j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 

    }
    cout << "In reverse order:";
    for (i=0; i<num; i++)
    {
    cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}
