#include <userver/utest/utest.hpp>

#include "hello.hpp"

UTEST(SayHelloTo, Basic)
{
    using pg_grpc_service_template::SayHelloTo;
    using pg_grpc_service_template::UserType;

    EXPECT_EQ(SayHelloTo("Developer", UserType::kFirstTime), "Hello, Developer!\n");
    EXPECT_EQ(SayHelloTo({}, UserType::kFirstTime), "Hello, unknown user!\n");

    EXPECT_EQ(SayHelloTo("Developer", UserType::kKnown), "Hi again, Developer!\n");
}
