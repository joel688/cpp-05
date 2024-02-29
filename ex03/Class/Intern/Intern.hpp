/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:55:25 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 17:04:04 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#define LEVEL_COUNT 3

#include <iostream>
#include <string>
#include "../AForm/AForm.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		AForm *makeForm(std::string formname, std::string target);
		Intern& operator=(const Intern& src);
};

#endif

