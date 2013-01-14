#ifndef UNARCHIVERFACTORY_H
#define UNARCHIVERFACTORY_H

#include "archiveglobal.h"
#include <QtCore>

QTX_BEGIN_NAMESPACE


class Unarchiver;
class UnarchiverPlugin;

class UnarchiverFactory
{
public:
    static void registerPlugin(UnarchiverPlugin *plugin);
    static Unarchiver *create(const QString & path, QObject *parent = 0);
    
    static QStringList mimeTypes();
    
private:
    static QList<UnarchiverPlugin *> mPlugins;
};


QTX_END_NAMESPACE

#endif // UNARCHIVERFACTORY_H
