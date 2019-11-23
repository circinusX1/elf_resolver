#include "main.h"

const FUNCS_* _ptr;

int main(int argc, char *argv[])
{
    _ptr = load();

    int o = PF_v4l2_ioctl(55,55);



}
