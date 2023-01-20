#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int indexLength = num_list.size() / n;
    int index = 0;
    
    for(int i = 0; i < indexLength; i++)
    {
        answer.push_back(vector<int>());
        for(int j = 0; j < n; j++)
        {
            answer[i].push_back(num_list[index]);
            index++;
        }
    }

    return answer;
}