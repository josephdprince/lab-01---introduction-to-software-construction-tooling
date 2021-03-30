#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, CaseSensitive) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Hello"; test_val[2] = "WoRlD";
    EXPECT_EQ("Hello WoRlD", echo(3, test_val));
}

TEST(EchoTest, CEchoCall) {
    char* test_val[3]; test_val[0] = "c-echo"; test_val[1] = "Hello"; test_val[2] = "world";
    EXPECT_EQ("Hello world", echo(3, test_val));
}

TEST(EchoTest, NewLine) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Hello"; test_val[2] = "world"; test_val[3] = "\n";
    EXPECT_EQ("Hello world \n", echo(4, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

