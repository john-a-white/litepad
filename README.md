# litepad
LitePad is an open-source, cross-platform text editing utility created in Qt Creator and runs on Windows, Linux, and soon - Macintosh and BSD based computers. 

It was created in Qt Creator and written in C++. The primary goal of LitePad is:

- to be very lightweight (hence the name "LitePad")

- to be easy for people new to qt and C++ to understand the code.

- to be a nice, fluent, easy to use text editor.

Help us reach our goal by contributing! Or if you can't, make sure to report any bugs you see!

# Compiling on Linux
If you have an i386 or amd64 machine, use their respected sources as they contain compatible versions of libqtfindreplacedialog for your architecture. If you're not using an i386 or amd64 machine, LitePad will still compile, but you will need to recompile qtfindreplacedialog for your architecture and replace anything in the "lib" folder. See http://qtfindreplace.sourceforge.net/html/index.html for more info on how to do that.

Please note that I cannot help with every architecture. I only have i386, amd64, and powerpc machines to test with, so I cannot guarantee it will work with yours.

Afterwards you will need qt libraries installed for a successful compilation. sudo apt-get -y install qt-sdk gcc (debian-based distros) is the best way to install everything. I use gcc to compile LitePad, but you can use a different one. I personally use Qt Creator to debug, edit, and compile the program, but you can also edit it through the command line if you so desire.

# Compiling on Windows
Same steps as above, but make sure you have all the required dlls and libraries in your "release" folder, or else litepad.exe will fail to start. The required dlls are:

icudt53.dll, icuin53.dll, icuuc53.dll, libgcc_s_dw2-1.dll, libstdc++-6.dll, libwinpthread-1.dll, Qt5Core.dll, Qt5Gui.dll, Qt5Widgets.dll, and qtfindreplacedialog.dll

These are included in the "required-dlls" folder.

You will also need a folder called platforms. Make that folder and copy qwindows.dll to it.

# Compiling on Mac OS X
I don't have a modern Macintosh computer to test compiling on, but it should be relatively the same as Linux, but you'll need to recompile QtFindReplaceDialog in order for it to work on Mac. Again, see http://qtfindreplace.sourceforge.net/html/index.html for more info on how to do that.

# Compiling on BSD-Based Operating Systems
I don't have a computer that runs BSD, but again it should be relatively the same as Linux. A few BSD-distributions may actually not need recompilation for QtFindReplaceDialog, but a few might need it. FreeBSD shouldn't need recompilation. I cannot say the same for PC-BSD, DragonFly BSD, etc.

# Minimum Requirements
- Windows: Windows XP Service Pack 2 or above with 16 MB of RAM. 

- Linux: Varies (minimum of 4 MB of RAM required).

- Mac OS X: Mountain Lion or higher.

- FreeBSD: Not sure. (minimum of 4 MB of RAM required).
