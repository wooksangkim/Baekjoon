#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int ary[900000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");
    ofstream cout; cout.open("output.txt");

    int N, Height;
    stack <pair <int , unsigned long long > > st;
    cin >> N;
    for(int i=0; i<N; i++){
	cin >> ary[i];
    }
    unsigned long long result = 0; unsigned long long cnt = 0;
    for(int i=N-1; i>=0; i--){
	cnt = 0;
	while(!st.empty()){
	    if(st.top().first >= ary[i]){
		break;
	    }
	    else{
		cnt += st.top().second + 1;
		st.pop();
	    }
	}
	st.push(make_pair(ary[i], cnt));
	result += cnt;
    }
    cout << result;
    return 0;
}
