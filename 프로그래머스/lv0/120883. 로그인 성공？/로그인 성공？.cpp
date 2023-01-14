#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    unordered_map<string,string> um;
    
    for(const auto & v : db)
    {
        um[v[0]] = v[1];
    }

    string ret;

    if(um.count(id_pw[0]))
    {
        if(um.at(id_pw[0]) == id_pw[1])
        {
            ret = "login";
        }
        else
        {
            ret = "wrong pw";
        }
    }
    else
    {
        ret = "fail";
    }
    return ret;
}