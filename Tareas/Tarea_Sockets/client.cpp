#include "client.h"
#include "./ui_client.h"
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    send_nodes();
    ui->setupUi(this);
}
Client::~Client()
{
    shocko.close_shocko();
    delete ui;
}


int src=3;
int dest=7;

std::string Client::send_nodes(){
    if(shocko.getUnconnected()){
        shocko.start_shocko();
    }
    return shocko.send_msg(src,dest);
};


void Client::on_btn_send_clicked(){
    dest=ui->end->text().toInt();
    src =ui->start->text().toInt();
    std::string dijkstraPath = send_nodes();
    QString text = QString::fromStdString(dijkstraPath);
    ui->end->text().clear();
    ui->start->text().clear();
    ui->text->clear();
    ui->text->append(text);
};
