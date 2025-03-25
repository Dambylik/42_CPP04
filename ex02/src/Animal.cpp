/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/27 15:26:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	
	std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
	this->type_ = "Animal"; 
	return;
}

Animal::Animal( std::string name ) {

	std::cout << GREEN << "Animal string constructor called" << RESET << std::endl;
	this->type_ = name;
	return;
}

Animal::Animal( Animal const & src)  {
	
	std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
}

Animal::~Animal() {
	
		std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
		return;
}

Animal & Animal::operator=( Animal const & rhs ) {
	
	std::cout << GREEN << "Animal Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type_ = rhs.type_;
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, Animal const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void    Animal::makeSound() const {
	
	 std::cout << GREEN << "Animal makes a sound RRRRRRRR" << RESET << std::endl;
}

// ---------------------------------------------------------- Setters & Getters

std::string Animal::getType() const { return this->type_; }