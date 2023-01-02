#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int xLength = (board[0] - 1) / 2;
    int yLength = (board[1] - 1) / 2;
    int xPosition = 0;
    int yPosition = 0;
    
    for(int i = 0; i < keyinput.size(); i++)
    {
        if(keyinput[i] == "up")
            yPosition++;
        else if(keyinput[i] == "down")
            yPosition--;
        else if(keyinput[i] == "left")
            xPosition--;
        else if(keyinput[i] == "right")
            xPosition++;
       
        
        if(abs(xPosition) > xLength)
        {
            if(xPosition > 0)
                xPosition--;
            else
                xPosition++;
        }
        
        if(abs(yPosition) > yLength)
        {
            if(yPosition > 0)
                yPosition--;
            else
                yPosition++;
        }
    }
    
    answer.push_back(xPosition);
    answer.push_back(yPosition);
    
    return answer;
}