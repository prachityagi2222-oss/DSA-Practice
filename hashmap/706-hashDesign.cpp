/*IMplementing basic methods of hashmap
time complexity O(n)
space complxity O(n)*/
#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
public:
    vector<pair<int, int>> map;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        //check if value exsists
        for(auto &element: map){
            if(element.first == key){
                element.second = value;
                return;
            }
        }
        //else add that
        map.push_back({key, value});
    }
    
    int get(int key) {
        for(pair<int, int> element: map){
            if (element.first == key){
                return element.second;
            }
        }
        return -1;
    }
    
    void remove(int key) { 
        for (auto it = map.begin(); it != map.end(); ++it) { 
            if (it->first == key) { 
                map.erase(it); // erase the pair 
                return; 
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */