/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:29:58 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 16:28:19 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
  
    //std::cout << BLUE << "Ice default constructor called" << RESET << std::endl;
    return; 
}

Ice::Ice(std::string name) : AMateria("ice") {

    //std::cout << BLUE << "Ice string constructor called" << RESET << std::endl;
    this->type_ = name;
    return;
}

Ice::Ice( Ice const & src ) : AMateria( src ) {
    
    //std::cout << BLUE << "Ice copy constructor called" << RESET << std::endl;
    this->type_ = src.type_;
    return; 
}

Ice::~Ice() {

    //std::cout << BLUE << "Ice destructor called" << RESET<< std::endl;
    return;
}

Ice &Ice::operator=( Ice const & rhs ) {

    //std::cout << BLUE << "Ice Assignment operator called" << RESET<< std::endl;
    if (this != &rhs)
      this->type_ = rhs.type_;

    return (*this);
}

std::ostream & operator<<(std::ostream & lhs, Ice const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// -------------------------------------------------------------------- Methods

AMateria *Ice::clone() const { 
    
    return new Ice( *this ); 
}

void Ice::use( ICharacter & target ) {
  
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}