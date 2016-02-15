/* -------------------------------------------------------- */
/* -------------------------------------------------------- */
/*

    TP OpenGL - Graphics and Sound Synthesis course

George Drettakis, Adrien Bousseau , Sylvain Lefebvre

mailto: FirstName.LastName@inria.fr

REVES / INRIA

History:
- Created 2006-10-10 (SL)
- Update 2013-02 (AB)

*/
/* -------------------------------------------------------- */
/*

Helper functions for GLSL - header

*/
/* -------------------------------------------------------- */
#ifdef _WIN32

#include <windows.h>        // windows API header (required by gl.h)
#include "glew/include/GL/glew.h" // Support for shaders
//#include <glew.h>
#include <GL/gl.h>          // OpenGL header
#include <GL/glu.h>         // OpenGL Utilities header
#include <GL/glut.h>        // OpenGL Utility Toolkit header

#elif __APPLE__
#include "glew/include/GL/glew.h"		// Support for shaders
//#include "glew/include/GL/glew.h" // Support for shaders
//#include <gl.h>          // OpenGL header
#include <gl3.h>          // OpenGL header
#include <gl3ext.h>          // OpenGL header
#include <glut.h>        // OpenGL Utility Toolkit header
#include <stdlib.h>

#else

#include "glew/include/GL/glew.h" // Support for shaders
#include <GL/gl.h>          // OpenGL header
#include <GL/glu.h>         // OpenGL Utilities header
#include <GL/glut.h>        // OpenGL Utility Toolkit header
#include <GL/glext.h>           // OpenGL eXtension loading
#include <stdlib.h>

#endif

#include <cstdio>
#include <cmath>

/* -------------------------------------------------------- */

/*
  loadGLSLShader

  Loads a GLSL shader from a string.

  * Inputs
    - prg  : null terminated string
	- type : program type (GL_VERTEX_SHADER or GL_FRAGMENT_SHADER)
  * Output
    - program GL id

*/
#ifdef	_WIN32
GLuint 
#else
unsigned int
#endif 
loadGLSLShader(const char *prg,GLuint type);

/*
  createGLSLProgram

  Create a GLSL program and load shaders.

  * Inputs
    - vp_code   : null terminated string for vertex program
    - fp_code   : null terminated string for fragment program
  * Output
    - program GL id

*/
#ifdef _WIN32
GLuint 
#else
unsigned int
#endif
createGLSLProgram(const char *vp_code,const char *fp_code);

/*
  Load a string from a file

  Returned string must be deleted with delete[]()
*/
const char *loadStringFromFile(const char *fname);
