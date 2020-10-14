#ifndef CLOUDDIRECTORYVIEW_H
#define CLOUDDIRECTORYVIEW_H

#include <peony-qt/controls/directory-view/directory-view-widget.h>

class CloudDirectoryViewContent;

namespace Peony {

class CloudDirectoryView : public Peony::DirectoryViewWidget
{
    friend class CloudDirectoryViewContent;
    Q_OBJECT
public:
    explicit CloudDirectoryView(QWidget *parent = nullptr);

    // must implement.
    const QString viewId() override {return "Cloud View";}
    const QString getDirectoryUri() {return "cloud:///";}

    // need implement.
    const QStringList getSelections();

    // optional
    void bindModel(Peony::FileItemModel *model, Peony::FileItemProxyFilterSortModel *proxyModel);

private:
    CloudDirectoryViewContent *m_content;

public Q_SLOTS:
    // location, fix blocking when forbid forbid thumbnailing in cloud plugin
    virtual void setDirectoryUri(const QString &uri) {}
    virtual void beginLocationChange();
    virtual void stopLocationChange();
};

}
#endif // CLOUDDIRECTORYVIEW_H
