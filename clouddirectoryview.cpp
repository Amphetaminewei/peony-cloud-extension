#include "clouddirectoryview.h"
#include "clouddirectoryviewcontent.h"

#include "ui_clouddirectoryview.h"

#include <QHBoxLayout>

#include <QTimer>

MockupDirectoryView::MockupDirectoryView(QWidget *parent) : Peony::DirectoryViewWidget(parent)
{
    auto layout = new QHBoxLayout;
    auto content = new MockupDirectoryViewContent(this);
    m_content = content;
    layout->addWidget(content);
    setLayout(layout);

    // let window know view loaded
    // note we need wait a while, because peony does not connect this signal at this time.
    QTimer::singleShot(1000, this, &DirectoryViewWidget::viewDirectoryChanged);
}

const QStringList MockupDirectoryView::getSelections()
{
    QStringList l;
    return l;
}

void MockupDirectoryView::bindModel(Peony::FileItemModel *model, Peony::FileItemProxyFilterSortModel *proxyModel)
{
    // do nothing, because mockup is not a 'real' vfs.
}
