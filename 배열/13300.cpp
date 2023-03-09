#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ifstream cin; cin.open("input.txt");
    int n,k; int idx = 6;
    int student[13]; int room[13];
    
    fill(student, student+13, 0);
    fill(room, room+13, 0);

    cin >> n >> k;

    for(int i=0; i<n; i++){
	int s, g;
	cin >> s >> g;
	if(s == 1) {
	    g = g+idx;
	    student[g]++;
	}
	else student[g]++;
	if(student[g] > room[g]*k) room[g]++;
    }
    int result = 0;
    for(int i=0; i<13; i++) result+=room[i];
    cout << result << "\n";
    return 0;
}
