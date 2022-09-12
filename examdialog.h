#ifndef EXAMDIALOG_H
#define EXAMDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QTextEdit>
#include <QLabel>
#include <QRadioButton>
#include <QCheckBox>
#include <QGridLayout>
#include <QButtonGroup>


class ExamDialog : public QDialog
{
    Q_OBJECT
public:
    ExamDialog(QWidget* parent = 0);
    void initTimer();//计时器
    void initLayout();//初始化布局管理器
    bool initTextEdit();//初始化文本编辑器
    void initButtons();//初始化按钮
    bool hasNoSelect();//是否选择
private:
    QTimer* m_timer;//计时器
    int m_timeGo;//考试已经用时

    QTextEdit* m_textEdit;//文档编译器
    QLabel* m_titleLabels[10];//选项标题标签
    QRadioButton* m_radioBtns[32];//单选按钮
    QCheckBox* m_checkBtns[4];//多选按钮
    QButtonGroup* m_btnGroups[9];//按钮组，只选一个
    QRadioButton * m_radioA;//a
    QRadioButton * m_radioB;//b
    QGridLayout* m_layout;//布局管理器
    QStringList m_answerList;//答案
private slots:
    void freshTime();//刷新时间
    void getScore();//获取分数
};

#endif // EXAMDIALOG_H
