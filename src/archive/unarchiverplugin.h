#ifndef UNARCHIVERPLUGIN_H
#define UNARCHIVERPLUGIN_H

#include <QtCore>

class Unarchiver;

class UnarchiverPlugin
{
public:
    virtual ~UnarchiverPlugin() {};
    
    virtual Unarchiver *create(const QString & path, QObject *parent = 0) = 0;

    virtual QStringList mimeTypes();
};

#endif // UNARCHIVERPLUGIN_H
