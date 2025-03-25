/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:29:30 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 16:27:35 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
  
    //std::cout << ORANGE << "Cure default constructor called" << RESET << std::endl;
    return;
}

Cure::Cure(std::string name) : AMateria("cure") {

    //std::cout << ORANGE << "Cure string constructor called" << RESET << std::endl;
    this->type_ = name;
    return;
}

Cure::Cure( Cure const & src ) : AMateria( src ) {
    
    //std::cout << ORANGE << "Cure copy constructor called" << RESET << std::endl;
    this->type_ = src.type_;
    return;
}

Cure::~Cure() {

    //std::cout << ORANGE << "Cure destructor called" << RESET<< std::endl;
    return;
}

Cure &Cure::operator=( Cure const & rhs ) {

    //std::cout << ORANGE << "Cure Assignment operator called" << RESET<< std::endl;
    if (this != &rhs)
      this->type_ = rhs.type_;
    return (*this);
}

std::ostream & operator<<(std::ostream & lhs, Cure const & rhs) {
	
	lhs << rhs.getType()<< std::endl;
	return (lhs);
}

// -------------------------------------------------------------------- Methods

AMateria *Cure::clone() const { 
    
    return new Cure( *this ); 
}

void Cure::use( ICharacter & target ) {
    
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}