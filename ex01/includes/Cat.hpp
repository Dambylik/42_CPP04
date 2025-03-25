/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:05:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 17:13:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    public:

        Cat( void );
        Cat( Cat const & src);
        Cat( std::string const name );
        
        ~Cat();
        
        Cat &           operator=( Cat const & rhs );

        void            makeSound() const;
        Brain           *getBrain( void );

    protected:

    private:
        
        Brain           *_brain; 
    
};

std::ostream & operator<<( std::ostream & lhs, Cat const & rhs );