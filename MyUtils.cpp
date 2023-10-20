#include "MyUtils.h"
#include <iostream>
#include <tuple>

namespace MyUtils {

    template<typename KeyType, typename ValueType>
    KeyValue<KeyType, ValueType>::KeyValue(const KeyType &k, const ValueType &v)
        :key(k), value(v)
    {
    }

    template<typename KeyType, typename ValueType>
    bool KeyValue<KeyType, ValueType>::operator==(const KeyValue<KeyType, ValueType> &oth) const {
        return key == oth.key && value == oth.value;
    }

    template<typename KeyType, typename ValueType>
    bool KeyValue<KeyType, ValueType>::operator!=(const KeyValue<KeyType, ValueType> &oth) const {
        return !(*this == oth);
    }

    template<typename KeyType, typename ValueType>
    bool KeyValue<KeyType, ValueType>::operator<(const KeyValue<KeyType, ValueType> &oth) const {
        return std::tie(key, value) < std::tie(oth.key, oth.value);
    }

    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    int nextPrime(int num) {
        while(!isPrime(num)) {
            num++;
        }
        return num;
    }
}
