#define BOOST_TEST_MODULE sample_test
#include <boost/test/unit_test.hpp>
#include "sample.hpp"

BOOST_AUTO_TEST_SUITE(sample_test_suite)

BOOST_AUTO_TEST_CASE(say_Hello_TDD_Boot_Camp) {
  BOOST_CHECK_EQUAL(tddbc::say(), "Hello TDD BootCamp!");
}

BOOST_AUTO_TEST_SUITE_END()
