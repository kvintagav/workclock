#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H


#include <QDialog>

class QLineEdit;
// ======================================================================
class InputDialog : public QDialog {
    Q_OBJECT
    private:

    public:
    InputDialog(QWidget* pwgt = 0);

};
#endif // INPUTDIALOG_H
