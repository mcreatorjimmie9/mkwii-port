// sub_805a2770
// Address: 0x805a2770
// Size: 348 bytes (87 instructions)
// Stack frame: 0x20
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2770 */ stwu r1, -0x20(r1)
    /* 0x805a2774 */ mflr r0
    /* 0x805a2778 */ cmpwi r4, 0
    /* 0x805a277c */ stw r0, 0x24(r1)
    /* 0x805a2780 */ stw r31, 0x1c(r1)
    /* 0x805a2784 */ lis r31, 0
    /* 0x805a2788 */ addi r31, r31, 0
    /* 0x805a278c */ stw r30, 0x18(r1)
    /* 0x805a2790 */ mr r30, r3
    /* 0x805a2794 */ beq 0x805a27a4
    /* 0x805a2798 */ addi r3, r3, 0x7c
    /* 0x805a279c */ bl 0x805a266c
    /* 0x805a27a0 */ b 0x805a288c
    /* 0x805a27a4 */ li r0, 0x10
    /* 0x805a27a8 */ lfs f0, 0x128(r31)
    /* 0x805a27ac */ mulli r4, r0, 0xc
    /* 0x805a27b0 */ sth r0, 0x80(r3)
    /* 0x805a27b4 */ stfs f0, 0x84(r3)
    /* 0x805a27b8 */ addi r3, r4, 0x10
    /* 0x805a27bc */ bl 0x80555bf4
    /* 0x805a27c0 */ lis r4, 0
    /* 0x805a27c4 */ lis r5, 0
    /* 0x805a27c8 */ addi r4, r4, 0
    /* 0x805a27cc */ li r6, 0xc
    /* 0x805a27d0 */ addi r5, r5, 0
    /* 0x805a27d4 */ li r7, 0x10
    /* 0x805a27d8 */ bl 0x80555bf4
    /* 0x805a27dc */ lhz r0, 0x80(r30)
    /* 0x805a27e0 */ stw r3, 0xac(r30)
    /* 0x805a27e4 */ slwi r3, r0, 2
    /* 0x805a27e8 */ bl 0x80555bf4
    /* 0x805a27ec */ lfs f2, 0(r31)
    /* 0x805a27f0 */ li r6, 0
    /* 0x805a27f4 */ lfs f4, 0xf8(r31)
    /* 0x805a27f8 */ li r4, 0
    /* 0x805a27fc */ lfs f3, 0x178(r31)
    /* 0x805a2800 */ li r5, 0
    /* 0x805a2804 */ lfs f1, 0x1f8(r31)
    /* 0x805a2808 */ stw r3, 0xb0(r30)
    /* 0x805a280c */ lfs f0, 0x1a0(r31)
    /* 0x805a2810 */ stfs f4, 0x90(r30)
    /* 0x805a2814 */ stfs f4, 0x8c(r30)
    /* 0x805a2818 */ stfs f4, 0x88(r30)
    /* 0x805a281c */ stfs f2, 0x9c(r30)
    /* 0x805a2820 */ stfs f2, 0x98(r30)
    /* 0x805a2824 */ stfs f2, 0x94(r30)
    /* 0x805a2828 */ stfs f2, 0xa8(r30)
    /* 0x805a282c */ stfs f2, 0xa4(r30)
    /* 0x805a2830 */ stfs f2, 0xa0(r30)
    /* 0x805a2834 */ stfs f2, 8(r1)
    /* 0x805a2838 */ stfs f3, 0xc(r1)
    /* 0x805a283c */ stfs f1, 0x10(r1)
    /* 0x805a2840 */ b 0x805a2880
    /* 0x805a2844 */ lwz r0, 0xac(r30)
    /* 0x805a2848 */ addi r6, r6, 1
    /* 0x805a284c */ lfs f2, 0x10(r1)
    /* 0x805a2850 */ lfs f1, 8(r1)
    /* 0x805a2854 */ add r3, r0, r4
    /* 0x805a2858 */ stfsx f1, r4, r0
    /* 0x805a285c */ fsubs f2, f2, f3
    /* 0x805a2860 */ lfs f1, 0xc(r1)
    /* 0x805a2864 */ addi r4, r4, 0xc
    /* 0x805a2868 */ stfs f1, 4(r3)
    /* 0x805a286c */ stfs f2, 8(r3)
    /* 0x805a2870 */ lwz r3, 0xb0(r30)
    /* 0x805a2874 */ stfs f2, 0x10(r1)
    /* 0x805a2878 */ stfsx f0, r3, r5
    /* 0x805a287c */ addi r5, r5, 4
    /* 0x805a2880 */ lhz r0, 0x80(r30)
    /* 0x805a2884 */ cmplw r6, r0
    /* 0x805a2888 */ blt 0x805a2844
    /* 0x805a288c */ li r3, 0xd0
    /* 0x805a2890 */ bl 0x80555bf4
    /* 0x805a2894 */ lis r4, 0
    /* 0x805a2898 */ lis r5, 0
    /* 0x805a289c */ addi r4, r4, 0
    /* 0x805a28a0 */ li r6, 0xc
    /* 0x805a28a4 */ addi r5, r5, 0
    /* 0x805a28a8 */ li r7, 0x10
    /* 0x805a28ac */ bl 0x80555bf4
    /* 0x805a28b0 */ stw r3, 8(r30)
    /* 0x805a28b4 */ lwz r31, 0x1c(r1)
    /* 0x805a28b8 */ lwz r30, 0x18(r1)
    /* 0x805a28bc */ lwz r0, 0x24(r1)
    /* 0x805a28c0 */ mtlr r0
    /* 0x805a28c4 */ addi r1, r1, 0x20
    /* 0x805a28c8 */ blr
