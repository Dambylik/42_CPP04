/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:21:06 by olly              #+#    #+#             */
/*   Updated: 2025/01/30 13:20:46 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"

class ICharacter;

class AMateria {
  
    public:
                
        AMateria( void );
        AMateria( AMateria const & src );
        AMateria( std::string const & type );
        
        virtual ~AMateria();
        
        AMateria &            operator=( AMateria const & rhs );
        
        std::string const &   getType() const;
        virtual AMateria      *clone() const = 0;
        virtual void          use( ICharacter & target ) = 0;
  
    protected:
    
        std::string type_;


    private:
};

std::ostream & operator<<( std::ostream & lhs, AMateria const & rhs );