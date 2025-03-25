/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:05:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/30 12:38:15 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp" 

class Dog : public Animal { 
    
    public:

        Dog( void );
        Dog( Dog const & src);
        Dog( std::string const name );
        
        ~Dog();
        
        Dog &           operator=( Dog const & rhs );

        void            makeSound() const;
        Brain           *getBrain( void );

    protected:

    private:
        
        Brain           *_brain;
    
};

std::ostream & operator<<( std::ostream & lhs, Dog const & rhs );
