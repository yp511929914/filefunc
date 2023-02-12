#include <stdio.h>
#include "file_deal_model.h"
#include "tcp_comm_model.h"

int main()
{
    CTest a;
    a.test_function();
    CTcpComm b;
    b.tcp_function();
    return 0;
}
