#ifndef tcstockinfodlg_h

#define tcstockinfodlg_h

#include <QtCore/QVariant>
#include <QtGui/QDialog>
#include "ui_stockinfodlg.h"

#include "tcstock.h"
#include "tcmarket.h"

/*! \brief tcStockInfoDialog
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.04
 	
	��ʾ��༭ tcStock ��Ϣ�ĶԻ���
*/
class tcStockInfoDialog : public QDialog, private Ui_tcStockInfoDialog
{
	Q_OBJECT

public:
	tcStockInfoDialog(QWidget *pParent, tcMarket *pMarket, bool pAppendMode);

	bool LoadFromStock(tcStock *pStock);

	bool SaveToStock(tcStock *pStock);

protected slots:
	void DoOk();

private:
	tcMarket *mMarket;

	bool mAppendMode;

};

#endif //tcstockinfodlg_h
