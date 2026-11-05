/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 23:02:09 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/11/05 00:15:56 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

void	function_int(const int &x)
{
	std::cout << x << " ";
}

void	function_string(std::string &str)
{
	str.insert(0, "*** ");
	str.insert(str.length(), " ***");
}

int	main(void)
{
	/* NON-CONST ARRAY */
	{
		std::cout << "::: NON-CONST INT ARRAY :::" << std::endl;
		size_t	size = 5;
		int arr[size];
		for (size_t i = 0; i < size; i++)
			arr[i] = i;
		::iter(arr, size, function_int);
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "::: NON-CONST ARRAY ARRAY :::" << std::endl;
		std::string arr[4] = {"C", "Java", "C++", "Kotlin"};
		for (int i = 0; i < 4; i++)
			std::cout << "String -> " << arr[i] << std::endl;
		::iter(arr, 4, function_string);		
		for (int i = 0; i < 4; i++)
			std::cout << "String -> " << arr[i] << std::endl;
	}
	/* CONST ARRAY */
	{
		std::cout << std::endl;
		std::cout << "::: CONST ARRAY :::" << std::endl;
		const int arr[7] = {0, 1, 2, 3, 4, 5, 6};
		::iter(arr, 7, function_int);
		std::cout << std::endl;
	}
	return (0);
}
