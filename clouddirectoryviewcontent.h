#ifndef CLOUDDIRECTORYVIEWCONTENT_H
#define CLOUDDIRECTORYVIEWCONTENT_H

#include <QWidget>

class CloudDirectoryView;

namespace Ui {
class CloudDirectoryViewContent;
}

class CloudDirectoryViewContent : public QWidget
{
    friend class CloudDirectoryView;
    Q_OBJECT

public:
    explicit CloudDirectoryViewContent(CloudDirectoryView *parent = nullptr);
    ~CloudDirectoryViewContent();

private slots:
    void on_pushButton_2_clicked();


private:
    Ui::CloudDirectoryViewContent *ui;

    CloudDirectoryView *m_view;
};

#endif // CLOUDDIRECTORYVIEWCONTENT_H
