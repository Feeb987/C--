#include<bits/stdc++.h>
using namespace std;

int main(){
    int case_num = 1, N;
    while (cin >> N) {
        vector<int> nums(N);
        for (int i = 0; i < N; ++i) cin >> nums[i];

        long long int max_product = LLONG_MIN;
        for (int i = 0; i < N; ++i) {
            long long int prod = 1;
            for (int j = i; j < N; ++j) {
                prod *= nums[j];
                max_product = max(max_product, prod);
            }
        }
        if (max_product <= 0) max_product = 0;
        cout << "Case #" << case_num++ << ": The maximum product is " << max_product << ".\n\n";
    }
    return 0;
}