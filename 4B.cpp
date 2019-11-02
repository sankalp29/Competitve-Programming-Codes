#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, sumT, sum = 0, sum2 = 0;
    cin >> n >> sumT;
    vector<int> min(n);
    vector<int> max(n);
    for(int i = 0; i < n; i++) {
        cin >> min[i];
        sum += min[i];
        cin >> max[i];
        sum2 += max[i];
    }
    if(sum > sumT || sumT > sum2) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    sumT -= sum;
    for(int i = 0; i < n; i++) {
        if(sumT > 0) {
        if(sumT >= max[i]-min[i]) {
            sumT -= (max[i]-min[i]);
            min[i] = max[i];
        }
        else {
            min[i] += sumT;
            sumT = 0;
        }
        }
        cout << min[i] << " ";
    }
    return 0;
}