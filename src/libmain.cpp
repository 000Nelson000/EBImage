/* -------------------------------------------------------------------------

A future lib main file, no use now, maybe will be used on Windows
 
Copyright (c) 2005 Oleg Sklyar

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License 
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.          

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.
GPL license wording: http://www.gnu.org/licenses/gpl.html

------------------------------------------------------------------------- */
#include "common.h"

#include <Rinternals.h>
#include <R_ext/Rdynload.h>

extern "C" {
    void R_init_imagine (DllInfo * info);
    void R_unload_imagine (DllInfo * info);
};

// Library initialization code
void R_init_imagine (DllInfo * info) {
}

// Library unload code
void R_unload_imagine (DllInfo * info) {
}

