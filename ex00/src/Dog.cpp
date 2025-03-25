/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/30 11:54:23 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal() {
	
	std::cout << YELLOW << "Dog default constructor called" << RESET << std::endl;
    this->type_ = "Dog"; 
	return;
}

Dog::Dog( std::string const name ): Animal() {

	std::cout << YELLOW << "Dog string constructor called" << RESET << std::endl;
	this->type_ = name;
	return;
}

Dog::Dog( Dog const & src):  Animal( src ) {
    
	std::cout << YELLOW << "Dog copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
}

Dog::~Dog() {
	
		std::cout << YELLOW << "Dog destructor called" << RESET << std::endl;
		return;
}

Dog & Dog::operator=( Dog const & rhs ) {
	
	std::cout << YELLOW << "Dog Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type_ = rhs.type_;
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, Dog const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void    Dog::makeSound() const {
	
	 std::cout << YELLOW << "Dog makes a sound WOOOOF" << RESET << std::endl;
}
