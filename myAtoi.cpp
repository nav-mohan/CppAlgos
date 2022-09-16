#include <iostream>
#include <string>
#include <cctype>

int myAtoi(std::string s){
    int i = 0;
    long long int answer = 0;
    bool neg = false;
    bool pos = true;

    if(isalpha(s[0]))
        return 0;

    while(i<s.size()){
        // Initial whitespace + -
        if(s[i]== ' ')
            i++;
        
        if(s[i]=='-'){
            i++;
            neg = true;
            pos = false;
        }

        if(s[i]=='+'){
            i++;
            pos = true;
        }
        
        // Now we have digits
        while(s[i]>='0' && s[i]<='9'){
            answer *= 10;
            answer += s[i]-'0';
            i++;
        }
        if (answer > INT_MAX)
            answer = INT_MAX;
        if(answer < INT_MIN)
            answer = INT_MIN;
        i++;
    }
    if(neg){
        answer *= (-1);
    }
    return answer;
}

int main(){
    std::string s = "8237 with words";
    printf("%d\n",myAtoi(s));
    printf("%d\n",INT_MAX);
    printf("%d\n",INT_MIN);
    return 0;
}