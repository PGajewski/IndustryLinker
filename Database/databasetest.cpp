#include "databasetest.h"

void DatabaseTest::connectTest()
{
    DatabaseClient client;
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    bool status = client.connect();
    QVERIFY(status);
    client.disconnect();
}

void DatabaseTest::disconnectTest()
{
    DatabaseClient client;
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    client.connect();
    bool status = client.disconnect();
    QVERIFY(status);
}

void DatabaseTest::DatabaseTest::readingBoolTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();

    attr->setTable("Testtable");
    attr->setColumn("test_boolean");

    std::shared_ptr<BooleanVariable> var = std::make_shared<BooleanVariable>();

    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    client.connect();
    //client.getVariable(var);
    QVERIFY(var->getValue() == true);
    client.disconnect();

    QVERIFY(false);
}

void DatabaseTest::writingBoolTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_boolean");

    std::shared_ptr<BooleanVariable> writing_var = std::make_shared<BooleanVariable>();
    std::shared_ptr<BooleanVariable> reading_var = std::make_shared<BooleanVariable>();
    writing_var->setValue(false);

    //Writing
    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
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

void DatabaseTest::readingIntegerTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_integer");

    std::shared_ptr<IntegerVariable> var = std::make_shared<IntegerVariable>();


    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == 5);
    client.disconnect();
}

void DatabaseTest::writingIntegerTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_boolean");

    std::shared_ptr<IntegerVariable> writing_var = std::make_shared<IntegerVariable>();
    std::shared_ptr<IntegerVariable> reading_var = std::make_shared<IntegerVariable>();
    writing_var->setValue(false);

    //Writing
    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
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

void DatabaseTest::readingFloatTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_float");

    std::shared_ptr<FloatVariable> var = std::make_shared<FloatVariable>();


    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == 5.0);
    client.disconnect();
}

void DatabaseTest::writingFloatTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_float");

    std::shared_ptr<FloatVariable> writing_var = std::make_shared<FloatVariable>();
    std::shared_ptr<FloatVariable> reading_var = std::make_shared<FloatVariable>();
    writing_var->setValue(10.0);


    //Writing
    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    client.connect();
    client.setVariable(writing_var);

    //Reading
    client.getVariable(reading_var);
    QVERIFY(reading_var->getValue() == 10.0);

    //Write again old default value;
    writing_var->setValue(5.0);
    client.setVariable(writing_var);
}

void DatabaseTest::readingStringTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_string");

    std::shared_ptr<StringVariable> var = std::make_shared<StringVariable>();


    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
    client.connect();
    client.getVariable(var);

    QVERIFY(var->getValue() == "five");
    client.disconnect();
}

void DatabaseTest::writingStringTest()
{
    std::shared_ptr<DatabaseVarAttr> attr = std::make_shared<DatabaseVarAttr>();
    attr->setTable("Testtable");
    attr->setColumn("test_string");

    std::shared_ptr<StringVariable> writing_var = std::make_shared<StringVariable>();
    std::shared_ptr<StringVariable> reading_var = std::make_shared<StringVariable>();
    writing_var->setValue("ten");


    //Writing
    DatabaseClient client;
    client.addVariableAttr(attr);
    client.setHost("localhost:3306");
    client.setDatabase("TestDatabase");
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
void DatabaseTest::initTestCase()
{

}

// called before every test function
void DatabaseTest::init()
{

}

// called after every test function
void DatabaseTest::cleanup()
{

}

// called after the last test function
void DatabaseTest::cleanupTestCase()
{

}
