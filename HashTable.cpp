#include "HashTable.h"

int HashTable::hashFunction(int key) {
    int hash = 0;
    if(key >= 0) {
        hash = key;
    } else {
        hash = -key;
    }

    return hash % tableSize;
}

HashTable::HashTable(int size)
    :tableSize(MyUtils::nextPrime(size)), map(tableSize)
{
}

void HashTable::insert(int key, int value) {
    int index = hashFunction(key);
    for(auto& kv : map[index]) {
        if(kv.key == key) {
            kv.value = value;
            return;
        }
    }
    MyUtils::KeyValue<int, int> kv;
    kv.key = key;
    kv.value = value;
    map[index].push_back(kv);
}

int HashTable::get(int key) {
    int index = hashFunction(key);

    for(auto& kv : map[index]) {
        if(kv.key == key) {
            return kv.value;
        }
    }
    return -1;
}

void HashTable::remove(int key) {
    int index = hashFunction(key);
    auto& bucket = map[index];

    for(auto it = bucket.begin(); it != bucket.end(); ++it) {
        if(it->key == key) {
            bucket.erase(it);
            return;
        }
    }
}






