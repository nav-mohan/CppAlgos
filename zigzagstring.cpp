// https://leetcode.com/problems/zigzag-conversion/solution/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string convert(string s, int numRows){
    if (numRows==1) return s;

    int n = s.size();
    vector<string> rows(numRows);
    int curRow = 0;
    bool goingDown = false;
    string ret;

    for (int i = 0; i < n; i++){
        rows[curRow].push_back(s[i]);
        if ( curRow == 0 || curRow == numRows-1 )
            goingDown = !goingDown;
        if(goingDown){curRow+=1;}
        if(!goingDown){curRow-=1;}
        cout << goingDown << "|"<< curRow << "|" << rows[curRow] << "\n";
    }

    for (int i = 0; i < numRows; i++)
        ret+=rows[i];
    
    return ret;
}

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    string cs = convert(s,numRows);
    cout << cs << "\n";
    return 0;
}