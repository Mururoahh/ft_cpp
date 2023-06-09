/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:13:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 16:13:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <exception>

int main(void)
{
	Bureaucrat const b1("Tim", 145);
	Bureaucrat const b2("Tod", 72);
	Bureaucrat const b3("Tom", 25);
	Bureaucrat const b4("Ted", 1);
	ShrubberyCreationForm sForm("home");
	std::cout << sForm;
	b1.executeForm(sForm);
	b1.signForm(sForm);
	b1.executeForm(sForm);
	b2.executeForm(sForm);
	RobotomyRequestForm rForm("wall-E");
	std::cout << rForm;
	b2.executeForm(rForm);
	b2.signForm(rForm);
	b2.executeForm(rForm);
	b3.executeForm(rForm);
	PresidentialPardonForm pForm("LE U");
	std::cout << pForm;
	b3.executeForm(pForm);
	b3.signForm(pForm);
	b3.executeForm(pForm);
	b4.executeForm(pForm);
}
