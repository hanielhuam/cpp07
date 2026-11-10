/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 23:16:16 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/11/05 23:16:43 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(size_t size) : _array(new T[size]), _size(size) {}

template <typename T>
Array<T>::Array(const Array &array)
{
	this->_array = new T[array.size()];
	for (size_t i = 0; i < array.size(); i++)
		this->_array[i] = array[i];
	this->_size = array.size();
}

template <typename T>
Array<T>::~Array(void) {delete[] this->_array;}

template <typename T>
Array<T>	&Array<T>::operator = (const Array &array)
{
	if (this == &array)
		return (*this);
	delete[] this->_array;
	this->_array = new T[array.size()];
	for (size_t i = 0; i < array.size(); i++)
		this->_array[i] = array[i];
	this->_size = array.size();
	return (*this);
}

template <typename T>
const T	&Array<T>::operator [] (size_t index) const
{
	if (index >= this->_size)
		throw OutOfRange();
	else
		return (this->_array[index]);
}

template <typename T>
T	&Array<T>::operator [] (size_t index)
{
	if (index >= this->_size)
		throw OutOfRange();
	else
		return (this->_array[index]);
}

template <typename T>
size_t	Array<T>::size(void) const {return (this->_size);}

template <typename T>
const char	*Array<T>::OutOfRange::what() const throw() {return ("[Array] Out of range");}