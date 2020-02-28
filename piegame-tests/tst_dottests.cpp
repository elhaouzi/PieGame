#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class DotTests : public QObject
{
    Q_OBJECT

public:
    DotTests();
    ~DotTests();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

DotTests::DotTests()
{

}

DotTests::~DotTests()
{

}

void DotTests::initTestCase()
{

}

void DotTests::cleanupTestCase()
{

}

void DotTests::test_case1()
{

}

QTEST_MAIN(DotTests)

#include "tst_dottests.moc"
