#include "modbustest.h"

void ModbusTest::connectTest()
{
    ModbusClient client;
    client.setHost("localhost:502");
    bool status = client.connect();
    QVERIFY(status);
    client.disconnect();

}

void ModbusTest::disconnectTest()
{
    ModbusClient client;
    client.setHost("localhost:502");
    client.connect();
    bool status = client.disconnect();
    QVERIFY(status);
}

void ModbusTest::readingBoolTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<BooleanVariable> var = std::make_shared<BooleanVariable>();


    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == true);
    client.disconnect();
}

void ModbusTest::writingBoolTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<BooleanVariable> writing_var = std::make_shared<BooleanVariable>();
    std::shared_ptr<BooleanVariable> reading_var = std::make_shared<BooleanVariable>();
    writing_var->setValue(false);

    //Writing
    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.setVariable(writing_var);

    //Reading
    client.getVariable(reading_var);
    QVERIFY(reading_var->getValue() == false);

    //Write again old default value;
    writing_var->setValue(true);
    client.setVariable(writing_var);
    client.disconnect();
}

void ModbusTest::readingIntegerTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<IntegerVariable> var = std::make_shared<IntegerVariable>();


    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == 5);
    client.disconnect();
}

void ModbusTest::writingIntegerTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<IntegerVariable> writing_var = std::make_shared<IntegerVariable>();
    std::shared_ptr<IntegerVariable> reading_var = std::make_shared<IntegerVariable>();
    writing_var->setValue(10);

    //Writing
    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.setVariable(writing_var);

    //Reading
    client.getVariable(reading_var);
    QVERIFY(reading_var->getValue() == 10);

    //Write again old default value;
    writing_var->setValue(5);
    client.setVariable(writing_var);
    client.disconnect();
}

void ModbusTest::readingFloatTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<FloatVariable> var = std::make_shared<FloatVariable>();


    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == 5.0);
    client.disconnect();
}

void ModbusTest::writingFloatTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<FloatVariable> writing_var = std::make_shared<FloatVariable>();
    std::shared_ptr<FloatVariable> reading_var = std::make_shared<FloatVariable>();
    writing_var->setValue(10.0);


    //Writing
    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.setVariable(writing_var);

    //Reading
    client.getVariable(reading_var);
    QVERIFY(reading_var->getValue() == 10.0);

    //Write again old default value;
    writing_var->setValue(5.0);
    client.setVariable(writing_var);
}

void ModbusTest::readingStringTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<StringVariable> var = std::make_shared<StringVariable>();


    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == "five");
    client.disconnect();
}

void ModbusTest::writingStringTest()
{
    std::shared_ptr<ModbusVarAttr> attr = std::make_shared<ModbusVarAttr>();
    attr->setAddress(0);

    std::shared_ptr<StringVariable> writing_var = std::make_shared<StringVariable>();
    std::shared_ptr<StringVariable> reading_var = std::make_shared<StringVariable>();
    writing_var->setValue("ten");


    //Writing
    ModbusClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:502");
    client.connect();
    client.setVariable(writing_var);

    //Reading
    client.getVariable(reading_var);
    QVERIFY(reading_var->getValue() == "ten");

    //Write again old default value;
    writing_var->setValue("five");
    client.setVariable(writing_var);
}

// called before the first test function
void ModbusTest::initTestCase()
{

}
// called before every test function
void ModbusTest::init()
{

}
// called after every test function
void ModbusTest::cleanup()
{

}
// called after the last test function
void ModbusTest::cleanupTestCase()
{

}
