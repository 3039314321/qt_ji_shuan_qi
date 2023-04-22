#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("简易计算器");
    setWindowIcon(QIcon(":/icoa.ico"));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qshow = qshow + "1";
    temp = temp + "1";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_2_clicked()
{
    qshow = qshow + "2";
    temp = temp + "2";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_3_clicked()
{
    qshow = qshow + "3";
    temp = temp + "3";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_4_clicked()
{
    qshow = qshow + "4";
    temp = temp + "4";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_5_clicked()
{
    qshow = qshow + "5";
    temp = temp + "5";

    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_6_clicked()
{
    qshow = qshow + "6";
    temp = temp + "6";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_7_clicked()
{
    qshow = qshow + "7";
    temp = temp + "7";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_8_clicked()
{
    qshow = qshow + "8";
    temp = temp + "8";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_9_clicked()
{
    qshow = qshow + "9";
    temp = temp + "9";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_23_clicked()
{
    qshow = qshow + "0";
    temp = temp + "0";
    ui->label->setText(qshow);


}

void MainWindow::on_pushButton_10_clicked()
{
    qshow = qshow + ".";
    temp = temp + ".";
    ui->label->setText(qshow);

}

void MainWindow::on_pushButton_14_clicked()
{
    if(temp!="")
    {
        qshow = qshow + "+";
        ui->label->setText(qshow);
        sz[i]=temp;
        temp="";
        i=i+1;
        sz[i]="+";
        i=i+1;
    }
    else
    {
        qshow = qshow + "+";
        ui->label->setText(qshow);
        sz[i]="+";
        i=i+1;
    }


}

void MainWindow::on_pushButton_15_clicked()
{
    if(temp!="")
    {
        qshow = qshow + "-";
        ui->label->setText(qshow);
        sz[i]=temp;
        temp="";
        i=i+1;
        sz[i]="-";
        i=i+1;
    }
    else
    {
        qshow = qshow + "-";
        ui->label->setText(qshow);
        sz[i]="-";
        i=i+1;
    }



}

void MainWindow::on_pushButton_12_clicked()
{
    if(temp!="")
    {
        qshow = qshow + "*";
        ui->label->setText(qshow);
        sz[i]=temp;
        temp="";
        i=i+1;
        sz[i]="*";
        i=i+1;
    }
    else
    {
        qshow = qshow + "*";
        ui->label->setText(qshow);
        sz[i]="*";
        i=i+1;
    }



}

void MainWindow::on_pushButton_13_clicked()
{
    if(temp!="")
    {
        qshow = qshow + "/";
        ui->label->setText(qshow);
        sz[i]=temp;
        temp="";
        i=i+1;
        sz[i]="/";
        i=i+1;
    }
    else
    {
        qshow = qshow + "/";
        ui->label->setText(qshow);
        sz[i]="/";
        i=i+1;
    }


}

void MainWindow::on_pushButton_11_clicked()
{
    if(judge == 0)
    {

    if(temp!="")
    {
        qshow = qshow + "=";
        ui->label->setText(qshow);
        sz[i]=temp;
        temp="";
        i=i+1;
        judge = 1;
        double temp1;
        temp1 =MainWindow::line(i);
        qshow = qshow + QString::number(temp1);
        ui->label->setText(qshow);
    }
    else
    {
        qshow = qshow + "=";
        ui->label->setText(qshow);
          judge = 1;
          double temp1;
          temp1 =MainWindow::line(i);
          qshow = qshow + QString::number(temp1);
          ui->label->setText(qshow);
    }
    }

}

double MainWindow::line(int flag)
{
    for(j=1;j<flag;j++)
    {
         if(sz[j]!="+"&&sz[j]!="-"&&sz[j]!="*"&&sz[j]!="/"&&sz[j]!=")"&&sz[j]!="(")
        {
            sz1[k]=sz[j];
            k=k+1;
        }
        else if(sz[j]=="+")
                {

             while(sz2[t-1]=="/"||sz2[t-1]=="*")
                              {
                                  sz1[k]=sz2[t-1];
                                  k++;
                                  t=t-1;
                              }
                  if(sz2[t-1]==sz2[99])
                    {
                        sz2[t]="+";t++;
                    }
                    else if(sz2[t-1]=="+"||sz2[t-1]=="-"||sz2[t-1]=="(")
                            {
                                 sz2[t]="+";t++;
                            }
                    else if(sz2[t-1]=="/"||sz2[t-1]=="*")
                            {
                                sz1[k]=sz2[t-1];
                                sz2[t-1]="+";
                                k++;

                    }
                  }
        else if(sz[j]=="-")
                {
                 while(sz2[t-1]=="/"||sz2[t-1]=="*")
                 {
                     sz1[k]=sz2[t-1];
                     k++;
                     t=t-1;
                 }

                    if(sz2[t-1]==sz2[99])
                   {
                        sz2[t]="-";t++;// if if  & else if
                    }

                    else if(sz2[t-1]=="+"||sz2[t-1]=="-"||sz2[t-1]=="(")
                            {
                                 sz2[t]="-";t++;
                            }
                    else if(sz2[t-1]=="/"||sz2[t-1]=="*")
                            {
                                sz1[k]=sz2[t-1];
                                sz2[t-1]="-";
                                k++;
                            }

                  }
        else if(sz[j]=="*")
        {
            if(sz2[t-1]==sz2[99])
                {
                sz2[t] = "*";t++;
                }
            else if(sz2[t-1]=="+"||sz2[t-1]=="-"||sz2[t-1]=="(")
            {
                sz2[t] = "*";t++;
            }
            else if (sz2[t-1]=="*"||sz2[t-1]=="/")
                    {
                        sz2[t] = "*";t++;
                    }
        }
         else if(sz[j]=="/")
         {
             if(sz2[t-1]==sz2[99])// vitual
                 {
                 sz2[t] = "/";t++;
                 }
             else if(sz2[t-1]=="+"||sz2[t-1]=="-"||sz2[t-1]=="(")
             {
                 sz2[t] = "/";t++;
             }
             else if (sz2[t-1]=="*"||sz2[t-1]=="/")
                     {
                         sz2[t] = "/";t++;
                     }
         }
        else if(sz[j]=="(")
                {
                     sz2[t]="(";
                     t++;
                }
        else if(sz[j]==")")
                {
                    while(sz2[t-1]!="(")
                    {
                         sz1[k]=sz2[t-1];
                        t--;
                        k++;
                    }
                    t--;
                }

    }
          int time;

          for(time =t-1;time>=1;time-- )
          {
              sz1[k]=sz2[time];
              k++;
          }


   return   MainWindow::cclt(&(sz1[1]),k);

}



void MainWindow::on_pushButton_17_clicked()
{
    qshow = qshow + "(";
    ui->label->setText(qshow);

    sz[i]="(";
    i=i+1;
}

void MainWindow::on_pushButton_16_clicked()
{
    qshow = qshow + ")";
    ui->label->setText(qshow);
    if(temp!="")
    {
        sz[i]=temp;
        temp="";
        i=i+1;
        sz[i]=")";
        i=i+1;
    }
    else
    {
        sz[i]=")";
        i=i+1;
    }

}

double MainWindow::cclt(QString *xunz, int flag)
{
       static  double a[100];
        int i=1;
        int j = 1;
        for(i=0;i<flag-1;i++)
                {
                    if(*(xunz+i)!="+"&&*(xunz+i)!="-"&&*(xunz+i)!="*"&&*(xunz+i)!="/")
                        {
                            a[j]=(*(xunz+i)).toDouble();
                            j++;
                        }
                    else if(*(xunz+i)=="+")
                        {
                            a[j-2]=a[j-1]+a[j-2];
                            j--;
                        }
                    else if(*(xunz+i)=="-")
                        {
                            a[j-2]=a[j-2]-a[j-1];
                            j--;
                        }
                    else if(*(xunz+i)=="*")
                        {
                            a[j-2]=a[j-1]*a[j-2];
                            j--;
                        }
                    else if(*(xunz+i)=="/")
                        {
                            a[j-2]=a[j-2]/a[j-1];
                            j--;
                        }
                }

                return a[1];
}


void MainWindow::on_pushButton_18_clicked()
{
    ui->label->setText("");
     i = 1;
     j =1;
     k =1;
     t =1;
     judge =0;
    qshow = "";
    temp = "";
}




void MainWindow::on_pushButton_19_clicked()
{
  if(temp != "")
  {
      temp = "";
      QString temp1 = "";
             for(int l=0;l<=i-1;l++)
             {
                temp1 = temp1 + sz[l];
             }
             ui->label->setText(temp1);
             qshow = temp1;
  }
  else
  {
      sz[i-1] = "";
      i = i-1;

      QString temp1 = "";


      for(int l=0;l<=i-1;l++)
      {
         temp1 = temp1 + sz[l];
      }
      ui->label->setText(temp1);
      qshow = temp1;
  }



}
