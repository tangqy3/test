//
// Created by a on 2017/3/21.
//

#ifndef DMS_CLIENT_LOGSENDER_H
#define DMS_CLIENT_LOGSENDER_H

#include <list>
#include "data.h"
using std::list;

class logSender
{
public:
    virtual void sender(list<MLogRec> & logList);
};


#endif //DMS_CLIENT_LOGSENDER_H
