class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>map;
        for(auto it:s){
            map[it]++;
        }
        for(int i=0; i<s.length(); i++){
            if(map[s[i]] == 1) return i;
        }
        return -1;
    }
};