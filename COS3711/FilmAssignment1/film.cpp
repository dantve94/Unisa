
#include <QString>
#include <QDate>

class Film
{

private:
    QString title;
    int duration;
    QString directory;
    QDate releaseDate;

public: Film(QString t,int dur,QString dir,QDate r);
    Film();
    QString getTitle() const;
    void setTitle(const QString &value);
    int getDuration() const;
    void setDuration(int value);
    QString getDirectory() const;
    void setDirectory(const QString &value);
    QDate getReleaseDate() const;
    void setReleaseDate(const QDate &value);
    QString toString();
};

Film::Film(QString t,int dur,QString dir,QDate r){
    directory=dir;
    duration=dur;
    releaseDate=r;
    title=t;
}

Film::Film(){}


int Film::getDuration() const
{
    return duration;
}

void Film::setDuration(int value)
{
    duration = value;
}

QString Film::getDirectory() const
{
    return directory;
}

void Film::setDirectory(const QString &value)
{
    directory = value;
}

QDate Film::getReleaseDate() const
{
    return releaseDate;
}

void Film::setReleaseDate(const QDate &value)
{
    releaseDate = value;
}
QString Film::getTitle() const
{
    return title;
}

void Film::setTitle(const QString &value)
{
    title = value;
}

QString Film::toString()
{
    return "Title: "+title+" Duration: "+QString::number(duration)+" Release Date: "
            +releaseDate.toString()+" Directory: "+directory;
}
