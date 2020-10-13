#include "clouddirectoryviewfactoryplugin.h"
#include "clouddirectoryview.h"

CloudViewFactoryPlugin::CloudViewFactoryPlugin(QObject *parent)
    : Peony::DirectoryViewPluginIface2()
{
}

Peony::PluginInterface::PluginType CloudViewFactoryPlugin::pluginType()
{
    return Peony::PluginInterface::DirectoryViewPlugin2;
}

const QString CloudViewFactoryPlugin::name()
{
    return "Cloud View";
}

const QString CloudViewFactoryPlugin::description()
{
    return "Peony cloud plugin";
}

const QIcon CloudViewFactoryPlugin::icon()
{
    return QIcon::fromTheme("folder");
}

void CloudViewFactoryPlugin::setEnable(bool enable)
{

}

bool CloudViewFactoryPlugin::isEnable()
{
    return true;
}

QString CloudViewFactoryPlugin::viewIdentity()
{
    return name();
}

QString CloudViewFactoryPlugin::viewName()
{
    return name();
}

QIcon CloudViewFactoryPlugin::viewIcon()
{
    return icon();
}

bool CloudViewFactoryPlugin::supportUri(const QString &uri)
{
    return uri == "cloud:///";
}

int CloudViewFactoryPlugin::zoom_level_hint()
{
    return -1;
}

int CloudViewFactoryPlugin::minimumSupportedZoomLevel()
{
    return -1;
}

int CloudViewFactoryPlugin::maximumSupportedZoomLevel()
{
    return -1;
}

int CloudViewFactoryPlugin::priority(const QString &directoryUri)
{
    if (supportUri(directoryUri))
        return 999;
    return -999;
}

bool CloudViewFactoryPlugin::supportZoom()
{
    return false;
}

Peony::DirectoryViewWidget *CloudViewFactoryPlugin::create()
{
    return new CloudDirectoryView;
}
