/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:31:59 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 15:24:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	
	std::cout << WHITE << "WrongAnimal default constructor called" << RESET << std::endl;
	this->type_ = "WrongAnimal"; 
	return;
}

WrongAnimal::WrongAnimal( std::string name ) {

	std::cout << WHITE << "WrongAnimal string constructor called" << RESET << std::endl;
	this->type_ = name;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)  {
	
	std::cout << WHITE << "WrongAnimal copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
}

WrongAnimal::~WrongAnimal() {
	
		std::cout << WHITE << "WrongAnimal destructor called" << RESET << std::endl;
		return;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
	
	std::cout << WHITE << "WrongAnimal Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type_ = rhs.type_;
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, WrongAnimal const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void    WrongAnimal::makeSound() const {
	
	 std::cout << WHITE << "WrongAnimal makes a sound BUZZZZZZ" << RESET << std::endl;
}

// ---------------------------------------------------------- Setters & Getters

std::string WrongAnimal::getType() const { return this->type_; }