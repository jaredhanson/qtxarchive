#ifndef UNARCHIVERFACTORY_H
#define UNARCHIVERFACTORY_H

#include <QtCore>


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

#endif // UNARCHIVERFACTORY_H
