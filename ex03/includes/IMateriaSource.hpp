/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:23:44 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 14:04:26 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"
#include "AMateria.hpp"

class IMateriaSource {
    
    public:

        virtual ~IMateriaSource() {};
        
        IMateriaSource &            operator=( IMateriaSource const & rhs );
        
        virtual void                learnMateria( AMateria *m )  = 0;
        virtual AMateria            *createMateria( std::string const & type ) = 0;

    protected:
    
    private:
};

std::ostream & operator<<( std::ostream & lhs, IMateriaSource const & rhs );
