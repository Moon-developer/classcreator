/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:59:54 by mafernan          #+#    #+#             */
/*   Updated: 2018/06/11 14:59:54 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test1.hpp"

Test1::Test1() {}

Test1::Test1(Test1 const & src) {
	*this = src;	
}

Test1::~Test1() {}

Test1 Test1::operator=(Test1 const & src) {}

