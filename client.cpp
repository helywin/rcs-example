#include "rcs.hh"
#include "message.hpp"

int main(int argc, const char **argv)
{
    RCS_TIMER timer(0.1);
    NML example_nml(message_format, "ex", "client", "example.nml");
    message *example_msg_ptr;
    int quit = 0;
    while (true) {
        switch (example_nml.read()) {
            case -1:
                rcs_print("A communications error occurred.\n");
                quit = 1;
                break;
            case 0: /* The buffer contains the same message */ /* you read last time. */ break;
            case MESSAGE_MSG_TYPE:
                example_msg_ptr = (message *) example_nml.get_address();
                rcs_print(" We have a new example message. \n");
                rcs_print(" The value of its members are:\n ");
                rcs_print(" text: %d, %s\n ", example_msg_ptr->index, example_msg_ptr->text);
                break;
        }
        timer.wait();
    }
}