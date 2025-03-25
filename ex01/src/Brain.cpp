/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:06:54 by olly              #+#    #+#             */
/*   Updated: 2025/01/27 15:22:33 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	
	std::cout << ORANGE << "Brain default constructor called" << RESET << std::endl;
    
	return;
}

Brain::Brain( Brain const & src) {
	
	std::cout << ORANGE << "Brain copy constructor called" << RESET << std::endl;
	
    for (int i = 0; i < 100; i++) {
            ideas_[i] = src.ideas_[i];}
}

Brain::~Brain() {
	
		std::cout << ORANGE << "Brain destructor called" << RESET << std::endl;
		return;
}

Brain & Brain::operator=( Brain const & rhs ) {
	
	std::cout << ORANGE << "Brain Assignment operator called" << RESET << std::endl;
	
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++) {
            ideas_[i] = rhs.ideas_[i];}
    }
	return (*this);
}

// ---------------------------------------------------------- Methods



// ---------------------------------------------------------- Setters & Getters

std::string Brain::getIdea(int i) const { return this->ideas_[i]; }
