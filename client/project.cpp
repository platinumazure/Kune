/**
 * project.cpp
 * 
 **/

#include <string>

#include "project.hpp"

Project::Project(
	std::string	_name,
	std::string	_creator,
	time_t		_time,
	std::string	_file_location,
	ProjectInfo *	_parent)
:
	project_info(_name, _creator, _time),
	file_location(_file_location),
	parent_info(_parent)
{}
