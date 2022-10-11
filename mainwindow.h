#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "player_vs_computer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    std::unique_ptr<player_vs_computer> pvc = std::make_unique<player_vs_computer>();
};
#endif // MAINWINDOW_H
