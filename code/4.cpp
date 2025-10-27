#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int randomenum(int from, int to)
{
    int reednum = rand() % (to - from + 1) + from;
    return reednum;
}
void fillmatrixwithrandomnumbers(int arr[3][3],short rows,short cols)
{
    
    for(short i=0;i<rows;i++)
    {
        for(short j=0;j<cols;j++)
        {
            arr[i][j]=randomenum(1,100);
        }
    }
   
}
void printmatrix(int arr[3][3],short rows,short cols)
{
    for(short i=0;i<rows;i++)
    {
        for(short j=0;j<cols;j++)
        {
            cout<<setw(3)<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int colsum(int arr[3][3],short rows,short colnumber)
{
    int sum=0;
    for(short i=0;i<rows;i++)
    {
        sum+=arr[i][colnumber];
    }
    return sum;
}

void printcolumnsums(int arr[3][3],short rows,short cols)
{
    cout << "\n The following are the sums of each column in the matrix: \n";
    for(short j=0;j<cols;j++)
    {
       cout << "col" << j+1 << " sum = " << colsum(arr,rows,j) << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fillmatrixwithrandomnumbers(arr,3,3);
    cout << "The following is the generated matrix: \n";
    printmatrix(arr,3,3);
    printcolumnsums(arr,3,3);
    
    return 0;

}