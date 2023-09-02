#ifndef TABLE_MYUTILS_H
#define TABLE_MYUTILS_H

namespace MyUtils {
    template<typename KeyType, typename ValueType>
    struct KeyValue{
        KeyType key;
        ValueType value;

        KeyValue();
        KeyValue(const KeyType&, const ValueType&);
        bool operator==(const KeyValue&) const;
        bool operator!=(const KeyValue&) const;
        bool operator<(const KeyValue&) const;
    };

    bool isPrime(int);
    int nextPrime(int);

}

#endif //TABLE_MYUTILS_H
