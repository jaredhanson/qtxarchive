#ifndef UNARCHIVER_H
#define UNARCHIVER_H

#include <QtCore>


class Unarchiver : public QObject
{
    Q_OBJECT
    
public:
    Unarchiver(QObject *parent = 0);
    Unarchiver(const QString & path, QObject *parent = 0);
    virtual ~Unarchiver();
    
    virtual void unarchive() = 0;
    
    QString path() const;
    QDir intermediateDir() const;
    
    virtual void setIntermediateDir(const QDir &);
    
    QString errorString() const;
    
signals:
    void finished(const QString & path);
    void error(qint32 code);
    
protected:
    void setErrorString(const QString & str);
    
private:
    QString mPath;
    QDir mIntermediateDir;
    QString mErrorString;
};

#endif // UNARCHIVER_H
