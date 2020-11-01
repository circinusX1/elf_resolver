#ifndef LIBR_RESOLVER_H
#define LIBR_RESOLVER_H
// Copyright Marius C. https://github/comarius (do not remove)
#include <stdio.h>
#include <errno.h>
#include <dlfcn.h>


// -------------- constants ---------------
// review before compile...
#define _PTHREAD_H	1
#define PTHREAD_CREATE_JOINABLE	PTHREAD_CREATE_JOINABLE
#define PTHREAD_CREATE_DETACHED	PTHREAD_CREATE_DETACHED
#define PTHREAD_INHERIT_SCHED   PTHREAD_INHERIT_SCHED
#define PTHREAD_EXPLICIT_SCHED  PTHREAD_EXPLICIT_SCHED
#define PTHREAD_SCOPE_SYSTEM    PTHREAD_SCOPE_SYSTEM
#define PTHREAD_SCOPE_PROCESS   PTHREAD_SCOPE_PROCESS
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define PTHREAD_PROCESS_SHARED  PTHREAD_PROCESS_SHARED
#define PTHREAD_COND_INITIALIZER { { {0}
 {0}
 {0
 0}
 {0
 0}
 0
 0
 {0
 0} } }
#define PTHREAD_CANCEL_ENABLE   PTHREAD_CANCEL_ENABLE
#define PTHREAD_CANCEL_DISABLE  PTHREAD_CANCEL_DISABLE
#define PTHREAD_CANCEL_DEFERRED	PTHREAD_CANCEL_DEFERRED
#define PTHREAD_CANCEL_ASYNCHRONOUS	PTHREAD_CANCEL_ASYNCHRONOUS
#define PTHREAD_CANCELED ((void *) -1)
#define PTHREAD_ONCE_INIT 0


// -------------- functions ---------------
// review before compile...

//void pthread_exit (void *__retval) __attribute__ ((__noreturn__));
#define PF_pthread_exit (* (void (*)(void *__retval __attribute__ ))               _ptr[0].ptr)

//the thread as per pthread_exit(PTHREAD_CANCELED) if it has been
#define PF_thread (* (the (*)(PTHREAD_CANCELED if it has been ))                   _ptr[1].ptr)

//void pthread_exit (void *__retval) __attribute__ ((__noreturn__));
#define PF_pthread_exit (* (void (*)(void *__retval __attribute__ ))               _ptr[2].ptr)

//the thread as per pthread_exit(PTHREAD_CANCELED) if it has been
#define PF_thread (* (the (*)(PTHREAD_CANCELED if it has been ))                   _ptr[3].ptr)

//int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,const cpu_set_t *__cpuset)__THROW __nonnull ((3));
#define PF_pthread_setaffinity_np (* (int (*)(pthread_t __th ,size_t __cpusetsize ,const cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[4].ptr)

//int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,pthread_mutex_t *__restrict __mutex,const struct timespec *__restrict __abstime)__nonnull ((1, 2, 3));
#define PF_pthread_cond_timedwait (* (int (*)(pthread_cond_t *__restrict __cond ,pthread_mutex_t *__restrict __mutex ,const struct timespec *__restrict __abstime__nonnull ))    _ptr[5].ptr)

//int pthread_cond_destroy (pthread_cond_t *__cond)
#define PF_pthread_cond_destroy (* (int (*)(pthread_cond_t *__cond ))              _ptr[6].ptr)

//int pthread_attr_setaffinity_np (pthread_attr_t *__attr,size_t __cpusetsize,const cpu_set_t *__cpuset)__THROW __nonnull ((1, 3));
#define PF_pthread_attr_setaffinity_np (* (int (*)(pthread_attr_t *__attr ,size_t __cpusetsize ,const cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[7].ptr)

//int pthread_cond_signal (pthread_cond_t *__cond)
#define PF_pthread_cond_signal (* (int (*)(pthread_cond_t *__cond ))               _ptr[8].ptr)

//int pthread_cond_init (pthread_cond_t *__restrict __cond,const pthread_condattr_t *__restrict __cond_attr)__THROW __nonnull ((1));
#define PF_pthread_cond_init (* (int (*)(pthread_cond_t *__restrict __cond ,const pthread_condattr_t *__restrict __cond_attr__THROW __nonnull ))    _ptr[9].ptr)

//int pthread_cond_wait (pthread_cond_t *__restrict __cond,pthread_mutex_t *__restrict __mutex)__nonnull ((1, 2));
#define PF_pthread_cond_wait (* (int (*)(pthread_cond_t *__restrict __cond ,pthread_mutex_t *__restrict __mutex__nonnull ))    _ptr[10].ptr)

//pthread_t pthread_self (void) __THROW __attribute__ ((__const__));
#define PF_pthread_self (* (pthread_t (*)(void __THROW __attribute__ ))            _ptr[11].ptr)

//int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,cpu_set_t *__cpuset)__THROW __nonnull ((3));
#define PF_pthread_getaffinity_np (* (int (*)(pthread_t __th ,size_t __cpusetsize ,cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[12].ptr)

//int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,size_t __cpusetsize,cpu_set_t *__cpuset)__THROW __nonnull ((1, 3));
#define PF_pthread_attr_getaffinity_np (* (int (*)(const pthread_attr_t *__attr ,size_t __cpusetsize ,cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[13].ptr)

//int pthread_cond_broadcast (pthread_cond_t *__cond)
#define PF_pthread_cond_broadcast (* (int (*)(pthread_cond_t *__cond ))            _ptr[14].ptr)

//int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
#define PF_pthread_rwlockattr_init (* (int (*)(pthread_rwlockattr_t *__attr ))     _ptr[15].ptr)

//int pthread_attr_setguardsize (pthread_attr_t *__attr,size_t __guardsize)__THROW __nonnull ((1));
#define PF_pthread_attr_setguardsize (* (int (*)(pthread_attr_t *__attr ,size_t __guardsize__THROW __nonnull ))    _ptr[16].ptr)

//int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,const cpu_set_t *__cpuset)__THROW __nonnull ((3));
#define PF_pthread_setaffinity_np (* (int (*)(pthread_t __th ,size_t __cpusetsize ,const cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[17].ptr)

//int pthread_attr_getguardsize (const pthread_attr_t *__attr,size_t *__guardsize)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getguardsize (* (int (*)(const pthread_attr_t *__attr ,size_t *__guardsize__THROW __nonnull ))    _ptr[18].ptr)

//int pthread_condattr_destroy (pthread_condattr_t *__attr)
#define PF_pthread_condattr_destroy (* (int (*)(pthread_condattr_t *__attr ))      _ptr[19].ptr)

//int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,int __prioceiling)__THROW __nonnull ((1));
#define PF_pthread_mutexattr_setprioceiling (* (int (*)(pthread_mutexattr_t *__attr ,int __prioceiling__THROW __nonnull ))    _ptr[20].ptr)

//int pthread_getattr_default_np (pthread_attr_t *__attr)
#define PF_pthread_getattr_default_np (* (int (*)(pthread_attr_t *__attr ))        _ptr[21].ptr)

//int pthread_attr_setinheritsched (pthread_attr_t *__attr,int __inherit)__THROW __nonnull ((1));
#define PF_pthread_attr_setinheritsched (* (int (*)(pthread_attr_t *__attr ,int __inherit__THROW __nonnull ))    _ptr[22].ptr)

//int pthread_attr_setstacksize (pthread_attr_t *__attr,size_t __stacksize)__THROW __nonnull ((1));
#define PF_pthread_attr_setstacksize (* (int (*)(pthread_attr_t *__attr ,size_t __stacksize__THROW __nonnull ))    _ptr[23].ptr)

//int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,const pthread_rwlockattr_t *__restrict__attr) __THROW __nonnull ((1));
#define PF_pthread_rwlock_init (* (int (*)(pthread_rwlock_t *__restrict __rwlock ,const pthread_rwlockattr_t *__restrict__attr __THROW __nonnull ))    _ptr[24].ptr)

//int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *__restrict __attr,int *__restrict __protocol)__THROW __nonnull ((1, 2));
#define PF_pthread_mutexattr_getprotocol (* (int (*)(const pthread_mutexattr_t *__restrict __attr ,int *__restrict __protocol__THROW __nonnull ))    _ptr[25].ptr)

//int pthread_spin_destroy (pthread_spinlock_t *__lock)
#define PF_pthread_spin_destroy (* (int (*)(pthread_spinlock_t *__lock ))          _ptr[26].ptr)

//int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,int __pref) __THROW __nonnull ((1));
#define PF_pthread_rwlockattr_setkind_np (* (int (*)(pthread_rwlockattr_t *__attr ,int __pref __THROW __nonnull ))    _ptr[27].ptr)

//int pthread_attr_getstackaddr (const pthread_attr_t *__restrict__attr, void **__restrict __stackaddr)__THROW __nonnull ((1, 2)) __attribute_deprecated__;/* Set the starting address of the stack of the thread to be created.Depending on whether the stack grows up or down the value must eitherbe higher or lower than all the address in the memory block.  Theminimal size of the block must be PTHREAD_STACK_MIN.  */ int pthread_attr_setstackaddr (pthread_attr_t *__attr,void *__stackaddr)__THROW __nonnull ((1)) __attribute_deprecated__;/* Return the currently used minimal stack size.  */ int pthread_attr_getstacksize (const pthread_attr_t *__restrict__attr, size_t *__restrict __stacksize)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getstackaddr (* (int (*)(const pthread_attr_t *__restrict__attr ,void **__restrict __stackaddr__THROW __nonnull ))    _ptr[28].ptr)

//int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,void **__restrict __stackaddr,size_t *__restrict __stacksize)__THROW __nonnull ((1, 2, 3));
#define PF_pthread_attr_getstack (* (int (*)(const pthread_attr_t *__restrict __attr ,void **__restrict __stackaddr ,size_t *__restrict __stacksize__THROW __nonnull ))    _ptr[29].ptr)

//int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
#define PF_pthread_rwlock_trywrlock (* (int (*)(pthread_rwlock_t *__rwlock ))      _ptr[30].ptr)

//int pthread_attr_getstacksize (const pthread_attr_t *__restrict__attr, size_t *__restrict __stacksize)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getstacksize (* (int (*)(const pthread_attr_t *__restrict__attr ,size_t *__restrict __stacksize__THROW __nonnull ))    _ptr[31].ptr)

//int pthread_attr_setaffinity_np (pthread_attr_t *__attr,size_t __cpusetsize,const cpu_set_t *__cpuset)__THROW __nonnull ((1, 3));
#define PF_pthread_attr_setaffinity_np (* (int (*)(pthread_attr_t *__attr ,size_t __cpusetsize ,const cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[32].ptr)

//int pthread_cond_init (pthread_cond_t *__restrict __cond,const pthread_condattr_t *__restrict __cond_attr)__THROW __nonnull ((1));
#define PF_pthread_cond_init (* (int (*)(pthread_cond_t *__restrict __cond ,const pthread_condattr_t *__restrict __cond_attr__THROW __nonnull ))    _ptr[33].ptr)

//int pthread_setschedprio (pthread_t __target_thread, int __prio)
#define PF_pthread_setschedprio (* (int (*)(pthread_t __target_thread ,int __prio ))    _ptr[34].ptr)

//void pthread_testcancel (void);
#define PF_pthread_testcancel (* (void (*)(void ))                                 _ptr[35].ptr)

//int pthread_attr_getstackaddr (const pthread_attr_t *__restrict__attr, void **__restrict __stackaddr)__THROW __nonnull ((1, 2)) __attribute_deprecated__;/* Set the starting address of the stack of the thread to be created.Depending on whether the stack grows up or down the value must eitherbe higher or lower than all the address in the memory block.  Theminimal size of the block must be PTHREAD_STACK_MIN.  */ int pthread_attr_setstackaddr (pthread_attr_t *__attr,void *__stackaddr)__THROW __nonnull ((1)) __attribute_deprecated__;/* Return the currently used minimal stack size.  */ int pthread_attr_getstacksize (const pthread_attr_t *__restrict__attr, size_t *__restrict __stacksize)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getstackaddr (* (int (*)(const pthread_attr_t *__restrict__attr ,void **__restrict __stackaddr__THROW __nonnull ))    _ptr[36].ptr)

//pthread_t pthread_self (void) __THROW __attribute__ ((__const__));
#define PF_pthread_self (* (pthread_t (*)(void __THROW __attribute__ ))            _ptr[37].ptr)

//int pthread_attr_getinheritsched (const pthread_attr_t *__restrict__attr, int *__restrict __inherit)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getinheritsched (* (int (*)(const pthread_attr_t *__restrict__attr ,int *__restrict __inherit__THROW __nonnull ))    _ptr[38].ptr)

//int pthread_attr_setstackaddr (pthread_attr_t *__attr,void *__stackaddr)__THROW __nonnull ((1)) __attribute_deprecated__;/* Return the currently used minimal stack size.  */ int pthread_attr_getstacksize (const pthread_attr_t *__restrict__attr, size_t *__restrict __stacksize)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_setstackaddr (* (int (*)(pthread_attr_t *__attr ,void *__stackaddr__THROW __nonnull ))    _ptr[39].ptr)

//int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *__restrict __attr,int *__restrict __pref)__THROW __nonnull ((1, 2));
#define PF_pthread_rwlockattr_getkind_np (* (int (*)(const pthread_rwlockattr_t *__restrict __attr ,int *__restrict __pref__THROW __nonnull ))    _ptr[40].ptr)

//int pthread_condattr_setpshared (pthread_condattr_t *__attr,int __pshared) __THROW __nonnull ((1));
#define PF_pthread_condattr_setpshared (* (int (*)(pthread_condattr_t *__attr ,int __pshared __THROW __nonnull ))    _ptr[41].ptr)

//int pthread_mutex_getprioceiling (const pthread_mutex_t *__restrict __mutex,int *__restrict __prioceiling)__THROW __nonnull ((1, 2));
#define PF_pthread_mutex_getprioceiling (* (int (*)(const pthread_mutex_t *__restrict __mutex ,int *__restrict __prioceiling__THROW __nonnull ))    _ptr[42].ptr)

//int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
#define PF_pthread_attr_setscope (* (int (*)(pthread_attr_t *__attr ,int __scope ))    _ptr[43].ptr)

//int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
#define PF_pthread_rwlock_destroy (* (int (*)(pthread_rwlock_t *__rwlock ))        _ptr[44].ptr)

//int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,int __protocol)__THROW __nonnull ((1));
#define PF_pthread_mutexattr_setprotocol (* (int (*)(pthread_mutexattr_t *__attr ,int __protocol__THROW __nonnull ))    _ptr[45].ptr)

//int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,int __pshared)__THROW __nonnull ((1));
#define PF_pthread_rwlockattr_setpshared (* (int (*)(pthread_rwlockattr_t *__attr ,int __pshared__THROW __nonnull ))    _ptr[46].ptr)

//int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __THROW;
#define PF_pthread_tryjoin_np (* (int (*)(pthread_t __th ,void **__thread_return __THROW ))    _ptr[47].ptr)

//int pthread_cond_broadcast (pthread_cond_t *__cond)
#define PF_pthread_cond_broadcast (* (int (*)(pthread_cond_t *__cond ))            _ptr[48].ptr)

//int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,size_t __cpusetsize,cpu_set_t *__cpuset)__THROW __nonnull ((1, 3));
#define PF_pthread_attr_getaffinity_np (* (int (*)(const pthread_attr_t *__attr ,size_t __cpusetsize ,cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[49].ptr)

//int pthread_cond_destroy (pthread_cond_t *__cond)
#define PF_pthread_cond_destroy (* (int (*)(pthread_cond_t *__cond ))              _ptr[50].ptr)

//int pthread_cond_wait (pthread_cond_t *__restrict __cond,pthread_mutex_t *__restrict __mutex)__nonnull ((1, 2));
#define PF_pthread_cond_wait (* (int (*)(pthread_cond_t *__restrict __cond ,pthread_mutex_t *__restrict __mutex__nonnull ))    _ptr[51].ptr)

//int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *__restrict __attr,int *__restrict __prioceiling)__THROW __nonnull ((1, 2));
#define PF_pthread_mutexattr_getprioceiling (* (int (*)(const pthread_mutexattr_t *__restrict __attr ,int *__restrict __prioceiling__THROW __nonnull ))    _ptr[52].ptr)

//int pthread_setconcurrency (int __level) __THROW;
#define PF_pthread_setconcurrency (* (int (*)(int __level __THROW ))               _ptr[53].ptr)

//int pthread_setcanceltype (int __type, int *__oldtype);
#define PF_pthread_setcanceltype (* (int (*)(int __type ,int *__oldtype ))         _ptr[54].ptr)

//void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
#define PF___defer (* (void (*)( { pthread_setcanceltype ))                        _ptr[55].ptr)

//void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
#define PF___restore (* (void (*)( const { pthread_setcanceltype ))                _ptr[56].ptr)

//(void) pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,		      \
#define PF_ (* ( (*)(void pthread_setcanceltype ))                                 _ptr[57].ptr)

//(void) pthread_setcanceltype (__clframe.__cancel_type, NULL);	      \
#define PF_ (* ( (*)(void pthread_setcanceltype ))                                 _ptr[58].ptr)

//int pthread_condattr_setclock (pthread_condattr_t *__attr,__clockid_t __clock_id)__THROW __nonnull ((1));
#define PF_pthread_condattr_setclock (* (int (*)(pthread_condattr_t *__attr ,__clockid_t __clock_id__THROW __nonnull ))    _ptr[59].ptr)

//int pthread_setattr_default_np (const pthread_attr_t *__attr)
#define PF_pthread_setattr_default_np (* (int (*)(const pthread_attr_t *__attr ))    _ptr[60].ptr)

//int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
#define PF_pthread_spin_init (* (int (*)(pthread_spinlock_t *__lock ,int __pshared ))    _ptr[61].ptr)

//int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,pthread_mutex_t *__restrict __mutex,const struct timespec *__restrict __abstime)__nonnull ((1, 2, 3));
#define PF_pthread_cond_timedwait (* (int (*)(pthread_cond_t *__restrict __cond ,pthread_mutex_t *__restrict __mutex ,const struct timespec *__restrict __abstime__nonnull ))    _ptr[62].ptr)

//int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,int *__restrict __scope)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getscope (* (int (*)(const pthread_attr_t *__restrict __attr ,int *__restrict __scope__THROW __nonnull ))    _ptr[63].ptr)

//int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,const struct sched_param *__restrict__param) __THROW __nonnull ((1, 2));
#define PF_pthread_attr_setschedparam (* (int (*)(pthread_attr_t *__restrict __attr ,const struct sched_param *__restrict__param __THROW __nonnull ))    _ptr[64].ptr)

//int pthread_spin_unlock (pthread_spinlock_t *__lock)
#define PF_pthread_spin_unlock (* (int (*)(pthread_spinlock_t *__lock ))           _ptr[65].ptr)

//int pthread_barrierattr_getpshared (const pthread_barrierattr_t *__restrict __attr,int *__restrict __pshared)__THROW __nonnull ((1, 2));
#define PF_pthread_barrierattr_getpshared (* (int (*)(const pthread_barrierattr_t *__restrict __attr ,int *__restrict __pshared__THROW __nonnull ))    _ptr[66].ptr)

//int pthread_mutexattr_getpshared (const pthread_mutexattr_t *__restrict __attr,int *__restrict __pshared)__THROW __nonnull ((1, 2));
#define PF_pthread_mutexattr_getpshared (* (int (*)(const pthread_mutexattr_t *__restrict __attr ,int *__restrict __pshared__THROW __nonnull ))    _ptr[67].ptr)

//int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,const struct timespec *__restrict__abstime) __THROWNL __nonnull ((1, 2));
#define PF_pthread_rwlock_timedrdlock (* (int (*)(pthread_rwlock_t *__restrict __rwlock ,const struct timespec *__restrict__abstime __THROWNL __nonnull ))    _ptr[68].ptr)

//int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,int __pshared)__THROW __nonnull ((1));
#define PF_pthread_mutexattr_setpshared (* (int (*)(pthread_mutexattr_t *__attr ,int __pshared__THROW __nonnull ))    _ptr[69].ptr)

//int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,int *__robustness)__THROW __nonnull ((1, 2));
#define PF_pthread_mutexattr_getrobust (* (int (*)(const pthread_mutexattr_t *__attr ,int *__robustness__THROW __nonnull ))    _ptr[70].ptr)

//int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,int *__robustness)__THROW __nonnull ((1, 2));
#define PF_pthread_mutexattr_getrobust_np (* (int (*)(const pthread_mutexattr_t *__attr ,int *__robustness__THROW __nonnull ))    _ptr[71].ptr)

//int pthread_setschedparam (pthread_t __target_thread, int __policy,const struct sched_param *__param)__THROW __nonnull ((3));
#define PF_pthread_setschedparam (* (int (*)(pthread_t __target_thread ,int __policy ,const struct sched_param *__param__THROW __nonnull ))    _ptr[72].ptr)

//int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
#define PF_pthread_barrierattr_destroy (* (int (*)(pthread_barrierattr_t *__attr ))    _ptr[73].ptr)

//int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
#define PF_pthread_getattr_np (* (int (*)(pthread_t __th ,pthread_attr_t *__attr ))    _ptr[74].ptr)

//int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,int __pshared)__THROW __nonnull ((1));
#define PF_pthread_barrierattr_setpshared (* (int (*)(pthread_barrierattr_t *__attr ,int __pshared__THROW __nonnull ))    _ptr[75].ptr)

//int pthread_attr_setstackaddr (pthread_attr_t *__attr,void *__stackaddr)__THROW __nonnull ((1)) __attribute_deprecated__;/* Return the currently used minimal stack size.  */ int pthread_attr_getstacksize (const pthread_attr_t *__restrict__attr, size_t *__restrict __stacksize)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_setstackaddr (* (int (*)(pthread_attr_t *__attr ,void *__stackaddr__THROW __nonnull ))    _ptr[76].ptr)

//int pthread_attr_setstacksize (pthread_attr_t *__attr,size_t __stacksize)__THROW __nonnull ((1));
#define PF_pthread_attr_setstacksize (* (int (*)(pthread_attr_t *__attr ,size_t __stacksize__THROW __nonnull ))    _ptr[77].ptr)

//int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,size_t __stacksize) __THROW __nonnull ((1));
#define PF_pthread_attr_setstack (* (int (*)(pthread_attr_t *__attr ,void *__stackaddr ,size_t __stacksize __THROW __nonnull ))    _ptr[78].ptr)

//int pthread_setname_np (pthread_t __target_thread, const char *__name)
#define PF_pthread_setname_np (* (int (*)(pthread_t __target_thread ,const char *__name ))    _ptr[79].ptr)

//int pthread_cond_signal (pthread_cond_t *__cond)
#define PF_pthread_cond_signal (* (int (*)(pthread_cond_t *__cond ))               _ptr[80].ptr)

//int pthread_yield (void) __THROW;
#define PF_pthread_yield (* (int (*)(void __THROW ))                               _ptr[81].ptr)

//int pthread_spin_lock (pthread_spinlock_t *__lock)
#define PF_pthread_spin_lock (* (int (*)(pthread_spinlock_t *__lock ))             _ptr[82].ptr)

//int pthread_attr_destroy (pthread_attr_t *__attr)
#define PF_pthread_attr_destroy (* (int (*)(pthread_attr_t *__attr ))              _ptr[83].ptr)

//int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,struct sched_param *__restrict __param)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getschedparam (* (int (*)(const pthread_attr_t *__restrict __attr ,struct sched_param *__restrict __param__THROW __nonnull ))    _ptr[84].ptr)

//int pthread_spin_trylock (pthread_spinlock_t *__lock)
#define PF_pthread_spin_trylock (* (int (*)(pthread_spinlock_t *__lock ))          _ptr[85].ptr)

//int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
#define PF_pthread_barrierattr_init (* (int (*)(pthread_barrierattr_t *__attr ))    _ptr[86].ptr)

//int pthread_mutex_consistent (pthread_mutex_t *__mutex)
#define PF_pthread_mutex_consistent (* (int (*)(pthread_mutex_t *__mutex ))        _ptr[87].ptr)

//int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
#define PF_pthread_mutex_consistent_np (* (int (*)(pthread_mutex_t *__mutex ))     _ptr[88].ptr)

//int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,size_t __cpusetsize,cpu_set_t *__cpuset)__THROW __nonnull ((1, 3));
#define PF_pthread_attr_getaffinity_np (* (int (*)(const pthread_attr_t *__attr ,size_t __cpusetsize ,cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[89].ptr)

//int pthread_barrier_destroy (pthread_barrier_t *__barrier)
#define PF_pthread_barrier_destroy (* (int (*)(pthread_barrier_t *__barrier ))     _ptr[90].ptr)

//int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,int __robustness)__THROW __nonnull ((1));
#define PF_pthread_mutexattr_setrobust (* (int (*)(pthread_mutexattr_t *__attr ,int __robustness__THROW __nonnull ))    _ptr[91].ptr)

//int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,int __robustness)__THROW __nonnull ((1));
#define PF_pthread_mutexattr_setrobust_np (* (int (*)(pthread_mutexattr_t *__attr ,int __robustness__THROW __nonnull ))    _ptr[92].ptr)

//int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
#define PF_pthread_mutexattr_destroy (* (int (*)(pthread_mutexattr_t *__attr ))    _ptr[93].ptr)

//int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,const struct timespec *__restrict__abstime) __THROWNL __nonnull ((1, 2));
#define PF_pthread_rwlock_timedwrlock (* (int (*)(pthread_rwlock_t *__restrict __rwlock ,const struct timespec *__restrict__abstime __THROWNL __nonnull ))    _ptr[94].ptr)

//int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
#define PF_pthread_attr_setschedpolicy (* (int (*)(pthread_attr_t *__attr ,int __policy ))    _ptr[95].ptr)

//int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
#define PF_pthread_rwlockattr_destroy (* (int (*)(pthread_rwlockattr_t *__attr ))    _ptr[96].ptr)

//int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,cpu_set_t *__cpuset)__THROW __nonnull ((3));
#define PF_pthread_getaffinity_np (* (int (*)(pthread_t __th ,size_t __cpusetsize ,cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[97].ptr)

//int pthread_attr_setdetachstate (pthread_attr_t *__attr,int __detachstate)__THROW __nonnull ((1));
#define PF_pthread_attr_setdetachstate (* (int (*)(pthread_attr_t *__attr ,int __detachstate__THROW __nonnull ))    _ptr[98].ptr)

//int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,int __prioceiling,int *__restrict __old_ceiling)__THROW __nonnull ((1, 3));
#define PF_pthread_mutex_setprioceiling (* (int (*)(pthread_mutex_t *__restrict __mutex ,int __prioceiling ,int *__restrict __old_ceiling__THROW __nonnull ))    _ptr[99].ptr)

//int pthread_condattr_getpshared (const pthread_condattr_t *__restrict __attr,int *__restrict __pshared)__THROW __nonnull ((1, 2));
#define PF_pthread_condattr_getpshared (* (int (*)(const pthread_condattr_t *__restrict __attr ,int *__restrict __pshared__THROW __nonnull ))    _ptr[100].ptr)

//int pthread_setcancelstate (int __state, int *__oldstate);
#define PF_pthread_setcancelstate (* (int (*)(int __state ,int *__oldstate ))      _ptr[101].ptr)

//int pthread_getconcurrency (void) __THROW;
#define PF_pthread_getconcurrency (* (int (*)(void __THROW ))                      _ptr[102].ptr)

//int pthread_condattr_init (pthread_condattr_t *__attr)
#define PF_pthread_condattr_init (* (int (*)(pthread_condattr_t *__attr ))         _ptr[103].ptr)

//int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict__attr, int *__restrict __policy)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getschedpolicy (* (int (*)(const pthread_attr_t *__restrict__attr ,int *__restrict __policy__THROW __nonnull ))    _ptr[104].ptr)

//int pthread_getname_np (pthread_t __target_thread, char *__buf,size_t __buflen)__THROW __nonnull ((2));
#define PF_pthread_getname_np (* (int (*)(pthread_t __target_thread ,char *__buf ,size_t __buflen__THROW __nonnull ))    _ptr[105].ptr)

//int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
#define PF_pthread_rwlock_tryrdlock (* (int (*)(pthread_rwlock_t *__rwlock ))      _ptr[106].ptr)

//int pthread_getschedparam (pthread_t __target_thread,int *__restrict __policy,struct sched_param *__restrict __param)__THROW __nonnull ((2, 3));
#define PF_pthread_getschedparam (* (int (*)(pthread_t __target_thread ,int *__restrict __policy ,struct sched_param *__restrict __param__THROW __nonnull ))    _ptr[107].ptr)

//int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict__attr, int *__restrict __kind)__THROW __nonnull ((1, 2));
#define PF_pthread_mutexattr_gettype (* (int (*)(const pthread_mutexattr_t *__restrict__attr ,int *__restrict __kind__THROW __nonnull ))    _ptr[108].ptr)

//int pthread_getcpuclockid (pthread_t __thread_id,__clockid_t *__clock_id)__THROW __nonnull ((2));
#define PF_pthread_getcpuclockid (* (int (*)(pthread_t __thread_id ,__clockid_t *__clock_id__THROW __nonnull ))    _ptr[109].ptr)

//int pthread_attr_setaffinity_np (pthread_attr_t *__attr,size_t __cpusetsize,const cpu_set_t *__cpuset)__THROW __nonnull ((1, 3));
#define PF_pthread_attr_setaffinity_np (* (int (*)(pthread_attr_t *__attr ,size_t __cpusetsize ,const cpu_set_t *__cpuset__THROW __nonnull ))    _ptr[110].ptr)

//int pthread_condattr_getclock (const pthread_condattr_t *__restrict __attr,__clockid_t *__restrict __clock_id)__THROW __nonnull ((1, 2));
#define PF_pthread_condattr_getclock (* (int (*)(const pthread_condattr_t *__restrict __attr ,__clockid_t *__restrict __clock_id__THROW __nonnull ))    _ptr[111].ptr)

//int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *__restrict __attr,int *__restrict __pshared)__THROW __nonnull ((1, 2));
#define PF_pthread_rwlockattr_getpshared (* (int (*)(const pthread_rwlockattr_t *__restrict __attr ,int *__restrict __pshared__THROW __nonnull ))    _ptr[112].ptr)

//int pthread_attr_getdetachstate (const pthread_attr_t *__attr,int *__detachstate)__THROW __nonnull ((1, 2));
#define PF_pthread_attr_getdetachstate (* (int (*)(const pthread_attr_t *__attr ,int *__detachstate__THROW __nonnull ))    _ptr[113].ptr)


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
        {"pthread_exit", nullptr},
        {"thread", nullptr},
        {"pthread_exit", nullptr},
        {"thread", nullptr},
        {"pthread_setaffinity_np", nullptr},
        {"pthread_cond_timedwait", nullptr},
        {"pthread_cond_destroy", nullptr},
        {"pthread_attr_setaffinity_np", nullptr},
        {"pthread_cond_signal", nullptr},
        {"pthread_cond_init", nullptr},
        {"pthread_cond_wait", nullptr},
        {"pthread_self", nullptr},
        {"pthread_getaffinity_np", nullptr},
        {"pthread_attr_getaffinity_np", nullptr},
        {"pthread_cond_broadcast", nullptr},
        {"pthread_rwlockattr_init", nullptr},
        {"pthread_attr_setguardsize", nullptr},
        {"pthread_setaffinity_np", nullptr},
        {"pthread_attr_getguardsize", nullptr},
        {"pthread_condattr_destroy", nullptr},
        {"pthread_mutexattr_setprioceiling", nullptr},
        {"pthread_getattr_default_np", nullptr},
        {"pthread_attr_setinheritsched", nullptr},
        {"pthread_attr_setstacksize", nullptr},
        {"pthread_rwlock_init", nullptr},
        {"pthread_mutexattr_getprotocol", nullptr},
        {"pthread_spin_destroy", nullptr},
        {"pthread_rwlockattr_setkind_np", nullptr},
        {"pthread_attr_getstackaddr", nullptr},
        {"pthread_attr_getstack", nullptr},
        {"pthread_rwlock_trywrlock", nullptr},
        {"pthread_attr_getstacksize", nullptr},
        {"pthread_attr_setaffinity_np", nullptr},
        {"pthread_cond_init", nullptr},
        {"pthread_setschedprio", nullptr},
        {"pthread_testcancel", nullptr},
        {"pthread_attr_getstackaddr", nullptr},
        {"pthread_self", nullptr},
        {"pthread_attr_getinheritsched", nullptr},
        {"pthread_attr_setstackaddr", nullptr},
        {"pthread_rwlockattr_getkind_np", nullptr},
        {"pthread_condattr_setpshared", nullptr},
        {"pthread_mutex_getprioceiling", nullptr},
        {"pthread_attr_setscope", nullptr},
        {"pthread_rwlock_destroy", nullptr},
        {"pthread_mutexattr_setprotocol", nullptr},
        {"pthread_rwlockattr_setpshared", nullptr},
        {"pthread_tryjoin_np", nullptr},
        {"pthread_cond_broadcast", nullptr},
        {"pthread_attr_getaffinity_np", nullptr},
        {"pthread_cond_destroy", nullptr},
        {"pthread_cond_wait", nullptr},
        {"pthread_mutexattr_getprioceiling", nullptr},
        {"pthread_setconcurrency", nullptr},
        {"pthread_setcanceltype", nullptr},
        {"__defer", nullptr},
        {"__restore", nullptr},
        {"pthread_condattr_setclock", nullptr},
        {"pthread_setattr_default_np", nullptr},
        {"pthread_spin_init", nullptr},
        {"pthread_cond_timedwait", nullptr},
        {"pthread_attr_getscope", nullptr},
        {"pthread_attr_setschedparam", nullptr},
        {"pthread_spin_unlock", nullptr},
        {"pthread_barrierattr_getpshared", nullptr},
        {"pthread_mutexattr_getpshared", nullptr},
        {"pthread_rwlock_timedrdlock", nullptr},
        {"pthread_mutexattr_setpshared", nullptr},
        {"pthread_mutexattr_getrobust", nullptr},
        {"pthread_mutexattr_getrobust_np", nullptr},
        {"pthread_setschedparam", nullptr},
        {"pthread_barrierattr_destroy", nullptr},
        {"pthread_getattr_np", nullptr},
        {"pthread_barrierattr_setpshared", nullptr},
        {"pthread_attr_setstackaddr", nullptr},
        {"pthread_attr_setstacksize", nullptr},
        {"pthread_attr_setstack", nullptr},
        {"pthread_setname_np", nullptr},
        {"pthread_cond_signal", nullptr},
        {"pthread_yield", nullptr},
        {"pthread_spin_lock", nullptr},
        {"pthread_attr_destroy", nullptr},
        {"pthread_attr_getschedparam", nullptr},
        {"pthread_spin_trylock", nullptr},
        {"pthread_barrierattr_init", nullptr},
        {"pthread_mutex_consistent", nullptr},
        {"pthread_mutex_consistent_np", nullptr},
        {"pthread_attr_getaffinity_np", nullptr},
        {"pthread_barrier_destroy", nullptr},
        {"pthread_mutexattr_setrobust", nullptr},
        {"pthread_mutexattr_setrobust_np", nullptr},
        {"pthread_mutexattr_destroy", nullptr},
        {"pthread_rwlock_timedwrlock", nullptr},
        {"pthread_attr_setschedpolicy", nullptr},
        {"pthread_rwlockattr_destroy", nullptr},
        {"pthread_getaffinity_np", nullptr},
        {"pthread_attr_setdetachstate", nullptr},
        {"pthread_mutex_setprioceiling", nullptr},
        {"pthread_condattr_getpshared", nullptr},
        {"pthread_setcancelstate", nullptr},
        {"pthread_getconcurrency", nullptr},
        {"pthread_condattr_init", nullptr},
        {"pthread_attr_getschedpolicy", nullptr},
        {"pthread_getname_np", nullptr},
        {"pthread_rwlock_tryrdlock", nullptr},
        {"pthread_getschedparam", nullptr},
        {"pthread_mutexattr_gettype", nullptr},
        {"pthread_getcpuclockid", nullptr},
        {"pthread_attr_setaffinity_np", nullptr},
        {"pthread_condattr_getclock", nullptr},
        {"pthread_rwlockattr_getpshared", nullptr},
        {"pthread_attr_getdetachstate", nullptr},
        {nullptr, nullptr}
    };
    void  *dll_handle;
    if ((dll_handle = dlopen("/usr/lib/x86_64-linux-gnu/libpthread.so", RTLD_LAZY)) == 0)
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
 
