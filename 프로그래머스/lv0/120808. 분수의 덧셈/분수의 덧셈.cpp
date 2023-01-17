#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) 
{ 
	int mod = a % b;
    
	while (mod > 0)
	{
		a = b;
		b = mod;
		mod = a % b;
	}
	
    return b;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int numer = (numer1 * denom2) + (numer2 * denom1);
    int denom = denom1 * denom2;
    
    int gcdVal = gcd(numer, denom);
    
    if(gcdVal != 1)
    {
        denom /= gcdVal;
        numer /= gcdVal;
    }
    
    answer.push_back(numer);
    answer.push_back(denom);
    
    return answer;
}