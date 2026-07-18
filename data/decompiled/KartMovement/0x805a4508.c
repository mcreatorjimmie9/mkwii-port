// sub_805a4508
// Address: 0x805a4508
// Size: 184 bytes (46 instructions)
// Stack frame: 0x20
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a4508 */ stwu r1, -0x20(r1)
    /* 0x805a450c */ mflr r0
    /* 0x805a4510 */ cmpwi r3, 0
    /* 0x805a4514 */ stw r0, 0x24(r1)
    /* 0x805a4518 */ stw r31, 0x1c(r1)
    /* 0x805a451c */ stw r30, 0x18(r1)
    /* 0x805a4520 */ mr r30, r4
    /* 0x805a4524 */ stw r29, 0x14(r1)
    /* 0x805a4528 */ mr r29, r3
    /* 0x805a452c */ beq 0x805a45a0
    /* 0x805a4530 */ lis r4, 0
    /* 0x805a4534 */ addi r4, r4, 0
    /* 0x805a4538 */ stw r4, 0(r3)
    /* 0x805a453c */ bl 0x805ba75c
    /* 0x805a4540 */ addic. r31, r29, 4
    /* 0x805a4544 */ beq 0x805a4590
    /* 0x805a4548 */ lis r3, 0
    /* 0x805a454c */ lis r4, 0
    /* 0x805a4550 */ addi r3, r3, 0
    /* 0x805a4554 */ stw r3, 0(r31)
    /* 0x805a4558 */ lwz r3, 0(r4)
    /* 0x805a455c */ cmpwi r3, 0
    /* 0x805a4560 */ beq 0x805a4584
    /* 0x805a4564 */ li r0, 0
    /* 0x805a4568 */ stw r0, 0(r4)
    /* 0x805a456c */ beq 0x805a4584
    /* 0x805a4570 */ lwz r12, 0(r3)
    /* 0x805a4574 */ li r4, 1
    /* 0x805a4578 */ lwz r12, 8(r12)
    /* 0x805a457c */ mtctr r12
    /* 0x805a4580 */ bctrl
    /* 0x805a4584 */ mr r3, r31
    /* 0x805a4588 */ li r4, 0
    /* 0x805a458c */ bl 0x80555bf4
    /* 0x805a4590 */ cmpwi r30, 0
    /* 0x805a4594 */ ble 0x805a45a0
    /* 0x805a4598 */ mr r3, r29
    /* 0x805a459c */ bl 0x80555bf4
    /* 0x805a45a0 */ lwz r31, 0x1c(r1)
    /* 0x805a45a4 */ mr r3, r29
    /* 0x805a45a8 */ lwz r30, 0x18(r1)
    /* 0x805a45ac */ lwz r29, 0x14(r1)
    /* 0x805a45b0 */ lwz r0, 0x24(r1)
    /* 0x805a45b4 */ mtlr r0
    /* 0x805a45b8 */ addi r1, r1, 0x20
    /* 0x805a45bc */ blr
