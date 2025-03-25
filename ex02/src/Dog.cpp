/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/27 17:15:59 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): AAnimal() {
	
	std::cout << YELLOW << "Dog default constructor called" << RESET << std::endl;
    this->type_ = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog(std::string const name) : AAnimal() {

	std::cout << YELLOW << "Dog string constructor called" << RESET << std::endl;
	this->type_ = name;
	this->_brain = new Brain();
	return;
}

Dog::Dog( Dog const & src) : AAnimal( src ) {
    
	std::cout << YELLOW << "Dog copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog() {
	
		std::cout << YELLOW << "Dog destructor called" << RESET << std::endl;
		delete this->_brain;
		return;
}

Dog & Dog::operator=( Dog const & rhs ) {
	
	std::cout << YELLOW << "Dog Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
		delete this->_brain;
		this->_brain = new Brain( *rhs._brain );
		for (int i = 0; i < 100; i++)
      	this->_brain->getIdea(i) = rhs._brain->getIdea(i);
	}
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

// ---------------------------------------------------------- Setters & Getters

Brain *Dog::getBrain() { return _brain; }