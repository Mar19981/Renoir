#include "EdgeDetectionDialog.h"
namespace renoir
{
	EdgeDetectionDialog::EdgeDetectionDialog(QPixmap& img, QWidget* parent): map(img)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendFilter(Filter*)), parent, SLOT(receiveFilter(Filter*)));
	}
	EdgeDetectionDialog::~EdgeDetectionDialog()
	{
	}
	void EdgeDetectionDialog::on_okButton_clicked()
	{
		EdgeDetection* detect = new EdgeDetection(map, static_cast<Edges>(ui.axisBox->currentIndex()));
		emit sendFilter(detect);
	}
}