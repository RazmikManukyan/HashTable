#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include "Vector/Vector.h"
#include "forward_list/FList.h"
#include "MyUtils.h"
#include <optional>

class HashTable {
private:
    Vector<FList<MyUtils::KeyValue<int, int>>> map;
    int tableSize;

    int hashFunction(int) const;
public:
    explicit HashTable(int);

    void insert(int, int);
    int get(int);
    void remove(int);

    int GetSize() const;
};

#endif //HASHTABLE_H
