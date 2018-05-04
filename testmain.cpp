#include "OpcUa/opcuatest.h"
#include "Database/databasetest.h"
#include "Modbus/modbustest.h"
#include <QtTest/QTest>

// Note: This is equivalent to QTEST_APPLESS_MAIN for multiple test classes.
int main(int argc, char** argv)
{
   int status = 0;
   {
      DatabaseTest tc;
      status |= QTest::qExec(&tc, argc, argv);
   }
   {
      OPCUATest tc;
      status |= QTest::qExec(&tc, argc, argv);
   }
   {
      ModbusTest tc;
      status |= QTest::qExec(&tc, argc, argv);
   }
   return status;
}
