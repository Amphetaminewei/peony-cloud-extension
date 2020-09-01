#include "mockupdirectoryviewcontent.h"
#include "ui_mockupdirectoryviewcontent.h"

#include "mockupdirectoryview.h"

#include <QFileDialog>

MockupDirectoryViewContent::MockupDirectoryViewContent(MockupDirectoryView *parent) :
    QWidget(parent),
    ui(new Ui::MockupDirectoryViewContent)
{
    ui->setupUi(this);

    m_view = parent;
}

MockupDirectoryViewContent::~MockupDirectoryViewContent()
{
    delete ui;
}

void MockupDirectoryViewContent::on_pushButton_2_clicked()
{
    auto uri = "/usr/bin/";
        m_view->updateWindowLocationRequest(uri);
}
