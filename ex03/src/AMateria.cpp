/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:28:23 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 16:26:10 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) {

    //std::cout << GREEN << "AMateria default constructor called" << RESET << std::endl;
    this->type_ = "AMateria";
    return;
}

AMateria::AMateria( std::string const & type ) {

    //std::cout << GREEN << "AMateria string constructor called" << RESET<< std::endl;
    this->type_ = type;
	return;
}

AMateria::AMateria( AMateria const & src ) {

    //std::cout << GREEN << "AMateria copy constructor called" << RESET<< std::endl;
    this->type_ = src.type_;
    return;
}

AMateria::~AMateria() {

    //std::cout << GREEN << "AMateria destructor called" << RESET<< std::endl;
    return;
}

AMateria &AMateria::operator=( AMateria const & rhs ) {

    //std::cout << GREEN << "AMateria Assignment operator called" << RESET<< std::endl;
    if (this != &rhs)
      this->type_ = rhs.getType();
  return (*this);
}

// ---------------------------------------------------------- Methods


// ---------------------------------------------------------- Setters & Getters

std::string const & AMateria::getType() const { return this->type_; }

