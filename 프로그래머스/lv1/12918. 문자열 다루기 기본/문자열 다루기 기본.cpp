#include <string>
#include <vector>

using namespace std;

bool isNumber(const string& s)
{
    for (char const &ch : s) {
        if (isdigit(ch) == 0)
            return false;
    }
    return true;
}

bool solution(string s) {
    int sLength = s.length();
    
    if((sLength == 4 || sLength == 6) && isNumber(s))
        return true;
        
    return false;
}