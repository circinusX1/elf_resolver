#include "main.h"
#include <fcntl.h>    /* For O_RDWR */
#include <unistd.h>
const FUNCS_* _ptr;

int main(int argc, char *argv[])
{
    _ptr = load();

    int o = PF_v4l2_open("/dev/video0", O_RDWR | O_NONBLOCK);
    if(o)
    {
        PF_v4l2_close(o);
    }


}
