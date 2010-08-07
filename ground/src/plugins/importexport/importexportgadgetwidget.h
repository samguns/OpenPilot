#ifndef IMPORTEXPORTGADGETWIDGET_H
#define IMPORTEXPORTGADGETWIDGET_H

#include <QWidget>
#include <QString>
#include "importexport_global.h"

namespace Ui {
    class ImportExportGadgetWidget;
}

class IMPORTEXPORT_EXPORT ImportExportGadgetWidget : public QWidget {
    Q_OBJECT
public:
    ImportExportGadgetWidget(QWidget *parent = 0);
    ~ImportExportGadgetWidget();

    void setDialFile(const QString& filename);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ImportExportGadgetWidget *ui;
    void writeError(const QString&) const;
    void exportConfiguration(const QString& fileName);
    void importConfiguration(const QString& fileName);

private slots:
    void on_importButton_clicked();
    void on_exportButton_clicked();
};

#endif // IMPORTEXPORTGADGETWIDGET_H