/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:05:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 17:15:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp" 

class Dog : public AAnimal { 
    
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
