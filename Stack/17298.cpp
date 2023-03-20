#include <iostream>
#include <fstream>
#include <stack>
#include <algorithm>

using namespace std;

int ary[1000000];
int result[1000000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");
    ofstream cout; cout.open("output.txt");

    stack <int> st;
    fill(result, result+1000000, -1);
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
	cin >> ary[i];
	while(!st.empty()){
	    if(ary[st.top()] < ary[i]){
		result[st.top()] = ary[i];
		st.pop();
	    }
	    else break;
	}
	st.push(i);
    }
    for(int i=0; i<N; i++) cout << result[i] << " ";
    return 0;
}
