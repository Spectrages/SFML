Эта программа демострирует взаимодействие клиент-сервер по протоколу TCP/IP с использованием библиотеки SFML. Для упешной компиляции и запуска программы, добавьте в папку с исполняемым файлом папку SFML и измените в Network.pro следующие строки:

LIBS += -L"/<название папки SFML>/lib/"
INCLUDEPATH += "/<название папки SFML>/include"
DEPENDPATH += "/<название папки SFML>/include"

Названия вводить без <>.

This program demonstrates client-server communication over TCP/IP using the SFML library. To successfully compile and run the program, add the SFML folder to the executable file folder and change it to Network.pro next lines:

LIBS += -L "/<SFML folder name>/lib/ "
INCLUDE PATH += "/<SFML folder name>/include "
DEPENDPATH += "/<SFML folder name>/include"

Enter names without <>.
