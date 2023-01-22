#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int numbersSum = 0;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        numbersSum += numbers[i];    
    }  
    
    return (45 - numbersSum);
}