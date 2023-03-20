#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ary[100001];
int check[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");
    ofstream cout; cout.open("output.txt");

    string result = "";
    int cur= 0, Max = 0; int N; bool flag = true;
    cin >> N;
    for(int i=0; i<N; i++){
	int temp;
	cin >> temp;
	if(Max < temp){
	    for(int k=Max+1; k<=temp; k++){
		result += "+";
	    }
	    cur = temp;
	    cur--;
	    result += "-";
	    Max = temp; 
	}
	else{
	    if(temp == cur){
		result += "-";
		cur--;
	    }
	    else{
		cout << "NO" << "\n";
		return 0;
	    }
	}
    }    
    for(int i=0; i<result.length(); i++) cout << result[i] << "\n";
    return 0;
}
