/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:22:04 by olly              #+#    #+#             */
/*   Updated: 2025/01/30 13:21:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter {
  
    public:
    
        Character( void );
        Character( Character const & src );
        Character( std::string const & name );
        
        ~Character();
        
        Character &             operator=( Character const & rhs );
        
        void                    equip( AMateria * m );
        void                    unequip( int idx );
        void                    use( int idx, ICharacter & target );
        int                     inInventory( AMateria * nr);
        


        std::string const &   getName() const;
        void                  setName( std::string const & name);
  
    protected:
    
        std::string name_;
    
    private:
        
        AMateria *_inventory[4];      
};

std::ostream & operator<<( std::ostream & lhs, Character const & rhs );
