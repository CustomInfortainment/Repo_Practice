#ifndef SERIALWORKER_H
#define SERIALWORKER_H

#include <QObject>

#include <QSerialPort>
#include <QDebug>

class serialworker : public QObject
{
public:
    explicit serialworker(QObject *parent);                         //생성자
    ~serialworker();                                                //소멸자

    void openPort(const QString &portName);
    void closePort();

signals:
    void dataReceived(const QByteArray &data);
    void errorOccurred(const QString &error);

private slots:
    void onReadyRead();
    void onBytesWritten(qint64 bytes);
    void onErrorOccurred(QSerialPort::SerialPortError error);
    void onAboutToClose();

private:
    QSerialPort* m_serialPort = nullptr;
};

#endif // SERIALWORKER_H
