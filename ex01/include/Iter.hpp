/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 23:04:14 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/11/04 23:04:35 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T, typename F>
void	iter(T *array, size_t size, void (*f)(F))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
};