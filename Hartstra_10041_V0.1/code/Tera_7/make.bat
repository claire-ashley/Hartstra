:: file:    make.bat
:: date:    Fri Jun 29 12:10:17 2018
:: device:  /project/Tera_7
:: use this batch file to compile the source code and build the binary file

@ECHO *** running scons ***
set VT3_GCC_ARM_LINUX_COMPILER_PATH=C:\Program Files (x86)\CodeSourcery\Sourcery G++ Lite\
call "C:\Program Files (x86)\VT3\SCons.exe" --debug=explain --sconstruct="C:\Program Files (x86)\VT3\resources\targets\TERA7\SConstruct.py" LIBPATH="C:\Program Files (x86)\VT3\resources\targets\TERA7\lib"  OBJPATH="P:\Mobile Controls\CUSTOMERS\Hartstra\Hartstra_10041_V0.1\code\Tera_7\__object__"  MAKELIB="0"  USEPDF="0" USEHB="0" USEISOBUSVT="0" USEISOBUSTC="0" USE_SEPARATE_BUILD_OF_DISPLAY_FILES="0" TARGET="vt3_app"

@ECHO *** scons terminated ***
@if (%1)==() pause

:: end of file
