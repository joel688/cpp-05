/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:17 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/16 17:26:11 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string			name;
		int					grade;
		bool 				IsValidGrade(int grade) const;
		void				SetName(std::string name);
		void				SetGrade(int grade);
		void				IncreaseGrade(void);
		void				DecreaseGrade(void);
	public:
							Bureaucrat();
							Bureaucrat(std::string name);
							Bureaucrat(int grade);
							Bureaucrat(std::string name, int grade);
							~Bureaucrat();
		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				GradeTooHighException(void);
		void				GradeTooLowException(void);
		void				operator<<(const Bureaucrat);
};

#endif
