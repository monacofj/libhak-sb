/*  hak-test-core.c - Test libhak core functionality.
    
    Copyright 2013  Francisco Jose Monaco   <monaco.fj@gmail.com>

    This file is part of Libhak. 

    Libhak is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libhak is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with .  If not, see <http://www.gnu.org/licenses/>. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <libhak.h>

int main (int argc, char **argv)
{
  int i;

  hak_initialize(argc, argv);

  for (i=0; i<argc; i++)
    printf ("argv[%d]: %s\n", i, hak_engine.argv[i]);

  printf ("Program name: %s\n", hak_engine.program_name);
  
  return EXIT_SUCCESS;
}
