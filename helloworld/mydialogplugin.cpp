#include "mydialog.h"
#include "mydialogplugin.h"

#include <QtPlugin>

MydialogPlugin::MydialogPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MydialogPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool MydialogPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MydialogPlugin::createWidget(QWidget *parent)
{
    return new Mydialog(parent);
}

QString MydialogPlugin::name() const
{
    return QLatin1String("Mydialog");
}

QString MydialogPlugin::group() const
{
    return QLatin1String("");
}

QIcon MydialogPlugin::icon() const
{
    return QIcon();
}

QString MydialogPlugin::toolTip() const
{
    return QLatin1String("");
}

QString MydialogPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool MydialogPlugin::isContainer() const
{
    return false;
}

QString MydialogPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Mydialog\" name=\"mydialog\">\n</widget>\n");
}

QString MydialogPlugin::includeFile() const
{
    return QLatin1String("mydialog.h");
}

Q_EXPORT_PLUGIN2(mydialogplugin, MydialogPlugin)
