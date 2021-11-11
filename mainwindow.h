#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QLabel>

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
    void on_plainTextEdit_textChanged();

    void on_actionNew_triggered();

    void on_actionNew_Window_triggered();

    void on_actionOpen_triggered();

    bool on_actionSave_triggered();

    bool on_actionSave_As_triggered();


    void on_actionExit_triggered();

    void on_actionUndo_U_triggered();

    void on_actionCut_T_triggered();

    void on_actionCopy_C_triggered();

    void on_actionPaste_P_triggered();

    void on_actionDelete_L_triggered();

    void on_actionSearch_By_Bing_triggered();

    void on_actionSelect_All_A_triggered();

    void on_actionTime_Date_D_triggered();

    void on_actionWord_Wrap_W_triggered();

    void on_actionFont_F_triggered();

    void on_actionZoom_In_I_triggered();

    void on_actionZoom_Out_O_triggered();

    void on_actionZoom_Default_triggered();

    void on_actionStatus_Bar_S_triggered();

    void on_actionAbout_A_triggered();

    void on_plainTextEdit_cursorPositionChanged();

private:
    void openFile(QString path);
    bool isModified() const;
    bool askSave();
    void updateWindowTitle();

protected:
    void closeEvent(QCloseEvent* e) override;

private:
    Ui::MainWindow *ui;
    QSettings settings;

    QString filePath;
    QString fileName;
    QString savedContent;
    int zoomSize = 100;

    QLabel* posLabel;
    QLabel* zoomLabel;
    QLabel* lineLabel;
    QLabel* codecLabel;
};
#endif // MAINWINDOW_H
