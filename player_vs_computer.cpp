#include "player_vs_computer.h"
#include "ui_player_vs_computer.h"

player_vs_computer::player_vs_computer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::player_vs_computer)
{
    ui->setupUi(this);
}

player_vs_computer::~player_vs_computer()
{
    delete ui;
}
