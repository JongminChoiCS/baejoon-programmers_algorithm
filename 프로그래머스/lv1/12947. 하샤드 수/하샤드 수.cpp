#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int nTemp = x;
    int nSum = 0;
    
    while(nTemp > 0)
    {
        nSum += nTemp % 10;
        nTemp/= 10;
    }

    return x % nSum == 0;
}