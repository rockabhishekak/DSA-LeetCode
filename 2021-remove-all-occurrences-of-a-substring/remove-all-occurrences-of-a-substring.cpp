class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int plen = part.size();
        while(s.find(part)!=string::npos){
            s.erase(s.find(part),plen);
        }
        return s;
    }
};