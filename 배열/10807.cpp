#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");

    int n, x; int ary[100]; int cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
	cin >> ary[i];
    }
    cin >> x;
    for(int i=0; i<n; i++){
	if(x == ary[i]) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
