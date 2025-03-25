/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/27 17:15:53 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): AAnimal() {
	
	std::cout << BLUE << "Cat default constructor called" << RESET << std::endl;
    this->type_ = "Cat";
	this->_brain = new Brain();
	return;
}

Cat::Cat(std::string const name) : AAnimal() {

	std::cout << BLUE << "Cat string constructor called" << RESET << std::endl;
	this->type_ = name;
	this->_brain = new Brain();
	return;
}

Cat::Cat( Cat const & src) : AAnimal( src ) {
    
	std::cout << BLUE << "Cat copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat() {
	
		std::cout << BLUE << "Cat destructor called" << RESET << std::endl;
		delete this->_brain;
		return;
}

Cat & Cat::operator=( Cat const & rhs ) {
	
	std::cout << BLUE << "Cat Assignment operator called" << RESET << std::endl;
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

std::ostream & operator<<(std::ostream & lhs, Cat const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void    Cat::makeSound() const {
	
	 std::cout << BLUE << "Cat makes a sound MEEEEWWW" << RESET << std::endl;
}

// ---------------------------------------------------------- Setters & Getters

Brain *Cat::getBrain() { return _brain; }