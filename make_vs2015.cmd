@echo off
set "EXT_LIB_DIR=%~dp0\..\"

set MS_BLD_LL=m
set MS_BLD_TOOLSET=v140
set VC_STATIC_RTL=1

set SLN_NAME=LibSSH2.sln

set "LIBRESSL_SRC=%EXT_LIB_DIR%\libressl-msvc\src\"
set "OPENSSL_INC=%LIBRESSL_SRC%\include\"
set "OPENSSL_LIB=%EXT_LIB_DIR%\libressl-msvc\lib\"
set "LIBSSH2_SRC=%EXT_LIB_DIR%\libssh2\"
set "LIBSSH2_CFG_DIR=%~dp0\msvc\"
::del "%LIBSSH2_CFG_DIR%\libssh2_cfg.h"
::copy /y "%EXT_LIB_DIR%\libssh2_cfg.h" "%LIBSSH2_CFG_DIR%\libssh2_cfg.h"

set PLATFORM=Win32
call "%VS140COMNTOOLS%\vsvars32.bat"
msbuild %SLN_NAME% /m /verbosity:%MS_BLD_LL% /p:PlatformToolset=%MS_BLD_TOOLSET% /t:Clean,Build /p:Platform=%PLATFORM% /p:Configuration=Debug
msbuild %SLN_NAME% /m /verbosity:%MS_BLD_LL% /p:PlatformToolset=%MS_BLD_TOOLSET% /t:Clean,Build /p:Platform=%PLATFORM% /p:Configuration=Release
set PLATFORM=x64
call "%VS140COMNTOOLS%..\..\VC\bin\x86_amd64\vcvarsx86_amd64.bat"
msbuild %SLN_NAME% /m /verbosity:%MS_BLD_LL% /p:PlatformToolset=%MS_BLD_TOOLSET% /t:Clean,Build /p:Platform=%PLATFORM% /p:Configuration=Debug
msbuild %SLN_NAME% /m /verbosity:%MS_BLD_LL% /p:PlatformToolset=%MS_BLD_TOOLSET% /t:Clean,Build /p:Platform=%PLATFORM% /p:Configuration=Release
