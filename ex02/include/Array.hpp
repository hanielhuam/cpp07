/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 23:15:44 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/11/05 23:16:04 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;
	public:
		Array(void);
		Array(size_t size);
		Array(const Array<T> &array);
		~Array(void);

		Array<T>	&operator = (const Array<T> &array);
		const T	&operator [] (size_t index) const;
		T	&operator [] (size_t index);

		size_t	size(void) const;

		class OutOfRange : public std::exception
		{
			const char	*what() const throw();
		};
};

#include "Array.tpp"