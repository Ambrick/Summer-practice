#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include <QTextCodec>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int color=0;
void MainWindow::on_pushButton_clicked()
{

    if (color==2)
    {
      ui->pushButton->setStyleSheet("background-color:green");
      color=0;
    }

    if (color==1)
    {
      ui->pushButton->setStyleSheet("background-color:red");
      color=2;
    }
    if (color==0)
    {
      ui->pushButton->setStyleSheet("background-color:yellow");
      color=1;
    }
    QFile file("D:\\ticket1.txt");
       if(file.open(QIODevice::ReadOnly |QIODevice::Text))
       {
           while(!file.atEnd())
           {
               //читаем строку
               QString str = file.readLine();
               //Делим строку на слова разделенные пробелом
               QStringList lst = str.split(" ");
                 // выводим первых три слова
               ui->info->setText(lst.at(0));//<< lst.at(1)<<lst.at(2);
               ui->info2->setText(lst.at(1));
               ui->info3->setText(lst.at(3));
               ui->info4->setText(lst.at(4));
               ui->info5->setText(lst.at(5));
               ui->info6->setText(lst.at(6));
               ui->info7->setText(lst.at(7));
           }

       }
       file.close();
}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{

}

void MainWindow::on_pushButton_5_clicked()
{

}

void MainWindow::on_pushButton_6_clicked()
{

}

void MainWindow::on_pushButton_7_clicked()
{

}

void MainWindow::on_pushButton_8_clicked()
{

}

void MainWindow::on_pushButton_9_clicked()
{

}

void MainWindow::on_pushButton_10_clicked()
{

}

void MainWindow::on_pushButton_11_clicked()
{

}

void MainWindow::on_pushButton_12_clicked()
{

}

void MainWindow::on_pushButton_13_clicked()
{

}

void MainWindow::on_pushButton_14_clicked()
{

}

void MainWindow::on_pushButton_15_clicked()
{

}

void MainWindow::on_pushButton_16_clicked()
{

}

void MainWindow::on_businessklassticket1_clicked()
{

}

void MainWindow::on_businessklassticket2_clicked()
{

}

void MainWindow::on_businessklassticket3_clicked()
{

}

void MainWindow::on_businessklassticket4_clicked()
{

}

void MainWindow::on_ticketdataok_clicked()
{
  //  QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
    QString klass = ui->klass->text(); //запись в klass данных, которые ввел пользователь в окно "Klass"
    QString numberticket = ui->numberticket->text();
    QString date = ui->date->text();
    QString time = ui->time->text();
    QString flight = ui->flight->text();
    QString price = ui->price->text();
    QString name = ui->nameline->text();
    QString surname = ui->surnameline->text();
    //if ((klass=='business' && numberticket>4)||(klass=='business' && numberticket<=0)) bool error=true;
    //if ((klass=='business' && numberticket>16)||((klass=='business' && numberticket<=0))) error=true;

    if(klass=="business" && numberticket=="1")
            {
            QFile file1("D:\\ticket1.txt");
            file1.open( QIODevice :: WriteOnly | QIODevice::Text);
            QTextStream writer (&file1);
            writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
            file1.close();
    }
    if(klass=="business" && numberticket=="2")
            {
            QFile file2("D:\\ticket2.txt");
            file2.open( QIODevice :: WriteOnly | QIODevice::Text);
            QTextStream writer (&file2);
            writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file2.close();
    }
    if(klass=="business" && numberticket=="3")
            {
            QFile file3("D:\\ticket3.txt");
            file3.open( QIODevice :: WriteOnly | QIODevice::Text);
            QTextStream writer (&file3);
            writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file3.close();
    }
    if(klass=="business" && numberticket=="4")
            {
            QFile file4("D:\\ticket4.txt");
            file4.open( QIODevice :: WriteOnly | QIODevice::Text);
            QTextStream writer (&file4);
            writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file4.close();
    }
    if (klass=="economy" && numberticket=="1")
    {
        QFile file5("D:\\ticket5.txt");
        file5.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file5);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file5.close();
    }
    if (klass=="economy" && numberticket=="2")
    {
        QFile file6("D:\\ticket6.txt");
        file6.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file6);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file6.close();
    }
    if (klass=="economy" && numberticket=="3")
    {
        QFile file7("D:\\ticket7.txt");
        file7.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file7);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file7.close();
    }
    if (klass=="economy" && numberticket=="4")
    {
        QFile file8("D:\\ticket8.txt");
        file8.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file8);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file8.close();
    }
    if (klass=="economy" && numberticket=="5")
    {
        QFile file9("D:\\ticket9.txt");
        file9.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file9);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file9.close();
    }
    if (klass=="economy" && numberticket=="6")
    {
        QFile file10("D:\\ticket10.txt");
        file10.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file10);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file10.close();
    }
    if (klass=="economy" && numberticket=="7")
    {
        QFile file11("D:\\ticket11.txt");
        file11.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file11);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file11.close();
    }
    if (klass=="economy" && numberticket=="8")
    {
        QFile file12("D:\\ticket12.txt");
        file12.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file12);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file12.close();
    }
    if (klass=="economy" && numberticket=="9")
    {
        QFile file13("D:\\ticket13.txt");
        file13.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file13);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file13.close();
    }
    if (klass=="economy" && numberticket=="10")
    {
        QFile file14("D:\\ticket14.txt");
        file14.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file14);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
         file14.close();
    }
    if (klass=="economy" && numberticket=="11")
    {
        QFile file15("D:\\ticket15.txt");
        file15.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file15);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
        file15.close();
    }
    if (klass=="economy" && numberticket=="12")
    {
        QFile file16("D:\\ticket16.txt");
        file16.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file16);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
        file16.close();
    }
    if (klass=="economy" && numberticket=="13")
    {
        QFile file17("D:\\ticket17.txt");
        file17.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file17);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
        file17.close();
    }
    if (klass=="economy" && numberticket=="14")
    {
        QFile file18("D:\\ticket18.txt");
        file18.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file18);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
        file18.close();
    }
    if (klass=="economy" && numberticket=="15")
    {
        QFile file19("D:\\ticket19.txt");
        file19.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file19);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file19.close();
    }
    if (klass=="economy" && numberticket=="16")
    {
        QFile file20("D:\\ticket20.txt");
        file20.open( QIODevice :: WriteOnly | QIODevice::Text);
        QTextStream writer (&file20);
        writer <<name<<" "<<surname<<" "<< klass<<" "<<numberticket<<" "<<date<<" "<<time<<" "<<flight<<" "<<price;
    file20.close();
    }

}

void MainWindow::on_dateTimeEdit_dateChanged(const QDate &date)
{

}
