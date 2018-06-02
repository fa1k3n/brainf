#ifndef __BRAINF__HPP__
#define __BRAINF__HPP__

namespace Brainf {
    class Instruction {
    public:
        bool Valid() { return false; }
    };
    
    class Machine {
    public:
        Instruction GetCurrentInstruction() {  return Instruction(); }
    };

}
#endif