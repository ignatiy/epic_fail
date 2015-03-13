#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include "counter.h"
#include <QMainWindow>
#include <ui_mainwindow.h>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    app.setApplicationDisplayName("Демо версия счетчика");
    Ui::MainWindow mainWindow;
    QMainWindow * window = new QMainWindow;


    QPushButton * pbtn = new QPushButton;
      pbtn->setGeometry(100,100,100,50);
       pbtn->setParent(window);
       pbtn->setText("Нажать");


       QLabel * lbl = new QLabel;
       lbl->setGeometry(100,70,100,25);
        lbl->setParent(window);
        lbl->setText("0");

        QLabel * lbel = new QLabel;
        lbel->setGeometry(60,150,330,30);
         lbel->setParent(window);
         lbel->setText("Жмите на пробел для действия.По клику пока не реализовали");


       mainWindow.setupUi(window);
        window->show();





  /*QMainWindow::create(QLabel);
    QLabel *lbl=new QLabel("0");

    QPushButton *pbtn=new QPushButton("считать");
    Counter count;
   // lbl->show();

   // pbtn->show(); */
        Counter count;
    QObject::connect(pbtn,SIGNAL(clicked()),&count,SLOT(slotInc()));
    QObject::connect(&count,SIGNAL(countChanged(int)),lbl,SLOT(setNum(int)));
    QObject::connect(&count,SIGNAL(goodbye()),&app,SLOT(quit()));
    return app.exec();
}

