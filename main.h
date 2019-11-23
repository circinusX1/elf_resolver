//
// paste here the generated code from shell
//
#ifndef LIBR_RESOLVER_H
#define LIBR_RESOLVER_H
// Copyright Marius C. https://github/comarius (do not remove)
#include <stdio.h>
#include <errno.h>
#include <dlfcn.h>


// -------------- constants ---------------
// review before compile...

#define V4L2_DISABLE_CONVERSION 0x01
#define V4L2_ENABLE_ENUM_FMT_EMULATION 0x02


// -------------- functions ---------------
// review before compile...
//          ssize_t v4l2_write(int fd, const void *buffer, size_t n);
#define PF_v4l2_write (* ( ssize_t (*)(int,const,size_t))             _ptr[0].ptr)
//          int v4l2_munmap(void *_start, size_t length);
#define PF_v4l2_munmap (* ( int (*)(void,size_t))                     _ptr[1].ptr)
//          void *v4l2_mmap(void *start, size_t length, int prot, int flags,
#define PF_*v4l2_mmap (* ( void (*)(void,size_t,int,int,))            _ptr[2].ptr)
//          int v4l2_dup(int fd);
#define PF_v4l2_dup (* ( int (*)(int))                                _ptr[3].ptr)
//         access to libv4l2 (currently there only is v4l2_fd_open here) */
#define PF_libv4l2 (* (access to (*)(currently))                                   _ptr[4].ptr)
//          int v4l2_fd_open(int fd, int v4l2_flags);
#define PF_v4l2_fd_open (* ( int (*)(int,int))                        _ptr[5].ptr)
//          int v4l2_get_control(int fd, int cid);
#define PF_v4l2_get_control (* ( int (*)(int,int))                    _ptr[6].ptr)
//          int v4l2_ioctl(int fd, unsigned long int request, ...);
#define PF_v4l2_ioctl (* ( int (*)(int,unsigned,...))                 _ptr[7].ptr)
//          int v4l2_set_control(int fd, int cid, int value);
#define PF_v4l2_set_control (* ( int (*)(int,int,int))                _ptr[8].ptr)
//          int v4l2_close(int fd);
#define PF_v4l2_close (* ( int (*)(int))                              _ptr[9].ptr)
//         Another difference is that you can make v4l2_read() calls even on devices
#define PF_difference (* (Another (*)())                                           _ptr[10].ptr)
//          ssize_t v4l2_read(int fd, void *buffer, size_t n);
#define PF_v4l2_read (* ( ssize_t (*)(int,void,size_t))               _ptr[11].ptr)
//         if it is anything else (including a video4linux1 device), v4l2_open will
#define PF_it (* (if (*)(including,v4l2_open))                                     _ptr[12].ptr)
//          int v4l2_open(const char *file, int oflag, ...);
#define PF_v4l2_open (* ( int (*)(const char*,int))                     _ptr[13].ptr) // fix this ???


// -------------- all funcs array ---------------
struct FUNCS_ {
  const char *name;
  void  (*ptr)(void);
};

inline const FUNCS_* load()
{
    union
    {
    void *p;
    void (*fp)(void);
    } u;

    static struct FUNCS_ _funcs[] ={
        {"v4l2_write", nullptr},
        {"v4l2_munmap", nullptr},
        {"*v4l2_mmap", nullptr},
        {"v4l2_dup", nullptr},
        {"libv4l2", nullptr},
        {"v4l2_fd_open", nullptr},
        {"v4l2_get_control", nullptr},
        {"v4l2_ioctl", nullptr},
        {"v4l2_set_control", nullptr},
        {"v4l2_close", nullptr},
        {"difference", nullptr},
        {"v4l2_read", nullptr},
        {"it", nullptr},
        {"v4l2_open", nullptr},
        {nullptr, nullptr}
    };
    void  *dll_handle;
    if ((dll_handle = dlopen("/usr/lib/x86_64-linux-gnu/libv4l2.so", RTLD_LAZY)) == 0)
    {
        perror("cannot load:");
        return nullptr;
    }
    struct FUNCS_ *fp = _funcs;
    for (; fp->name != nullptr; fp++)
    {
        u.p = dlsym(dll_handle, fp->name);
        if (u.fp == 0)
        {
            perror("cannot load:");
        }
        else
        {
            fp->ptr = u.fp;
        }
    }
    return _funcs;
}
#endif // LIB_RESOLVER
/*
 add this to cpp
const FUNCS_* _ptr; // global var
  _ptr = load(); // in main()
*/


