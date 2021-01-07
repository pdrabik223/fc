#include "pair.h"


template<class K, class V>
my::pair<K, V>::pair(K key , V velue )
{
	key = key;
	value = value;
}

template<class K, class V>
my::pair<K, V>::~pair()
{
	delete[] key;
	delete[] value;
}

template<class K, class V>
void my::pair<K, V>::swap(pair<K, V>& other)
{
	my::pair<K, V> temp(other);
	other.key = key;
	other.value = value;

	key = temp.key;
	value = temp.value;


}