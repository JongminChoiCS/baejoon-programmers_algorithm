#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int compareValue = 1;
    
    while(n >= compareValue)
    {
        answer++;
        compareValue *= answer;
    }
    return --answer;
}