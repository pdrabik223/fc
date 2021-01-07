#pragma once
#ifndef NODE_H
#define NODE_H

namespace my {
	 

template <class T>
	class node
	{
	public:
		node<T>();
		node<T>(T);

		void append(T value);

		~node<T>();


	private:

		T value;
		bool colour;

		node* parent;
		node* left;
		node* right;
	};






	

	

}


#endif // !NODE_H
