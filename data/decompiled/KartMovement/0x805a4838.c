// sub_805a4838
// Address: 0x805a4838
// Size: 96 bytes (24 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a4838 */ stwu r1, -0x10(r1)
    /* 0x805a483c */ mflr r0
    /* 0x805a4840 */ lis r4, 0
    /* 0x805a4844 */ stw r0, 0x14(r1)
    /* 0x805a4848 */ stw r31, 0xc(r1)
    /* 0x805a484c */ mr r31, r3
    /* 0x805a4850 */ lwz r3, 0(r4)
    /* 0x805a4854 */ cmpwi r3, 0
    /* 0x805a4858 */ beq 0x805a4868
    /* 0x805a485c */ lis r4, 0
    /* 0x805a4860 */ lbz r4, 0(r4)
    /* 0x805a4864 */ bl 0x805bac40
    /* 0x805a4868 */ lis r3, 0
    /* 0x805a486c */ lwz r0, 0(r3)
    /* 0x805a4870 */ clrlwi. r0, r0, 0x1f
    /* 0x805a4874 */ bne 0x805a4880
    /* 0x805a4878 */ lwz r3, 0x30(r31)
    /* 0x805a487c */ bl 0x805504d8
    /* 0x805a4880 */ bl 0x8083d8b8
    /* 0x805a4884 */ lwz r0, 0x14(r1)
    /* 0x805a4888 */ lwz r31, 0xc(r1)
    /* 0x805a488c */ mtlr r0
    /* 0x805a4890 */ addi r1, r1, 0x10
    /* 0x805a4894 */ blr
