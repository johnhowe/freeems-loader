Welcome to FreeEMS-Loader!

##########################  LINUX USERS #################################
To build and run this application please run the following commands:

1. "apt-get update && apt-get install libboost-dev libboost-system-dev qt4-qmake libqt4-dev"

2. Simply type "qmake && make all" and hit enter!

3. To execute your freshly built loader type "./FreeEMS_Loader"

It's as easy as that!

#########################  WINDOWS USERS ################################
Install MinGW

	1. Download MinGW for use with qt4. QT is very specific there for I recommend you use the link below.

		 http://computer-ss.com/files/MinGW-gcc440_1.zip

	2. Extract to c:\mingw

	3. Add c:\mingw\bin to your PATH enviornment variable.

		



Install QTLibs

	1. Download QT(MinGW-4.x)

		http://get.qt.nokia.com/qt/source/qt-win-opensource-4.7.1-mingw.exe

	2. Run installer and install to 



Install/Build Boost C++

	1. Download and extract Boost

		http://sourceforge.net/settings/mirror_choices?projectname=boost&filename=boost/1.45.0/boost_1_45_0.zip

	2. from your extracted boost directory(c:\boost\boost_1_45_0\) run the following commands

		"bootstrap"
		"bjam --build-dir=boost-build --toolset=gcc --build-type=complete stage release"  Take a nap.... 
		"bjam --build-dir=boost-build --toolset=gcc install"

 Simply type "qmake && make all" and hit enter!

######################### MAC USERS #####################################
