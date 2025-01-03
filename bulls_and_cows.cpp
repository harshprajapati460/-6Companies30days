class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length(),m = guess.length();
        unordered_map<char,int>map;
        int bulls=0,cows=0;
        string ng = "";
        for(int i=0; i<n; i++){
            if(secret[i] == guess[i]) bulls++;
            else {
                ng += guess[i];
                map[secret[i]]++;
            }
    }
    for(int i=0; i<ng.length(); i++){
        if(map.find(ng[i]) != map.end()){
            cows++;
            map[ng[i]]--;
            if(map[ng[i]] == 0){
                map.erase(ng[i]);
            }
        }
    }
    string ans = "";
    ans += to_string(bulls);
    ans += 'A';
    ans += to_string(cows);
    ans += 'B';
    return ans;
    }
};