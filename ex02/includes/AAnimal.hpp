/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:55:09 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 15:53:45 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"


class AAnimal {

    public:

        AAnimal( void );
        AAnimal( AAnimal const & src);
        AAnimal( std::string name );
        
        virtual ~AAnimal();
        
        AAnimal &        operator=( AAnimal const & rhs );

        virtual void    makeSound() const = 0;
        std::string     getType() const;

    protected:
     
        std::string     type_;

    private:
};

std::ostream & operator<<( std::ostream & lhs, AAnimal const & rhs );
