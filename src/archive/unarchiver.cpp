#include "unarchiver.h"

QTX_BEGIN_NAMESPACE


/*!
    Constructs an unarchiver with the given \a parent.
 */
Unarchiver::Unarchiver(QObject *parent /* = 0 */)
    : QObject(parent)
{
}

Unarchiver::Unarchiver(const QString & path, QObject *parent /* = 0 */)
    : QObject(parent),
      mPath(path)
{
}

/*!
    Destroys the unarchiver.
 */
Unarchiver::~Unarchiver()
{
}

/*!
    Returns the path of the archive file.
 */
QString Unarchiver::path() const
{
    return mPath;
}

/*!
    Returns the directory in which intermediate files are stored.
 */
QDir Unarchiver::intermediateDir() const
{
    return mIntermediateDir;
}

void Unarchiver::setIntermediateDir(const QDir & dir)
{
    mIntermediateDir = dir;
}

QString Unarchiver::errorString() const
{
    return mErrorString;
}

void Unarchiver::setErrorString(const QString & str)
{
    mErrorString = str;
}


QTX_END_NAMESPACE
