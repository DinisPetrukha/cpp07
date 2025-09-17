#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <string>

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T	*_data;

	public:
		Array();
		Array(const unsigned int n);
		Array(const Array &other);
		Array& operator=(const Array& other);
		~Array();


		T& operator[](const unsigned int index);
		const T& operator[](const unsigned int index) const;

		unsigned int size() const;
};

#include "Array.tpp"

#endif
