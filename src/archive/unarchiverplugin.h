#ifndef UNARCHIVERPLUGIN_H
#define UNARCHIVERPLUGIN_H

#include "archiveglobal.h"
#include <QtCore>

QTX_BEGIN_NAMESPACE


class Unarchiver;

class UnarchiverPlugin
{
public:
    virtual ~UnarchiverPlugin() {};
    
    virtual Unarchiver *create(const QString & path, QObject *parent = 0) = 0;

    virtual QStringList mimeTypes();
};


QTX_END_NAMESPACE

#endif // UNARCHIVERPLUGIN_H
