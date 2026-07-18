// sub_805a653c
// Address: 0x805a653c
// Size: 604 bytes (102 instructions)
// Stack frame: 0x90
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a653c */ stwu r1, -0x90(r1)
    /* 0x805a6540 */ mflr r0
    /* 0x805a6544 */ stw r0, 0x94(r1)
    /* 0x805a6548 */ stw r31, 0x8c(r1)
    /* 0x805a654c */ stw r30, 0x88(r1)
    /* 0x805a6550 */ lis r30, 0
    /* 0x805a6554 */ addi r30, r30, 0
    /* 0x805a6558 */ stw r29, 0x84(r1)
    /* 0x805a655c */ stw r28, 0x80(r1)
    /* 0x805a6560 */ mr r28, r3
    /* 0x805a6564 */ lwz r12, 0(r3)
    /* 0x805a6568 */ lwz r12, 0x18(r12)
    /* 0x805a656c */ mtctr r12
    /* 0x805a6570 */ bctrl
    /* 0x805a6574 */ cmpwi r3, 0
    /* 0x805a6578 */ bne 0x805a65c4
    /* 0x805a657c */ lwz r12, 0(r28)
    /* 0x805a6580 */ mr r3, r28
    /* 0x805a6584 */ lwz r12, 0x14(r12)
    /* 0x805a6588 */ mtctr r12
    /* 0x805a658c */ bctrl
    /* 0x805a6590 */ lwz r3, 0(r3)
    /* 0x805a6594 */ lbz r0, 0(r3)
    /* 0x805a6598 */ cmpwi r0, 3
    /* 0x805a659c */ beq 0x805a65c4
    /* 0x805a65a0 */ lwz r12, 0(r28)
    /* 0x805a65a4 */ mr r3, r28
    /* 0x805a65a8 */ lwz r12, 0x14(r12)
    /* 0x805a65ac */ mtctr r12
    /* 0x805a65b0 */ bctrl
    /* 0x805a65b4 */ lwz r3, 0(r3)
    /* 0x805a65b8 */ lbz r0, 0(r3)
    /* 0x805a65bc */ cmpwi r0, 6
    /* 0x805a65c0 */ bne 0x805a6778
    /* 0x805a65c4 */ lwz r4, 4(r28)
    /* 0x805a65c8 */ lis r3, 0
    /* 0x805a65cc */ lis r6, 0x62f9
    /* 0x805a65d0 */ lfs f0, 0(r30)
    /* 0x805a65d4 */ lwz r29, 0x90(r4)
    /* 0x805a65d8 */ li r31, 0
    /* 0x805a65dc */ lfs f1, 0x40(r30)
    /* 0x805a65e0 */ addi r5, r28, 0x60
    /* 0x805a65e4 */ stfs f0, 0x18(r1)
    /* 0x805a65e8 */ addi r4, r29, 0x64
    /* 0x805a65ec */ lwz r3, 0(r3)
    /* 0x805a65f0 */ addi r6, r6, -0x4201
    /* 0x805a65f4 */ stfs f0, 0x1c(r1)
    /* 0x805a65f8 */ addi r7, r1, 0x18
    /* 0x805a65fc */ addi r8, r1, 8
    /* 0x805a6600 */ li r9, 0
    /* 0x805a6604 */ stfs f0, 0x20(r1)
    /* 0x805a6608 */ stfs f0, 0x24(r1)
    /* 0x805a660c */ stfs f0, 0x28(r1)
    /* 0x805a6610 */ stfs f0, 0x2c(r1)
    /* 0x805a6614 */ stw r31, 0x70(r1)
    /* 0x805a6618 */ stw r31, 8(r1)
    /* 0x805a661c */ bl 0x8078cfdc
    /* 0x805a6620 */ cmpwi r3, 0
    /* 0x805a6624 */ beq 0x805a66fc
    /* 0x805a6628 */ lfs f1, 0x64(r29)
    /* 0x805a662c */ lfs f0, 0x30(r1)
    /* 0x805a6630 */ fadds f4, f1, f0
    /* 0x805a6634 */ stfs f4, 0x64(r29)
    /* 0x805a6638 */ lfs f1, 0x68(r29)
    /* 0x805a663c */ lfs f0, 0x34(r1)
    /* 0x805a6640 */ fadds f3, f1, f0
    /* 0x805a6644 */ stfs f3, 0x68(r29)
    /* 0x805a6648 */ lfs f1, 0x6c(r29)
    /* 0x805a664c */ lfs f0, 0x38(r1)
    /* 0x805a6650 */ fadds f2, f1, f0
    /* 0x805a6654 */ frsp f1, f3
    /* 0x805a6658 */ stfs f2, 0x6c(r29)
    /* 0x805a665c */ frsp f2, f2
    /* 0x805a6660 */ lfs f0, 0x70(r29)
    /* 0x805a6664 */ fsubs f5, f4, f0
    /* 0x805a6668 */ lfs f0, 0x74(r29)
    /* 0x805a666c */ fsubs f4, f1, f0
    /* 0x805a6670 */ lfs f0, 0x78(r29)
    /* 0x805a6674 */ fmuls f1, f5, f5
    /* 0x805a6678 */ stfs f5, 0xc(r1)
    /* 0x805a667c */ fsubs f3, f2, f0
    /* 0x805a6680 */ fmuls f0, f4, f4
    /* 0x805a6684 */ stfs f4, 0x10(r1)
    /* 0x805a6688 */ fmuls f2, f3, f3
    /* 0x805a668c */ fadds f0, f1, f0
    /* 0x805a6690 */ stfs f3, 0x14(r1)
    /* 0x805a6694 */ fadds f1, f2, f0
    /* 0x805a6698 */ bl 0x80555bf4
    /* 0x805a669c */ stfs f1, 0x1c(r28)
    /* 0x805a66a0 */ lis r3, -0x2fef
    /* 0x805a66a4 */ addi r4, r3, -0x1000
    /* 0x805a66a8 */ lwz r0, 8(r1)
    /* 0x805a66ac */ and. r0, r0, r4
    /* 0x805a66b0 */ beq 0x805a66c0
    /* 0x805a66b4 */ addi r3, r1, 8
    /* 0x805a66b8 */ bl 0x807b5770
    /* 0x805a66bc */ b 0x805a66c4
    /* 0x805a66c0 */ mr r3, r31
    /* 0x805a66c4 */ cmpwi r3, 0
    /* 0x805a66c8 */ beq 0x805a66fc
    /* 0x805a66cc */ lfs f1, 0x1c(r28)
    /* 0x805a66d0 */ lfs f0, 0x44(r30)
