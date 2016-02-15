#Standard include and library path for GL/ and libGL, libGLU, libglut, update if needed
INCLUDEDIR = -I/usr/include/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/System/Library/Frameworks/OpenGL.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/System/Library/Frameworks/OpenGL.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/System/Library/Frameworks/OpenGL.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/System/Library/Frameworks/OpenGL.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk/System/Library/Frameworks/OpenGL.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.6.sdk/System/Library/Frameworks/OpenGL.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/System/Library/Frameworks/GLUT.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/System/Library/Frameworks/GLUT.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/System/Library/Frameworks/GLUT.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/System/Library/Frameworks/GLUT.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk/System/Library/Frameworks/GLUT.framework/Headers/ -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.6.sdk/System/Library/Frameworks/GLUT.framework/Headers/ -I/System/Library/Frameworks/OpenGL.framework/Headers/ -I/System/Library/Frameworks/GLUT.framework/Headers/ -I/System/Library/Frameworks/GLEW.framework/Headers/ -Wno-deprecated-declarations
LIBDIR =  -framework OpenGL -framework GLUT 
LIBDIR =  -framework OpenGL -framework GLUT 

volume_render: volume_render.o TextureLoader.o glew.o glsl.o 
	g++ $(LIBDIR) volume_render.o TextureLoader.o glew.o glsl.o -o volume_render

volume_render.o: volume_render.cpp
	g++ -c $(INCLUDEDIR) volume_render.cpp

TextureLoader.o: TextureLoader.h TextureLoader.cpp
	g++ -c $(INCLUDEDIR) TextureLoader.cpp

glew.o: glew/src/glew.c
	g++ -c $(INCLUDEDIR) -I glew/include/ glew/src/glew.c

glsl.o: glsl.cpp
	g++ -c $(INCLUDEDIR) -I glew/include/ glsl.cpp
