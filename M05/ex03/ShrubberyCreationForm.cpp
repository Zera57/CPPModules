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
		file << "          .     .  .      +     .      .          ." << std::endl;
		file << "     .       .      .     #       .           ." << std::endl;
		file << "        .      .         ###            .      .      ." << std::endl;
		file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
		file << "          .      . \"####\"###\"####\"  ." << std::endl;
		file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
		file << "  .             \"#########\"#########\"        .        ." << std::endl;
		file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
		file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
		file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
		file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
		file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
		file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
		file << "            .     \"      000      \"    .     ." << std::endl;
		file << "       .         .   .   000     .        .       ." << std::endl;
		file << ".. .. ..................O000O........................ ...... ..." << std::endl;
		file.close();
	}
}



