/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:26:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 15:21:59 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Colors.hpp"
#include <iostream>
#include <string>

class WrongAnimal { 

    public:

        WrongAnimal( void );
        WrongAnimal( WrongAnimal const & src);
        WrongAnimal( std::string name );
        
        virtual ~WrongAnimal();
        
        WrongAnimal &   operator=( WrongAnimal const & rhs );

        void            makeSound() const;
        std::string     getType()   const;

    protected:

        std::string     type_;
     
    private:
};

std::ostream & operator<<( std::ostream & lhs, WrongAnimal const & rhs );
