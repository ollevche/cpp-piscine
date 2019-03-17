// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 19:44:18 by ollevche          #+#    #+#             //
//   Updated: 2018/10/09 19:44:18 by ollevche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

OfficeBlock::OfficeBlock() : intern(NULL), signBur(NULL), exeBur(NULL) {
    /* EMPTY */
}

OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & signBur, Bureaucrat & exeBur)
    : intern(&intern), signBur(&signBur), exeBur(&exeBur) {
    /* EMPTY */
}

OfficeBlock::~OfficeBlock() {
    /* EMPTY */
}

void OfficeBlock::setIntern(Intern & intern) {
    this->intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat & signBur) {
    this->signBur = &signBur;
}

void OfficeBlock::setExecutor(Bureaucrat & exeBur) {
    this->exeBur = &exeBur;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target) {
    Form *form;

    if (!intern || !signBur || !exeBur)
        throw OfficeBlock::NotStuffedException();
    try {
        form = intern->makeForm(formName, target);
        signBur->signForm(*form);
        exeBur->executeForm(*form);
    }
    catch (const Intern::NoSuchFormException & e) {
        std::cout << "OfficeBlock: " << e.what() << std::endl;
    }
    catch (const Form::GradeTooLowException & e) {
        std::cout << "OfficeBlock: " << e.what() << std::endl;
    }
    catch (const Form::NotSignedException & e) {
        std::cout << "OfficeBlock: " << e.what() << std::endl;
    }
}
