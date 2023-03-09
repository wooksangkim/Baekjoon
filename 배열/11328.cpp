#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void Solution(char A[], char B[]){
    int len = 0; int flag = 1;
    for(int i=0; A[i] != '\0'; i++) len++;
    
    sort(A, A+len);
    sort(B, B+len);
    for(int i=0; i<len; i++){
	if(A[i] != B[i]){
	    flag = 0;
	}
    }
    if(flag) cout << "Possible" << "\n";
    else cout << "Impossible" << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");

    int n; char A[1001]; char B[1001];
    cin >> n;
    for(int i=0; i<n; i++){
	cin >> A >> B;
	Solution(A, B);
    }
    return 0;
}
