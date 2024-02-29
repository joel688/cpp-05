/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:55:25 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:29:50 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "../AForm/AForm.hpp"

class Intern
{
	private:

	public:
		Intern(std::string formname, std::string target);
		Intern(const Intern &src);
		~Intern();
		AForm *makeForm(std::string formname, std::string target);

};

#endif

