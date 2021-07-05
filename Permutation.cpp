#include <iostream>

using namespace std;

void perm(int lis[], int i, int n){
    if(i==n){
        for(int j = 0; j<=n; j++){
            cout << lis[j];
        }
        cout << endl;
    }
    else{
        for(int j = i; j<=n; j++){
            swap(lis[i], lis[j]);
            perm(lis, i+1, n);
            swap(lis[i], lis[j]);

        }
    }
}

int main()
{
    int num = 5;
    int lis[num] = {1, 2, 3, 4, 5};
    perm(lis , 0, num-1);
    return 0;
}
