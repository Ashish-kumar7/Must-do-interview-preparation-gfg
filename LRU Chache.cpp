class LRUCache {
        
    list<pair<int,int>>cache;
    unordered_map<int,list<pair<int,int>> :: iterator >mymap;
    
    void refreshposition(int key,int value){
        cache.erase(mymap[key]);
        cache.push_front(make_pair(key,value));
        mymap[key]=cache.begin();
    }
    
    int capacity;
    
public:
    LRUCache(int capacity) {
         this->capacity = capacity;
    }
    
    int get(int key) {
           if(mymap.find(key)!=mymap.end())
        {
            refreshposition(key,(*mymap[key]).second);
            return (*mymap[key]).second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mymap.find(key)!=mymap.end()){
            refreshposition(key,value);
        }
        else{
            cache.push_front(make_pair(key,value));
            mymap[key] = cache.begin();
            if(mymap.size()>capacity){
                mymap.erase(cache.back().first);
                cache.pop_back();
            }
        }
    }
};