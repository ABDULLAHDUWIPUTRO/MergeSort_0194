#include <iostream>
using namespace std;

//create main array & temporary array
int arr[20], B[20];
//n is array input size 
int n;

void input()
{
    while(true)
    {
        cout << "masukan panjang element array : ";
        cin >> n;

        if (n <= 20)
        {   
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
 }
cout << "\n--------------------------" << endl;
cout << "\nInputkan isi element array" << endl;
cout << "\n--------------------------" << endl;

for (int i = 0; i < n; i++)
    {
  cout << "array index ke- " << i << " : ";
  cin >> arr[i];
    }
}
    

//create function merge sort
void mergesort(int low, int high)
{
     if (low >= high) //step 1
     {
        return; // step 1.a
     }

     int mid = (low + high) / 2; //step 2

     