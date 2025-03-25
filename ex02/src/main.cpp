/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:21 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/30 14:00:43 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

int main( void ) {
  
  std::cout << std::endl << "--------------------------" << std::endl;
 
	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();
    
  std::cout << std::endl << "--------------------------" << std::endl;
    
	//std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
    
  std::cout << std::endl << "--------------------------" << std::endl;
    
	//meta->makeSound();
	j->makeSound();
	i->makeSound();
	a->makeSound();
	b->makeSound();
    
  AAnimal *array[10];

  for (size_t i = 1; i <= 10; i++) {
    std::cout << std::endl << "----------------------> " << MAGENTA << i << " " << RESET << std::endl;

    if (i <= 5)
      array[i] = new Dog();
    else
      array[i] = new Cat();

    array[i]->makeSound();
    std::cout << std::endl;
  }

  for (size_t i = 1; i <= 10; i++) {
    std::cout << "----------------------> " << MAGENTA << i << " " << RESET << std::endl;
    delete array[i];
    std::cout << std::endl;
  }
  
//delete meta;
delete i;
delete j;
delete a;
delete b;
  
  return 0;
}