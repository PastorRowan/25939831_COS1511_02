
@echo off
cd /d %~dp0

:: Activate the virtual environment
call venv\Scripts\activate.bat

:: Run the Python test script within the project directory
python main.py
