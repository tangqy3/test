#ifndef _CLIENTDLG_H
#define _CLIENTDLG_H
#include <QDialog>
#include "workthread.h"
class QTextBrowser;
class ClientDlg : public QDialog {
	Q_OBJECT
public:
	ClientDlg (void);
public slots:
	void onStart (void);
	void onUpdate (QString text);
private:
	QTextBrowser* m_browser;
	WorkThread m_work;
};
#endif // _CLIENTDLG_H
