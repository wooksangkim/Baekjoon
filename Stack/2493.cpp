#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

long long ary[600000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");
    ofstream cout; cout.open("output.txt");

    stack <pair <int, int> > st;
    int N, Height;  
    cin >> N;
    for(int i=0; i<N; i++){
	cin >> Height;
	while(!st.empty()){
	    if(st.top().first > Height){
		cout << st.top().second << " ";
		st.push(make_pair(Height, i+1));
		break;
	    }
	    else{
		st.pop();
	    }
	}
	if(st.empty())cout << 0 << " ";
	st.push(make_pair(Height, i+1));
    } 
    return 0;
}
