#include "serialworker.h"

serialworker::serialworker(QObject *parent)
    :QObject(parent),
    m_serialPort(new QSerialPort(this))
{
    connect(m_serialPort, &QSerialPort::readyRead,
            this, &serialworker::onReadyRead);
    connect(m_serialPort, &QSerialPort::bytesWritten,
            this, &serialworker::onBytesWritten);
    connect(m_serialPort, &QSerialPort::errorOccurred,
            this, &serialworker::onErrorOccurred);
    connect(m_serialPort, &QSerialPort::aboutToClose,
            this, &serialworker::onAboutToClose);
}

//데이터가 들어올 때
void serialworker::onReadyRead()
{

}

//데이터 송신 완료 되었을 때
void serialworker::onBytesWritten(qint64 bytes)
{

}

//통신 중 에러 발생.
void serialworker::onErrorOccurred(QSerialPort::SerialPortError error)
{

}

//통신 끊기 직전에 실행.
void serialworker::onAboutToClose()
{

}