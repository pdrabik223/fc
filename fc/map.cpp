#include "map.h"
template<class key, class T>
my::map<key, T>::map()
{
	storage = new T();
	size = 0;
}

template<class key, class T>
my::map<key, T>::map(const map& other)
{
 // co z template
	// czy to bêdzie inny typ wtedy
		// tyle pytañ tak malo odpowiedzi 

}

template<class key, class T>
my::map<key, T>::~map()
{
	delete[] storage
}

template<class key, class T>
 T& my::map<key, T>::operator[](key position)
{
	 
	 if()return 

}

 template<class key, class T>
 unsigned my::map<key, T>::hash(key position)
 {
	return 

	 return 0;
 }

