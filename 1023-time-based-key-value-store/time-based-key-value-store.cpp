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
            const auto &v = mp[key];
            int left =0;
            int right = v.size()-1;
            while(left<=right){
                int mid = (left+right)/2;
                if(v[mid].first==timestamp){
                    return v[mid].second;
                }else if(v[mid].first<timestamp){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
            if(right!=-1){
                return v[right].second;
            }else{
                return"";
            }
    
        }
        return "";
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */