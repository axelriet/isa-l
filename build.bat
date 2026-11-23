@echo off
setlocal
rem The makefile builds x64 only: nasm produces win64 objects. Set up the x64
rem compiler unless the prompt already targets x64 (for example, the default
rem developer prompt targets x86).
if /i not "%VSCMD_ARG_TGT_ARCH%"=="x64" (
    for /f "usebackq delims=" %%i in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do (
        call "%%i\VC\Auxiliary\Build\vcvars64.bat" >nul
    )
)
if /i not "%VSCMD_ARG_TGT_ARCH%"=="x64" (
    echo Cannot set up the x64 compiler. Run build.bat from an "x64 Native Tools Command Prompt".
    exit /b 1
)
nmake -f Makefile.nmake clean
nmake -f Makefile.nmake
