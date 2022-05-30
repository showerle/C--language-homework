//  哈希表
//  Created by 李钰潇 on 2021/5/31.
//  第四周作业

#include <iostream>
#include <vector>
using namespace std;

// 哈希表每个空间给个标记
// EMPTY此位置空， EXIST此位置已经有元素
enum State
{
    EMPTY,
    EXIST
};

template<class K,class V>
struct HashNode
{
    pair<K, V> _kv;
    State _state;  //元素状态
};


template<class K, class V>
class HashTable
{
    typedef HashNode<K, V> HashNode;
public:
    HashTable(size_t N = 13)  //初始化哈希表
    {
        _table.resize(N);
        for (size_t i = 0; i < _table.size(); ++i)
        {
            _table[i]._state = EMPTY;
        }
        _size = 0;
    }
    
    bool Insert(const pair<K, V>& kv)
    {
        size_t index = kv.first % _table.size();
        while (_table[index]._state == EXIST)
        {
            if (_table[index]._kv.first == kv.first)
            {
                return true;
            }

            //线性探测解决哈希冲突问题
            ++index;
            if (index == _table.size())
                index = 0;
        }
        //若是该位置没值，直接插入
        _table[index]._kv = kv;
        _table[index]._state = EXIST;
        _size++;
        return true;
    }
    
private:
    //HashNode* _table;
    //size_t _size;//有效数据个数
    //size_t _capacity;//哈希表的空间大小

    vector<HashNode> _table;
    size_t _size;//哈希表中有效数据的个数
};


void TestHashTable()
{
    HashTable<int, int> ht;
    int a[] = { 12,23,45,57,20,3,78,31,15,36 };
    for (auto& e : a)
    {
        ht.Insert(make_pair(e, e));
    }
}

int main()
{
    void TestHashTable();

}
