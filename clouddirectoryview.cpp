#include "clouddirectoryview.h"
#include "clouddirectoryviewcontent.h"

#include "ui_clouddirectoryview.h"
#include "clouddirectoryviewcontent.h"

#include <QHBoxLayout>

#include <QTimer>

Peony::CloudDirectoryView::CloudDirectoryView(QWidget *parent) : Peony::DirectoryViewWidget(parent)
{
    auto layout = new QHBoxLayout;
    auto content = new CloudDirectoryViewContent(this);
    m_content = content;
    layout->addWidget(content);
    setLayout(layout);

    // let window know view loaded
    // note we need wait a while, because peony does not connect this signal at this time.
    QTimer::singleShot(1000, this, &DirectoryViewWidget::viewDirectoryChanged);
}

const QStringList Peony::CloudDirectoryView::getSelections()
{
    QStringList l;
    return l;
}

void Peony::CloudDirectoryView::bindModel(Peony::FileItemModel *model, Peony::FileItemProxyFilterSortModel *proxyModel)
{
    // do nothing, because cloud is not a 'real' vfs.
}

void Peony::CloudDirectoryView::beginLocationChange()
{
    Q_EMIT viewDirectoryChanged();
}

void Peony::CloudDirectoryView::stopLocationChange()
{
    Q_EMIT viewDirectoryChanged();
}
