#ifndef CLOUDDIRECTORYVIEWCONTENT_H
#define CLOUDDIRECTORYVIEWCONTENT_H

#include <QWidget>

#include "clouddirectoryview.h"

class CloudDirectoryView;

namespace Ui {
class CloudDirectoryViewContent;
}

class CloudDirectoryViewContent : public QWidget
{
    friend class CloudDirectoryView;
    Q_OBJECT

public:
    explicit CloudDirectoryViewContent(Peony::CloudDirectoryView *parent = nullptr);
    ~CloudDirectoryViewContent();

private Q_SLOTS:
    void on_pushButton_2_clicked();


private:
    Ui::CloudDirectoryViewContent *ui;

    Peony::CloudDirectoryView *m_view;
};

#endif // CLOUDDIRECTORYVIEWCONTENT_H
