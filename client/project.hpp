/**
 * project.hpp
 * Header file for Kune audio projects.
 **/

#ifndef PROJECT_H
#define PROJECT_H

#include <ctime>
#include <string>
#include <vector>

#include "track.hpp"

namespace Kune
{
	/*Kune project class:
	- Has many Kune tracks
	- Has name
	- Has original creator
	- Has creation date/time
	- Has some sort of forking history?
	- Has project folder
	*/

	class ProjectInfo
	{
		public:

		const std::string name;
		const std::string creator;
		const time_t creation_time;

		ProjectInfo(std::string n, std::string c, time_t t)
		: name(n), creator(c), creation_time(t)
		{}

	};

	class Project
	{
		private:

		const ProjectInfo project_info;
		std::vector<Track> tracks;

		const ProjectInfo *parent_info;

		std::string file_location;

		public:

		Project(
			std::string	_name,
			std::string	_creator,
			time_t		_time,
			std::string	_file_location,
			ProjectInfo *	_parent
		);
		
	};

}

#endif
