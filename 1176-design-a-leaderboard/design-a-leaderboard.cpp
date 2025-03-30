class Leaderboard {
public:
    unordered_map<int,int> players;
    Leaderboard() {
        
    }
    
    void addScore(int playerId, int score) {
        players[playerId]+= score;
    }
    int top(int K) {
        priority_queue<int>scores;
        for(auto pr :players){
        scores.push(pr.second);
        }
        int sum =0;
        while(K-- && !scores.empty()){
            sum+=scores.top();
            scores.pop();
        }
        return sum;
    }
    
    void reset(int playerId) {
        players.erase(playerId);
        
    }
};

/**
 * Your Leaderboard object will be instantiated and called as such:
 * Leaderboard* obj = new Leaderboard();
 * obj->addScore(playerId,score);
 * int param_2 = obj->top(K);
 * obj->reset(playerId);
 */