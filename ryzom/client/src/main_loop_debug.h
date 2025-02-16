// Ryzom - MMORPG Framework <http://dev.ryzom.com/projects/ryzom/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This source file has been modified by the following contributors:
// Copyright (C) 2013  Jan BOON (Kaetemi) <jan.boon@kaetemi.be>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef CL_MAIN_LOOP_DEBUG_H
#define CL_MAIN_LOOP_DEBUG_H

#include <nel/misc/types_nl.h>

// Display some debug infos.
void displayDebug();
void displayDebugFps();
void displayDebugUIUnderMouse();
std::string getActionKey(const char* name, const char* param = "");
// Display an Help.
void displayHelp();

#endif // CL_MAIN_LOOP_DEBUG_H

/* end of file */