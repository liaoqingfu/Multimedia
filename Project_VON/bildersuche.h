#ifndef BILDERSUCHE_H
#define BILDERSUCHE_H

#include "bildersuche.h"
#include "datenbank.h"
#include <QThread>
#include <String>
#include <vector>
#include <QDirIterator>
#include <QString>
#include <regex>
#include <QFileDialog>
#include <QImage>
#include <QGridLayout>

/**
 * @brief The BilderSuche class ist ein Thread, welcher sich um die Suche aller Bilder kümmert
 *        und diese dann umwandelt von den bisherigen Strings zu QImages
 */
class BilderSuche : public QThread
{
    Q_OBJECT
public:
    /**
     * @brief BilderSuche ist der Konstruktor der Klasse, welcher die Membervariable initialsiert
     * @param str, ist der Bildpfad von dem die Suche starten soll
     */
    BilderSuche(QString str);
    /**
     * @brief run ist der Start des Threads, welcher dem Thread anweist in die
     *        alleGenfundenenBilder()-Funktion zu gehen und in die umwandeln()-Funktion.
     */
    void run();
    /**
     * @brief alleGefundenenBilder sucht alle Bilder, die vom Dateityp jpg sind und speichert die
     *        Pfade in einem Vector vom Typ string
     * @return vector<string> enthält alle Bildpfad, die gefunden sind
     */
    std::vector<std::string> alleGefundenenBilder();
    /**
     * @brief umwandeln, wandelt die gefundenen Bilder in QImages um
     * @param images vom Typ vector<string>, welcher alle Bildpfade enthält
     * @return vector<QImage> enthält alle Bilder, welche in der Aplikation dargestellt werden sollen
     */
    std::vector<QImage*> umwandeln(std::vector<std::string> *images);
private:
    QString m_pfad;
signals:
   void sucheBeenden(std::vector<QImage*> *images);
};

#endif // BILDERSUCHE_H