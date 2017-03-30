//
// Created by a on 2017/3/21.
//

#include "logreader.h"
#include <stdio.h>

void logReader::logBackup() {
    printf("logBackup begin\n");

    printf("logBackup end\n");
}

void logReader::readBackup() {
    printf("readBackup begin\n");

    printf("readBackup end\n");
}

void logReader::readLogInFile() {
    printf("readLogInFile begin\n");

    printf("readLogInFile end\n");
}

void logReader::matchLog() {
    printf("matchLog begin\n");

    printf("matchLog end\n");
}

void logReader::saveLogInFile() {
    printf("saveLogInFile begin\n");

    printf("saveLogInFile end\n");
}

logReader::logReader(string strFilePath):m_logFile(strFilePath) {
    printf("logReader begin\n");

    printf("logReader end\n");
}

list<MLogRec> &logReader::reader() {
    printf("reader begin\n");

    printf("reader end\n");
    return m_logMatch;
}
