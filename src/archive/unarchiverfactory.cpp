#include "unarchiverfactory.h"
#include "unarchiverplugin.h"

QTX_BEGIN_NAMESPACE


void UnarchiverFactory::registerPlugin(UnarchiverPlugin *plugin)
{
    mPlugins.prepend(plugin);
}

Unarchiver * UnarchiverFactory::create(const QString & path, QObject *parent /* = 0 */)
{
    foreach (UnarchiverPlugin *plugin, mPlugins) {
        Unarchiver *unarchiver = plugin->create(path, parent);
        if (unarchiver) { return unarchiver; }
    }
    return 0;
}

QStringList UnarchiverFactory::mimeTypes()
{
    QStringList types;
    foreach (UnarchiverPlugin *plugin, mPlugins) {
        types.append(plugin->mimeTypes());
    }
    return types;
}


QList<UnarchiverPlugin *> UnarchiverFactory::mPlugins;


QTX_END_NAMESPACE
