#include <iostream>
#include <fstream>

using namespace std;

int ary[200000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ofstream cout; cout.open("output.txt");

    int cur = -1; int n;
    cin >> n;
    for(int i=0; i<n; i++){
	int temp;
	cin >> temp;
	if(!temp){
	    if(cur > -1) cur--;
	}
	else{
	    cur++;
	    ary[cur] = temp;
	}
    }
    int Sum = 0;
    for(int i=0; i<cur+1; i++){
	Sum += ary[i];
    }
    cout << Sum << "\n";

    return 0;
}
