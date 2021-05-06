//
// Created by jiang on 2021/5/6.
//

#include "rcs.hh"
#include "message.hpp"
#include <iostream>
#include <csignal>
#include <string>


void signal_handler(int signal)
{
    std::cout << "exit" << std::endl;
    exit(0);
}

int main()
{
    std::signal(SIGINT, signal_handler);
    NML example_nml(message_format, "ex", "server", "example.nml");
    while (true) {
        static int index = 1;
        std::string str;
        std::cin >> str;
        if (str.empty()) {
            break;
        }
        message msg;
        msg.text_length = (int) str.length() + 1;
        msg.index = index++;
        memcpy(msg.text, str.data(), str.length());
        int ret = example_nml.write(msg);
        std::cout << "write ret: " << ret << std::endl;
    }
}