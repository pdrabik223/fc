#include "node.h"

static my::node::RED = true;
static my::node::BLACK = false;


template<class T>
my::node<T>::node()
{

	colour = my::node::BLACK;
	this->value = value;
	parent = nullptr;
	left = nullptr;
	right = nullptr;

}
//its ok
template<class T>


my::node<T>::node(T value)
{

	colour = my::node::BLACK;
	this->value = value;
	parent = nullptr;
	left = nullptr;
	right = nullptr;


}

template<class T>
my::node<T>::~node()
{
	delete[] value;
	//black = nullptr;    ??? 
	// red = nullptr;
}


template<class T>
void my::node<T>::append(T value)
{
	if (value < this->value) {
		if (right == nullptr)
			right = new node<T>(value);
		else right->append(value);
	}
	else if (value > this->value) {
		if (left == nullptr)
			left = new node<T>(value);
		else left->append(value);
	}

	return;
}


