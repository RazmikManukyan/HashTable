#include "MyUtils.h"

namespace MyUtils {

    template<typename KeyType, typename ValueType>
    KeyValue<KeyType, ValueType>::KeyValue() = default;

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
        return *this != oth;
    }

    template<typename KeyType, typename ValueType>
    bool KeyValue<KeyType, ValueType>::operator<(const KeyValue<KeyType, ValueType> &oth) const {
        return key < oth.key;
    }

    bool isPrime(int num) {
        if(num <= 1) {
            return false;
        }
        for(int i = 2; i <= num / 2; ++i) {
            if(num % i == 0) {
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