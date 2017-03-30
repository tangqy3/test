// 声明线程类
#ifndef _LOGTHREAD_H
#define _LOGTHREAD_H
#include "except.h"
// 线程
class LogThread {
public:
	virtual ~LogThread (void) {}
	// 启动线程
	void start (void) throw (ThreadException);
private:
	// 线程过程
	static void* run (void* arg);
	// 线程处理
	virtual void run (void) = 0;
};
#endif // _LOGTHREAD_H
