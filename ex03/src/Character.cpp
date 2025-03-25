/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:58:54 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 16:39:34 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character() : ICharacter() {
  
    //std::cout << CYAN << "Character default constructor called" << RESET<< std::endl;
    this->name_ = "Character Clone";
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
    return;
}

Character::Character(std::string const & name) : ICharacter() {
  
    //std::cout << CYAN << "Character string constructor called" << RESET<< std::endl;
    this->name_ = name;
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
    return;
}

Character::Character( Character const & src ) : ICharacter( src ), _inventory() {

    //std::cout << CYAN << "Character copy constructor called" << RESET<< std::endl;
    this->name_ = src.getName();
    for (int i = 0; i < 4; ++i)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i];
    }
    return; 
}

Character::~Character() {

    //std::cout << CYAN << "Character destructor called" << RESET<< std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i])
            delete this->_inventory[i];
  }
  return;
}

Character & Character::operator=( Character const & rhs ) {

    //std::cout << CYAN << "Character Derived Assignment Operator Called" << RESET<< std::endl;
    if (this != &rhs) {
        this->name_ = rhs.getName();
      
    for (int i = 0; i < 4; ++i)
        _inventory[i] = rhs._inventory[i]->clone();
  }
  return (*this);
}

// ---------------------------------------------------------- Methods

void Character::equip( AMateria *materia ) {

    for (int i = 0; i < 4; ++i)
    {
      if (materia && this->_inventory[i] == NULL)
      {
        if (this->_inventory[i])
          this->_inventory[i] = materia->clone();
        else
          this->_inventory[i] = materia;

        // std::cout << "Equip function : Materia " << this->_inventory[i]->getType()
        //             << " has been added to " << this->name_
        //             << "'s inventory at index " << i << std::endl;
        return;
      }
    }
    if (materia)
        std::cout << this->name_ << "'s inventory is full" << std::endl;
    else 
        std::cout << "Invalid Materia" << std::endl;
    if (!this->inInventory(materia))
        delete materia;
}

void Character::unequip( int i ) {

    if (i >= 0 && i < 4 && this->_inventory[i])
    {
        std::cout << this->_inventory[i] << " has been removed at index " << i
                  << " from " << this->name_ << "'s inventory."<< std::endl;
        this->_inventory[i] = NULL;
    }
    else if (i < 0 || i >= 4)
        std::cout << "Invalid index: " << i << std::endl << std::endl;
    else
        std::cout << "No Materia to be equiped ! Index " << i << " is empty."<< std::endl;
}

void Character::use( int i, ICharacter & target ) {
    
    if (i >= 0 && i < 4 && this->_inventory[i])
        this->_inventory[i]->use(target);
    else if (i < 0 || i >= 4)
        std::cout << "Invalid index: " << i << std::endl << std::endl;
    else
        std::cout << "No Materia to be equiped ! Index " << i << " is empty."<< std::endl;
  }

int Character::inInventory( AMateria *materia ) {
    
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] == materia)
      return (1);
  }
  return (0);
}

// ---------------------------------------------------------- Setters & Getters

void Character::setName( std::string const & name ) { this->name_ = name; }
std::string const & Character::getName() const { return this->name_; }