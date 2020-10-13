#include "clouddirectoryviewcontent.h"
#include "ui_clouddirectoryview.h"

#include "clouddirectoryview.h"

#include <QFileDialog>

CloudDirectoryViewContent::CloudDirectoryViewContent(CloudDirectoryView *parent) :
    QWidget(parent),
    ui(new Ui::CloudDirectoryViewContent)
{
    ui->setupUi(this);

    m_view = parent;
}

CloudDirectoryViewContent::~CloudDirectoryViewContent()
{
    delete ui;
}

void CloudDirectoryViewContent::on_pushButton_2_clicked()
{
    auto uri = "/home/";
        m_view->updateWindowLocationRequest(uri);
}
