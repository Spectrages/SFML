#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

int main()
{
    setlocale(LC_ALL, "");							// Поддержка кириллицы в консоли Windows
    IpAddress ip = IpAddress::getLocalAddress();
    TcpSocket socket;
    Packet packet;
    char type;
    char mode = ' ';
    char buffer[2000];
    size_t received;
    string text = "connect to: ";

//connecting//
    cout << ip << endl;
        cout << "Введите тип подключения:  c -клиент, s -сервер" << endl;
        cin >> type;
        if(type == 's'){
            TcpListener listener;
            listener.listen(2000);
            listener.accept(socket);
            text += "Server";
            mode = 's';

        } else if(type == 'c'){
            cout << "new ip:";
            cin >> ip;

            socket.connect(ip, 2000); //ip и Порт
            text += "client";
            mode = 'r';
        }
        socket.send(text.c_str(), text.length() + 1);
        socket.receive(buffer, sizeof(buffer), received);
        cout << buffer <<endl;
        bool done = false;
        while(!done)
        {
            if(mode == 's')
            {
                getline(cin, text);
                socket.send(text.c_str(), text.length() + 1);
                mode = 'r';
            }
            else if(mode == 'r')
            {
                socket.receive(buffer, sizeof(buffer), received);
                if(received > 0)
                {
                    cout << "User: " << buffer << endl;
                    mode = 's';
                }
            }
        }
        return 0;
}

