cmake_minimum_required(VERSION 3.6)
project(DMS)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        client/backup.sh
        client/client.cpp
        client/client.h
        client/client.pro
        client/client.sh
        client/clientdlg.cpp
        client/clientdlg.h
        client/consolesender.cpp
        client/consolesender.h
        client/data.h
        client/except.h
        client/logins.dat
        client/logreader.cpp
        client/logreader.h
        client/logsender.h
        client/main.cpp
        client/Makefile
        client/makefile.bak
        client/moc_clientdlg.cpp
        client/moc_workthread.cpp
        client/reset.sh
        client/socketsender.cpp
        client/socketsender.h
        client/workthread.cpp
        client/workthread.h
        client/wtmpx
        client/wtmpx.20150511094506
        client/wtmpx.bak
        server/clientthread.cpp
        server/clientthread.h
        server/data.h
        server/dms.db
        server/except.h
        server/filedao.cpp
        server/filedao.h
        server/logdao.h
        server/logqueue.cpp
        server/logqueue.h
        server/logthread.cpp
        server/logthread.h
        server/main.cpp
        server/makefile
        server/oracledao.h
        server/oracledao.pc
        server/server.cpp
        server/server.h
        server/serversocket.cpp
        server/serversocket.h
        server/storethread.cpp
        server/storethread.h)

add_executable(DMS ${SOURCE_FILES})