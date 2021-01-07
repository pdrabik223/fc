#pragma once



#ifndef MAP_H
#define MAP_H
namespace my {
	template <class key,class T>
	class map
	{

	public:
		map<key, T>();
		map<key, T>(const map& other);
		~map<key, T>();
		T& operator[](key);
	private:
		unsigned hash(key);

	protected:
		T* storage;
		unsigned size;

	};

	

	
}
#endif // !MAP_H
