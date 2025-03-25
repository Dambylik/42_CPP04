/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:30:25 by olly              #+#    #+#             */
/*   Updated: 2025/01/30 13:29:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource(), prototypes_() {
    
    //std::cout << MAGENTA << "MateriaSource default constructor called" << RESET<< std::endl;
    return;
}

MateriaSource::MateriaSource( MateriaSource const & src ) : IMateriaSource( src ), prototypes_() {
    
    //std::cout << MAGENTA << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (src.prototypes_[i])
            this->prototypes_[i] = src.prototypes_[i];
    }
    return;
}

MateriaSource::~MateriaSource() {
    
    //std::cout << MAGENTA << "MateriaSource destructor called" << RESET<< std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->prototypes_[i])
            delete prototypes_[i];
    }
    return;
}

MateriaSource &MateriaSource::operator=( MateriaSource const & rhs ) {
    
    //std::cout << MAGENTA << "MateriaSource Derived Assignment Operator Called"<< std::endl;
    if (this != &rhs)
        (void)rhs;
    return (*this);
}

// ---------------------------------------------------------- Methods

void MateriaSource::learnMateria( AMateria *materia ) {
    
    for (int i = 0; i < 4; ++i)
    {
        if (materia && this->prototypes_[i] == NULL)
        {
            this->prototypes_[i] = materia;    
        // std::cout << "LearnMateria function: Materia " << this->prototypes_[i]->getType()
        //           << " has been added to inventory at index " << i << std::endl;
            return;
        }
    }
    if (materia)
        std::cout << "Full Inventory. Non possible to add a new materia" << std::endl << std::endl;
    else
        std::cout << "Invalid Materia" << std::endl << std::endl;
    if (!this->inLearningInventory(materia))
        delete materia;
}

AMateria *MateriaSource::createMateria( std::string const & type ) {
    
    for (int i = 0; i < 4; ++i)
    {
        if (this->prototypes_[i] && this->prototypes_[i]->getType() == type)
            return this->prototypes_[i]->clone();
    }
    std::cout << "No possible to add cause materia type is invalid"  << std::endl;
    return (0);
}

int MateriaSource::inLearningInventory( AMateria *materia ) {
    
    for (int i = 0; i < 4; ++i) {
        if (this->prototypes_[i] == materia)
        return (1);
  }
    return (0);
}

// ---------------------------------------------------------- Setters & Getters