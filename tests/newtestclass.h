/*
 * File:   newtestclass.h
 * Author: arman
 *
 * Created on 21/05/2020, 09:26:06 AM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE( suma );
    CPPUNIT_TEST( resta );
    CPPUNIT_TEST( multiplicar );
    CPPUNIT_TEST( dividir );
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();
    
    void suma();
    void restar();
    void multiplicar();
    void dividir();


private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* NEWTESTCLASS_H */

