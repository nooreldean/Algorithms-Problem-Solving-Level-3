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
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fillmatrixwithrandomnumbers(arr,3,3);
    cout<< "\n The following is a 3x3 random matrix: \n";
    printmatrix(arr,3,3);
   return 0;

    

}