#include "serialworker.h"

serialworker::serialworker(QObject *parent)
    :QObject(parent),
    m_serialPort(new QSerialPort(this))
{
    connect(m_serialPort, &QSerialPort::readyRead, this, &serialworker::onReadyRead);
    connect(m_serialPort, &QSerialPort::bytesWritten, this, &serialworker::onBytesWriten);
    connect(m_serialPort, &QSerialPort::errorOccurred, this, &serialworker::onErrorOccurred);
}

void serialworker::onReadyRead()
{

}

void serialworker::onBytesWriten(qint64 bytes)
{

}

void serialworker::onErrorOccurred(QSerialPort::SerialPortError error)
{

}

