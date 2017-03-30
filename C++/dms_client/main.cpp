#include <iostream>
#include "logreader.h"
#include "socketsender.h"
#include "client.h"
#include <unistd.h>
#include <cstdlib>

int main(int argc,char * argv[]) {
    logReader reading("F:\\C\\dms_client");
    socketSender sending("10.10.12.149",22);
    Client client(reading,sending);
    client.datamine();
    return 0;
}