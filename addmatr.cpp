#include <iostream>
using namespace std;

int main()
{
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{3, 3, 3}, {4, 4, 4}, {6, 6, 6}};
    int result[3][3];
    int i, j, k, mul=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++){
            for (int k=0; k<3;k++);
            {
              mul = mul + mat1[i][k]*mat2[k][j];
              result[i][k] = mul;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << result[i][j] << "  ";
        }
        cout <<endl;
    }
    return 0;
}