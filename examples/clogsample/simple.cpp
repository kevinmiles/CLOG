#include <stdio.h>

#include "simple.cpp.clog"

int main(int argc, char* argv[])
{
    printf("Hello world!");
    TraceInfo(LAUNCHED, "Hello world - we just started %d", 80);
                
    char *buffer = new char[10];
    for(char i=0; i<10; ++i)
    {
        TraceInstanceInfo(INSTANCE_TEST, buffer, "1:%d 2:%s 3:%c 4:%u 5:%u 6:%u", 1, "2", 3, 4, 5, 6);        
    }
    delete [] buffer;

    return 0;
}