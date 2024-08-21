#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Nosame{
public:
    int LongestLength(std::string s){
        int len=s.size() ;
        int longestlen=0 ;
        int tem = 0 ;
        std::unordered_map <char,int> harshMap ;
        for (int i = 0 ;i < len;i++){
            if (harshMap.find(s[i])!=harshMap.end()){
                harshMap.erase(s[i]);
                tem = 0 ;
            }
            else{
                harshMap[s[i]]++ ;
                tem++ ;
            }
            if (tem > longestlen){
                longestlen = tem ;
            }
        }
        return longestlen;
    }
};
int main() {
    Nosame result;
    string s = "pwwkew";
    cout<<result.LongestLength(s)<< endl;
    return 0;
}


