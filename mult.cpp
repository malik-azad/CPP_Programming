#include<iostream>
using namespace std;


int main(){

    int a[3][3]={
                   {1,2,3},
                   {2,3,1},
                   {1,3,2}
    };

     int b[3][3]={
                   {1,2,3},
                   {2,3,1},
                   {1,3,2}
    };

    int result[3][3];
  int  sum =0;

    for(int i =0; i<3; i++){
        for(int j=0;j<3;j++){
          for(int k=0;k<3;k++){
            sum = sum + a[i][k] * b[k][j];
          }
          result[i][j] = sum;
        }
    }

    
for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
     cout<<result[i][j]<<" ";       
        }

        return 0;
}

}