#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include "socket_c.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE
/**
 * @brief The Client class
 */
class Client : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Client
     * @param parent
     */
    Client(QWidget *parent = nullptr);
    /**
    * @brief Client destructor
    */
    ~Client();

private:
    Ui::Client *ui;
    Socket_C shocko = Socket_C();

private slots:
    std::string send_nodes();
    void on_btn_send_clicked();
};
#endif // CLIENT_H
