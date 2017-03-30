//
// Created by a on 2017/3/21.
//

#ifndef DMS_CLIENT_SOCKETSENDER_H
#define DMS_CLIENT_SOCKETSENDER_H

#include "logsender.h"

class socketSender: public logSender
{
private:
    string m_strFailFile;
    string m_ip;
    int m_port;

public:
    socketSender(string strIp,int iPort);
    virtual void sender(list<MLogRec> & logList);
};

#endif //DMS_CLIENT_SOCKETSENDER_H
