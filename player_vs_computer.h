#ifndef PLAYER_VS_COMPUTER_H
#define PLAYER_VS_COMPUTER_H

#include <QDialog>

namespace Ui {
class player_vs_computer;
}

class player_vs_computer : public QDialog
{
    Q_OBJECT

public:
    explicit player_vs_computer(QWidget *parent = nullptr);
    ~player_vs_computer();

private:
    Ui::player_vs_computer *ui;
};

#endif // PLAYER_VS_COMPUTER_H
