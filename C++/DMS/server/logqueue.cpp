// 实现日志队列类
#include <iostream>
using namespace std;
#include "logqueue.h"
#define MAX_LOGS (1024*1024)
LogQueue g_logQueue;
// 构造器
LogQueue::LogQueue (void) {
	// 创建同步互斥量
	pthread_mutex_init (&m_mutex, 0);
	// 创建非满条件量
	pthread_cond_init (&m_full, 0);
	// 创建非空条件量
	pthread_cond_init (&m_empty, 0);
}
// 析构器
LogQueue::~LogQueue (void) {
	// 销毁非空条件量
	pthread_cond_destroy (&m_empty);
	// 销毁非满条件量
	pthread_cond_destroy (&m_full);
	// 销毁同步互斥量
	pthread_mutex_destroy (&m_mutex);
}
// 压入日志记录
LogQueue& LogQueue::operator<< (MLogRec const& log) {
	cout << "压入日志记录开始..." << endl;
	pthread_mutex_lock (&m_mutex);
	while (m_logs.size () >= MAX_LOGS) {
		cout << "等待日志队列非满..." << endl;
		pthread_cond_wait (&m_full, &m_mutex);
	}
	m_logs.push_back (log);
	pthread_cond_signal (&m_empty);
	pthread_mutex_unlock (&m_mutex);
	cout << "压入日志记录完成。" << endl;
	return *this;
}
// 弹出日志记录
LogQueue& LogQueue::operator>> (MLogRec& log) {
	cout << "弹出日志记录开始..." << endl;
	pthread_mutex_lock (&m_mutex);
	while (m_logs.empty ()) {
		cout << "等待日志队列非空..." << endl;
		pthread_cond_wait (&m_empty, &m_mutex);
	}
	log = m_logs.front ();
	m_logs.pop_front ();
	pthread_cond_signal (&m_full);
	pthread_mutex_unlock (&m_mutex);
	cout << "弹出日志记录完成。" << endl;
	return *this;
}
