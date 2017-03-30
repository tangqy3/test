//
// Created by a on 2017/3/21.
//

#include "socketsender.h"
#include <stdio.h>

socketSender::socketSender(string strIp, int iPort):m_ip(strIp),m_port(iPort){
    printf("socketSender begin\n");

    printf("socketSender end\n");
}

void socketSender::sender(list<MLogRec> &logList) {
    printf("sender begin\n");

    printf("sender end\n");
}
