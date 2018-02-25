#include "film.cpp"
#include "QTextStream"
#include "QFile"

class FilmWriter
{
public:
    void saveFile(Film &f);
};

void FilmWriter::saveFile(Film &f)
{
    QString filename="c:\\film.txt";
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << f.toString() << endl;
    }
}

