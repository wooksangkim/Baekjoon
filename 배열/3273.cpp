#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void Solution(int ary[], int Size, int target){
    int left = 0; int right = Size-1;
    int cnt = 0;
    while(left <  right){
	if(ary[left]+ary[right] <  target){
	    left++;
	}
	else if(ary[left]+ary[right] > target){
	    right--;
	}
	else{
	    cnt++;
	    left++; right--;
	}

    }
    cout << cnt << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");

    int n, x; int ary[100010];
    cin >> n;
    for(int i=0; i<n; i++){
	cin >> ary[i];
    }
    cin >> x;
    sort(ary, ary+n);
    Solution(ary, n, x);
    return 0;
}
