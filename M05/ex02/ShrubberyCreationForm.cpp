#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", 145, 137, target){

}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c) : Form(c) {

}

void ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	if (this == &op)
		return ; 
	Form::operator=(op);
	return ;
}

void ShrubberyCreationForm::beExecuted() const
{
	std::ofstream file;
	std::string file_name = this->getTarget() + "_shrubbery";

	file.open(file_name, std::ios::out);
	if(file.is_open())
	{
		file << R"(										|)" << std::endl;
		file << R"(									\ _ /)" << std::endl;
		file << R"(									-= (_) =-)" << std::endl;
		file << R"(.\/.                               /   \)" << std::endl;
		file << R"(.\\//o\\                      ,\/.      |              ,~)" << std::endl;
		file << R"(//o\\|,\/.   ,.,.,   ,\/.  ,\//o\\                     |\)" << std::endl;
		file << R"(|  |//o\  /###/#\  //o\  /o\\|                      /| \)" << std::endl;
		file << R"(^^|^^|^~|^^^|' '|:|^^^|^^^^^|^^|^^^""""""""("~~~~~~~~/_|__\~~~~~~)" << std::endl;
		file << R"(.|'' . |  '''""'"''. |`===`|''  '"" "" " (" ~~~~ ~ ~======~~ ~)" << std::endl;
		file << R"(jgs^^   ^^^ ^ ^^^ ^^^^ ^^^ ^^ ^^ "" """( " ~~~~~~ ~~~~~  ~~~)" << std::endl;
		file.close();
	}
}



