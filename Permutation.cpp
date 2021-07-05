#include <iostream>

using namespace std;

void perm(int lis[], int i, int n){
    if(i==n){   //終止條件
        for(int j = 0; j<=n; j++){
            cout << lis[j]; // 列印lis所有內容
        }
        cout << endl;
    }
    else    //i<n時直至i->n
    {
        // n個data輪流當head，其後接(n-1)個data之permutation
        for(int j = i; j<=n; j++){
            swap(lis[i], lis[j]);   // lis[j]當head
            perm(lis, i+1, n);      // 接lis[i+1]~lis[n]之排列組合
            swap(lis[i], lis[j]);   // 還原成原本之list
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
