/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/27 12:57:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal() {
	
	std::cout << MAGENTA << "WrongCat default constructor called" << RESET << std::endl;
    this->type_ = "WrongCat"; 
	return;
}

WrongCat::WrongCat(std::string const name) : WrongAnimal() {

	std::cout << MAGENTA << "WrongCat string constructor called" << RESET << std::endl;
	this->type_ = name;
	return;
}

WrongCat::WrongCat( WrongCat const & src) : WrongAnimal( src ) {
    
	std::cout << MAGENTA << "WrongCat copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
}

WrongCat::~WrongCat() {
	
		std::cout << MAGENTA << "WrongCat destructor called" << RESET << std::endl;
		return;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
	
	std::cout << MAGENTA << "WrongCat Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type_ = rhs.type_;	
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, WrongCat const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void    WrongCat::makeSound() const {
	
	 std::cout << MAGENTA << "WrongCat makes a sound PLOUPLOU" << RESET << std::endl;
}