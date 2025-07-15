#define BOOST_TEST_MODULE CarTestModule
#include <boost/test/included/unit_test.hpp>

#include "tata.h"
#include "hyundai.h"
#include "maruti.h"
#include <memory>

BOOST_AUTO_TEST_SUITE(TataTests)

BOOST_AUTO_TEST_CASE(Tata_Heap)
{
    Car* mycar = new Tata("tiago", "yellow", 3);
    BOOST_CHECK_EQUAL(mycar->getColor(), "yellow");
    BOOST_CHECK_EQUAL(mycar->getPrice(), 3);
    delete mycar;
}

BOOST_AUTO_TEST_CASE(Tata_Reference)
{
    Tata t("tiago", "yellow", 3);
    Car& mycar = t;
    BOOST_CHECK_EQUAL(mycar.getColor(), "yellow");
    BOOST_CHECK_EQUAL(mycar.getPrice(), 3);
}

BOOST_AUTO_TEST_CASE(Tata_SharedPtr)
{
    std::shared_ptr<Car> mycar = std::make_shared<Tata>("tiago", "yellow", 3);
    BOOST_CHECK_EQUAL(mycar->getColor(), "yellow");
    BOOST_CHECK_EQUAL(mycar->getPrice(), 3);
}

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(HyundaiTests)

BOOST_AUTO_TEST_CASE(Hyundai_Heap)
{
    Car* mycar = new Hyundai("i20", "pink", 5);
    BOOST_CHECK_EQUAL(mycar->getColor(), "pink");
    BOOST_CHECK_EQUAL(mycar->getPrice(), 5);
    delete mycar;
}

BOOST_AUTO_TEST_CASE(Hyundai_Reference)
{
    Hyundai h("i20", "pink", 5);
    Car& mycar = h;
    BOOST_CHECK_EQUAL(mycar.getColor(), "pink");
    BOOST_CHECK_EQUAL(mycar.getPrice(), 5);
}

BOOST_AUTO_TEST_CASE(Hyundai_SharedPtr)
{
    std::shared_ptr<Car> mycar = std::make_shared<Hyundai>("i20", "pink", 5);
    BOOST_CHECK_EQUAL(mycar->getColor(), "pink");
    BOOST_CHECK_EQUAL(mycar->getPrice(), 5);
}

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(MarutiTests)

BOOST_AUTO_TEST_CASE(Maruti_Heap)
{
    Car* mycar = new Maruti("dezire", "yellow", 6);
    BOOST_CHECK_EQUAL(mycar->getColor(), "yellow");
    BOOST_CHECK_EQUAL(mycar->getPrice(), 6);
    delete mycar;
}

BOOST_AUTO_TEST_CASE(Maruti_Reference)
{
    Maruti m("dezire", "yellow", 6);
    Car& mycar = m;
    BOOST_CHECK_EQUAL(mycar.getColor(), "yellow");
    BOOST_CHECK_EQUAL(mycar.getPrice(), 6);
}

BOOST_AUTO_TEST_CASE(Maruti_SharedPtr)
{
    std::shared_ptr<Car> mycar = std::make_shared<Maruti>("dezire", "yellow", 6);
    BOOST_CHECK_EQUAL(mycar->getColor(), "yellow");
    BOOST_CHECK_EQUAL(mycar->getPrice(), 6);
}

BOOST_AUTO_TEST_SUITE_END()
