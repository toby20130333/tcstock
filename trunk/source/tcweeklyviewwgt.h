#ifndef tcweeklyviewwgt_h

#define tcweeklyviewwgt_h

#include <QtCore/QVariant>
#include <QtGui/QWidget>

#include "stock/tcstockpack.h"
#include "viewmodel/tcviewmodelpack.h"
#include "stockview/tcstockviewpack.h"

/*! \brief tcWeeklyViewWidget
 	\author tony (http://www.tonixsoft.com)
 	\version 0.01
 	\date 2006.12.28
 	
	�������·�����K����ͼ��塣
*/
class tcWeeklyViewWidget : public QWidget
{
	Q_OBJECT

public:
	tcWeeklyViewWidget(QWidget *pParent);

	void LoadStockInfoList(tcStockInfoList *pStockInfoList);

	void SetViewMode(int pModeIndex);

protected slots:
	void DoViewModeChanged(int pIndex);

private:
	tcViewModel *mWeeklyViewModel;

	tcStockScene *mWeeklyViewScene;

	tcStockView *mWeeklyView;

};

#endif //tcweeklyviewwgt_h