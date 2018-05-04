#include "opcuatest.h"

void OPCUATest::connectTest()
{
    OPCUAClient client;
    client.setEndpoint("localhost:4840");
    bool status = client.connect();
    QVERIFY(status);
    client.disconnect();

}

void OPCUATest::disconnectTest()
{
    OPCUAClient client;
    client.setEndpoint("localhost:4840");
    client.connect();
    bool status = client.disconnect();
    QVERIFY(status);
}

void OPCUATest::readingBoolTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_boolean");

    std::shared_ptr<BooleanVariable> var = std::make_shared<BooleanVariable>();


    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == true);
    client.disconnect();
}

void OPCUATest::writingBoolTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_boolean");

    std::shared_ptr<BooleanVariable> writing_var = std::make_shared<BooleanVariable>();
    std::shared_ptr<BooleanVariable> reading_var = std::make_shared<BooleanVariable>();
    writing_var->setValue(false);

    //Writing
    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
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

void OPCUATest::readingIntegerTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_integer");

    std::shared_ptr<IntegerVariable> var = std::make_shared<IntegerVariable>();

    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == 5);
    client.disconnect();
}

void OPCUATest::writingIntegerTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_integer");

    std::shared_ptr<IntegerVariable> writing_var = std::make_shared<IntegerVariable>();
    std::shared_ptr<IntegerVariable> reading_var = std::make_shared<IntegerVariable>();
    writing_var->setValue(10);

    //Writing
    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
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

void OPCUATest::readingFloatTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_float");

    std::shared_ptr<FloatVariable> var = std::make_shared<FloatVariable>();


    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == 5.0);
    client.disconnect();
}

void OPCUATest::writingFloatTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_float");

    std::shared_ptr<FloatVariable> writing_var = std::make_shared<FloatVariable>();
    std::shared_ptr<FloatVariable> reading_var = std::make_shared<FloatVariable>();
    writing_var->setValue(10.0);


    //Writing
    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
    client.connect();
    client.setVariable(writing_var);

    //Reading
    client.getVariable(reading_var);
    QVERIFY(reading_var->getValue() == 10.0);

    //Write again old default value;
    writing_var->setValue(5.0);
    client.setVariable(writing_var);
}

void OPCUATest::readingStringTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_string");

    std::shared_ptr<StringVariable> var = std::make_shared<StringVariable>();


    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == "five");
    client.disconnect();
}

void OPCUATest::writingStringTest()
{
    std::shared_ptr<OPCUAVarAttr> attr = std::make_shared<OPCUAVarAttr>();
    attr->setNode(0);
    attr->setPath("test_string");

    std::shared_ptr<StringVariable> writing_var = std::make_shared<StringVariable>();
    std::shared_ptr<StringVariable> reading_var = std::make_shared<StringVariable>();
    writing_var->setValue("ten");


    //Writing
    OPCUAClient client;
    client.addVariableAttr(attr);
    client.setEndpoint("localhost:4840");
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
void OPCUATest::initTestCase()
{

}
// called before every test function
void OPCUATest::init()
{

}
// called after every test function
void OPCUATest::cleanup()
{

}
// called after the last test function
void OPCUATest::cleanupTestCase()
{

}
