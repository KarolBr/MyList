#include <gtest/gtest.h>





class ProjectTest : public ::testing::Test
{
    protected:
    ProjectTest() {};
    ~ProjectTest() override {};

    void SetUp() override{};
    void TearDown() override {};
    
};



/*
TEST_F(ProjectTest,CreatedObjectCanReturnCertainValue)
{
    Dictionary dict("house","dom, miejsce zamieszkania");
    EXPECT_EQ("dom, miejsce zamieszkania",dict.getDefinition("house"));
}

