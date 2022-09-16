#include <iostream>
#include <string>

std::string convert(std::string s, int numRows){
    if (numRows==1) return s;
    std::string ret;
    int n = s.size();
    
    return "AHHAH";
}

int main(){
    std::string s = "LALALLA";
    int rows = 3;
    std::string cs = convert(s,rows);
    std::cout << cs << "\n";
    return 0;
}