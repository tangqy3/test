//
// Created by a on 2017/3/21.
//

#ifndef DMS_CLIENT_CLIENT_H
#define DMS_CLIENT_CLIENT_H

#include "socketsender.h"
#include "logreader.h"
#include "logsender.h"

class Client
{
private:
    logSender m_logSender;
    logReader m_logReader;
public:
    Client(logReader & reader,logSender & sender);
    void datamine();
};


#endif //DMS_CLIENT_CLIENT_H
