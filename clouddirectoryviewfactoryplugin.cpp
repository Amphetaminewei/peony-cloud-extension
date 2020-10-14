#include "clouddirectoryviewfactoryplugin.h"
#include "clouddirectoryview.h"

Peony::CloudViewFactoryPlugin::CloudViewFactoryPlugin(QObject *parent)
    : Peony::DirectoryViewPluginIface2()
{
}

Peony::PluginInterface::PluginType Peony::CloudViewFactoryPlugin::pluginType()
{
    return Peony::PluginInterface::DirectoryViewPlugin2;
}

const QString Peony::CloudViewFactoryPlugin::name()
{
    return "Cloud View";
}

const QString Peony::CloudViewFactoryPlugin::description()
{
    return "Peony cloud plugin";
}

const QIcon Peony::CloudViewFactoryPlugin::icon()
{
    return QIcon::fromTheme("folder");
}

void Peony::CloudViewFactoryPlugin::setEnable(bool enable)
{

}

bool Peony::CloudViewFactoryPlugin::isEnable()
{
    return true;
}

QString Peony::CloudViewFactoryPlugin::viewIdentity()
{
    return name();
}

QString Peony::CloudViewFactoryPlugin::viewName()
{
    return name();
}

QIcon Peony::CloudViewFactoryPlugin::viewIcon()
{
    return icon();
}

bool Peony::CloudViewFactoryPlugin::supportUri(const QString &uri)
{
    return uri == "cloud:///";
}

int Peony::CloudViewFactoryPlugin::zoom_level_hint()
{
    return -1;
}

int Peony::CloudViewFactoryPlugin::minimumSupportedZoomLevel()
{
    return -1;
}

int Peony::CloudViewFactoryPlugin::maximumSupportedZoomLevel()
{
    return -1;
}

int Peony::CloudViewFactoryPlugin::priority(const QString &directoryUri)
{
    if (supportUri(directoryUri))
        return 999;
    return -999;
}

bool Peony::CloudViewFactoryPlugin::supportZoom()
{
    return false;
}

Peony::DirectoryViewWidget* Peony::CloudViewFactoryPlugin::create()
{
    return new CloudDirectoryView;
}
