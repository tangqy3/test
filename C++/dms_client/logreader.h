//
// Created by a on 2017/3/21.
//

#ifndef DMS_CLIENT_LOGREADER_H
#define DMS_CLIENT_LOGREADER_H

#include <string>
#include <list>
#include "data.h"

using std::string;
using std::list;

class logReader
{
private:
    string m_logFile;
    string m_backupFile;
    string m_logInFile;
    list<LogRec> m_logIn;
    list<LogRec> m_logOut;
    list<MLogRec> m_logMatch;

    void logBackup();
    void readBackup();
    void readLogInFile();
    void matchLog();
    void saveLogInFile();
public:
    logReader(string strFilePath);
    list<MLogRec> & reader();
};

#endif //DMS_CLIENT_LOGREADER_H
