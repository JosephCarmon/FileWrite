/*
 * logger.h
 *
 *  Created on: Feb 19, 2021
 *      Author: Joe
 */

#include <fstream>
#include <iostream>
#include <ctime>


using namespace std;

#ifndef LOGGER_H_
#define LOGGER_H_

void logger(string);


void logger(string sMessage)
{

		ofstream LogFile;

	   // current date/time based on current system
	   time_t now = time(0);
/*
 *
 *  tm structure.
    Year:     1900 + ltm->tm_year
    Month:   1 + ltm->tm_mon
    Day:      ltm->tm_mday
    Hour:     ltm->tm_hour
    Minutes: ltm->tm_min
    Seconds:  ltm->tm_sec
 *
 *
 */
	   tm *ltm = localtime(&now);

	   string sFileName = "LogFile.log";

	   		LogFile.open(sFileName, ios::out|ios::app);

	   		if(LogFile.is_open())
	   		{

	   			LogFile << 1 + ltm->tm_mon << ltm->tm_mday << 1900 + ltm->tm_year << ltm->tm_hour <<  ltm->tm_min << sMessage << '\n';

	   		} else
	   		{

	   		}


	   		LogFile.close();



}


#endif /* LOGGER_H_ */
