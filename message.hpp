//
// Created by jiang on 2021/5/6.
//

#ifndef RCS_EXAMPLE_MESSAGE_HPP
#define RCS_EXAMPLE_MESSAGE_HPP

#include <rcs.hh>

#define EXAMPLE_MSG_TYPE 101

struct message : public NMLmsg
{
    message() : NMLmsg(EXAMPLE_MSG_TYPE, sizeof(message))
    {}

    void update(CMS *cms);

    int index;
    DECLARE_NML_DYNAMIC_LENGTH_ARRAY(char, text, 100);
};

int message_format(NMLTYPE type, void *buf, CMS *cms);

#endif //RCS_EXAMPLE_MESSAGE_HPP
