class LRUCache {
    int capacity;
    list<pair<int,int>> cache;
    unordered_map<int, list<pair<int,int>>::iterator> map;
public:
    LRUCache(int capacity) : capacity(capacity) {}
    
    int get(int key) {
        if(map.find(key) != map.end()){
            cache.splice(cache.begin(), cache, map[key]);
            return map[key]->second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            map[key]->second = value;
            cache.splice(cache.begin(), cache, map[key]);
            return;
        }
        else{
            if(capacity == map.size()){
                map.erase(cache.back().first);
                cache.pop_back();
            }
            
            cache.emplace_front(key, value);
            map[key] = cache.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */