vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        int i=0,j=0;
        string temp="";
        vector<string>ans;
        map<string,int>set;
        while(j < n){
            //cout<<temp<<" ";
            temp += s[j];
            if(j-i+1 < 10) j++;
            else if(j-i+1 == 10){
                //calcula
                set[temp]++;
                j++;
            } 
            else {
                //pop Elemnts from front
                if(j-i+1 > 10){
                    temp.erase(temp.begin()+0);
                    i++;
                }
                set[temp]++;
                j++;
            }
        }
        //for(auto it:set) cout<<it<<" ";
        for(auto it:set){
            if(it.second > 1) ans.push_back(it.first);
        }
        return ans;
    }