#ifndef MODBUSTEST_H
#define MODBUSTEST_H

#include <QObject>
#include <QtTest/QtTest>

#include "modbusclient.h"

class ModbusTest : public QObject
{
    Q_OBJECT
private slots:
    /**
     * @brief connectTest
     */
    void connectTest();

    /**
     * @brief disconnectTest
     */
    void disconnectTest();

    /**
     * @brief readingBoolTest
     */
    void readingBoolTest();

    /**
     * @brief writingBoolTest
     */
    void writingBoolTest();

    /**
     * @brief readingIntegerTest
     */
    void readingIntegerTest();

    /**
     * @brief writingIntegerTest
     */
    void writingIntegerTest();

    /**
     * @brief readingFloatTest
     */
    void readingFloatTest();

    /**
     * @brief writingFloatTest
     */
    void writingFloatTest();

    /**
     * @brief readingStringTest
     */
    void readingStringTest();

    /**
     * @brief writingStringTest
     */
    void writingStringTest();

    // called before the first test function
    void initTestCase();
    // called before every test function
    void init();
    // called after every test function
    void cleanup();
    // called after the last test function
    void cleanupTestCase();
};

#endif // MODBUSTEST_H
