class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<int,string>>>mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
        
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)!=mp.end()){
            const auto& v = mp[key];
            int low=0;
            int high = v.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(v[mid].first==timestamp){
                    return v[mid].second;
                }else if(v[mid].first>timestamp){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
            if(high!=-1){
                return v[high].second;
            }else{
                return "";
            }
        }
        return "";
        
    }
};

