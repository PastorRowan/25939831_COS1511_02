
@echo off
cd /d %~dp0

:: Compile the C++ program
call compile.bat

:: Run the test suite
call __tests__\main.bat
