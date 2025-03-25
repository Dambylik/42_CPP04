/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 15:26:28 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ): type_("AAnimal") {
	
	std::cout << RED << "AAnimal default constructor called" << RESET << std::endl;
	return;
}

AAnimal::AAnimal(std::string name) : type_(name) {

	std::cout << GREEN << "AAnimal string constructor called" << RESET << std::endl;
	return;
}

AAnimal::AAnimal( AAnimal const & src)  {
	
	std::cout << GREEN << "AAnimal copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
}

AAnimal::~AAnimal() {
	
		std::cout << RED << "AAnimal destructor called" << RESET << std::endl;
		return;
}

AAnimal & AAnimal::operator=( AAnimal const & rhs ) {
	
	std::cout << GREEN << "AAnimal Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type_ = rhs.type_;
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, AAnimal const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void    AAnimal::makeSound() const {
	
	 std::cout << GREEN << "AAnimal makes a sound WHAAAAAAT" << RESET << std::endl;
}

// ---------------------------------------------------------- Setters & Getters

std::string AAnimal::getType() const { return this->type_; }