#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPushButton>
#include <QMainWindow>
#include <QMessageBox>
#include <QSlider>
#include <QMediaPlayer>
#include <QLabel>
#include <QSpinBox>
#include <mainwindow2.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *guzik;
    QSlider *slider;
    QMediaPlayer *player;
    QLabel *label;
    QSpinBox *box;
     QPushButton *newWindow;
     MainWindow2 *m;
public slots:
    void guzik_clicked();
    void newWindow_clicked();

private:
    Ui::MainWindow *ui;



};

#endif // MAINWINDOW_H
