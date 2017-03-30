//
// Created by a on 2017/3/21.
//

#include "client.h"
#include <stdio.h>

Client::Client(logReader &reader, logSender &sender):m_logReader(reader),m_logSender(sender) {}

void Client::datamine() {
    printf("datamine begin\n");
    m_logSender.sender(m_logReader.reader());
    printf("datamine end\n");
}