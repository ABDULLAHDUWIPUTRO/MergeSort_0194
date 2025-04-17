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

     //step 3
     //fungsi rekursi - memanggil diri sendiri
     mergesort(low, mid);      //STEP 3.A
     mergesort(mid + 1, high); //STEP 3.B

     // step 4
     int i = low;     // step 4.A
     int j = mid + 1; // step 4.B
     int k = low;     // step 4.C