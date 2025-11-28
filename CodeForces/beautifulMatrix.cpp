#include<bits/stdc++.h>
using namespace std;

int main(){
    int rowshift=0, colshift=0;
    int a11,a12,a13,a14,a15,b11,b12,b13,b14,b15,c11,c12,c13,c14,c15,d11,d12,d13,d14,d15,e11,e12,e13,e14,e15;
    cin>>a11>>a12>>a13>>a14>>a15;
    cin>>b11>>b12>>b13>>b14>>b15;
    cin>>c11>>c12>>c13>>c14>>c15;
    cin>>d11>>d12>>d13>>d14>>d15;
    cin>>e11>>e12>>e13>>e14>>e15;

    int matrix[25] =  {a11,a12,a13,a14,a15,b11,b12,b13,b14,b15,c11,c12,c13,c14,c15,d11,d12,d13,d14,d15,e11,e12,e13,e14,e15};
    int cnt = 0;
    for(int i = 0; i<25;i++){
        if (matrix[i] == 1){
            break;
        }
        cnt++;
    }

    if(cnt <= 4 || cnt >= 20){
        rowshift = 2;
    }
    else if (cnt <=9 || cnt >= 15)
    {
        rowshift = 1;
    }

    
    if(cnt % 5 == 0 || cnt % 5 == 4){
        colshift = 2;
    }

    else if (cnt % 5 == 1 || cnt % 5 == 3)
    {
        colshift = 1;
    }
    
    cout<< rowshift+colshift;
    return 0;
}