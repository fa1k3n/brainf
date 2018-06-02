#include <gtest/gtest.h>
#include <brainf.hpp>

TEST(MachineBasic, basicCreate) {
    Brainf::Machine machine;
    Brainf::Instruction inst = machine.GetCurrentInstruction();
    ASSERT_TRUE(!inst.Valid());
}



