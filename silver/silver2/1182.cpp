#include <iostream>
using namespace std;

int n,s;
int arr[22];
int cnt = 0;

void func(int cur, int tot) {
    if(cur==n) {
        if(tot == s) {
            cnt++;
        }
        return;
    }
    func(cur+1, tot); //선택 안함
    func(cur+1, tot+arr[cur]); //선택
    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    func(0,0);
    if(s==0) {
        cnt--;
    }
    cout <<  cnt;

}