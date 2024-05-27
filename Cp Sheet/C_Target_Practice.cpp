#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        char mat[10][10];
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> mat[i][j];
            }
        }
        int cnt = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(mat[i][j] == 'X') {
                    if((i == 0 || i == 9 ||j == 0 || j == 9)) {
                        cnt++;
                    }
                    else if(i == 1 || i == 8 || j == 1 || j == 8) {
                        cnt += 2;
                    }
                    else if(i == 2 || i == 7 ||j == 2 || j == 7) {
                        cnt += 3;
                    }
                    else if(i == 3 || i == 6 || j == 3 || j == 6){
                        cnt += 4;
                    }
                    else {
                        cnt += 5;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
