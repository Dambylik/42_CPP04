/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/27 17:15:03 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal() {
	
	std::cout << BLUE << "Cat default constructor called" << RESET << std::endl;
    this->type_ = "Cat"; 
	return;
}

Cat::Cat( std::string const name ) : Animal() {

	std::cout << BLUE << "Cat string constructor called" << RESET << std::endl;
	this->type_ = name;
	return;
}

Cat::Cat( Cat const & src ) : Animal( src) {
    
	std::cout << BLUE << "Cat copy constructor called" << RESET << std::endl;
	this->type_ = src.type_;
}

Cat::~Cat() {
	
		std::cout << BLUE << "Cat destructor called" << RESET << std::endl;
		return;
}

Cat & Cat::operator=( Cat const & rhs ) {
	
	std::cout << BLUE << "Cat Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type_ = rhs.type_;	
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
