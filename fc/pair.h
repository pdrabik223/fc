#pragma once
#ifndef PAIRR_H
#define PAIR_H
namespace my {
	template<class K, class V>
	class pair
	{
	public:
		pair<K, V>() = delete;
		pair<K, V>(K, V);
		pair<K, V>(const pair&);
		~pair<K, V>();

		pair<K, V>& operator=(const pair<K, V>&);
		void swap(pair<K, V>& other);
		K key() { return key; };
		V value() { return value; };

		void set_key(K key) { this->key = key; };
		void set_value(V value) { this->value = value; };


	private:
		K key;
		V value;




	};
}
#endif //PAIR_H