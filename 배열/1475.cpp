#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int sets = 1;
    int ary[10];
    fill(ary, ary+10, 0);
    cin >> n;
    for(; n != 0;){
	ary[n%10]++;
	n /= 10;
    }
    if((ary[6]+ary[9])%2 == 0) sets = (ary[6]+ary[9])/2;
    else sets = (ary[6]+ary[9])/2 + 1;
    for(int i=0; i<10; i++){
	if(i==6 || i==9) continue;
	sets = sets > ary[i] ? sets : ary[i];
    }
    cout << sets << "\n";
    return 0;

}
