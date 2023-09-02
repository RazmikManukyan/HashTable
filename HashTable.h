#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include "Vector/Vector.h"
#include "forward_list/FList.h"
#include "MyUtils.h"


class HashTable {
private:
    Vector<FList<MyUtils::KeyValue<int, int>>> map;
    int tableSize;

    int hashFunction(int);
public:
    HashTable(int);

    void insert(int, int);
    int get(int);
    void remove(int);

};

#endif //HASHTABLE_H
