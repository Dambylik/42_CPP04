/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:22:58 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 15:44:28 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"


class ICharacter {

    public:
  
      virtual                     ~ICharacter(){};
      virtual std::string const & getName() const = 0;
      virtual void                equip( AMateria * m ) = 0;
      virtual void                unequip( int idx ) = 0;
      virtual void                use( int idx, ICharacter & target ) = 0;

    protected:

    private:    
};
