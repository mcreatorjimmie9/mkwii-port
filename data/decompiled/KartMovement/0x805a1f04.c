// sub_805a1f04
// Address: 0x805a1f04
// Size: 424 bytes (106 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a1f04 */ stwu r1, -0x10(r1)
    /* 0x805a1f08 */ mflr r0
    /* 0x805a1f0c */ stw r0, 0x14(r1)
    /* 0x805a1f10 */ stw r31, 0xc(r1)
    /* 0x805a1f14 */ mr r31, r4
    /* 0x805a1f18 */ stw r30, 8(r1)
    /* 0x805a1f1c */ mr r30, r3
    /* 0x805a1f20 */ mr r3, r31
    /* 0x805a1f24 */ bl 0x80590434
    /* 0x805a1f28 */ lhz r0, 0x2c(r3)
    /* 0x805a1f2c */ rlwinm. r0, r0, 0, 0x1a, 0x1a
    /* 0x805a1f30 */ beq 0x805a1fa0
    /* 0x805a1f34 */ lis r3, 0
    /* 0x805a1f38 */ li r4, 2
    /* 0x805a1f3c */ lwz r3, 0(r3)
    /* 0x805a1f40 */ bl 0x80537f4c
    /* 0x805a1f44 */ cmpwi r3, 0
    /* 0x805a1f48 */ beq 0x805a1fa0
    /* 0x805a1f4c */ lwz r3, 0(r31)
    /* 0x805a1f50 */ lwz r3, 4(r3)
    /* 0x805a1f54 */ lwz r0, 4(r3)
    /* 0x805a1f58 */ rlwinm. r0, r0, 0, 0x1b, 0x1b
    /* 0x805a1f5c */ bne 0x805a1fa0
    /* 0x805a1f60 */ lwz r0, 0xc(r3)
    /* 0x805a1f64 */ rlwinm. r0, r0, 0, 0x11, 0x12
    /* 0x805a1f68 */ bne 0x805a1fa0
    /* 0x805a1f6c */ lhz r0, 0x334(r30)
    /* 0x805a1f70 */ lis r4, 0
    /* 0x805a1f74 */ mr r3, r31
    /* 0x805a1f78 */ ori r0, r0, 0x20
    /* 0x805a1f7c */ sth r0, 0x334(r30)
    /* 0x805a1f80 */ lwz r31, 0(r4)
    /* 0x805a1f84 */ bl 0x80590a9c
    /* 0x805a1f88 */ mr r0, r3
    /* 0x805a1f8c */ mr r3, r31
    /* 0x805a1f90 */ clrlwi r4, r0, 0x18
    /* 0x805a1f94 */ li r5, 0
    /* 0x805a1f98 */ bl 0x80720be0
    /* 0x805a1f9c */ b 0x805a1fd0
    /* 0x805a1fa0 */ lhz r0, 0x334(r30)
    /* 0x805a1fa4 */ lis r4, 0
    /* 0x805a1fa8 */ mr r3, r31
    /* 0x805a1fac */ rlwinm r0, r0, 0, 0x1b, 0x19
    /* 0x805a1fb0 */ sth r0, 0x334(r30)
    /* 0x805a1fb4 */ lwz r31, 0(r4)
    /* 0x805a1fb8 */ bl 0x80590a9c
    /* 0x805a1fbc */ mr r0, r3
    /* 0x805a1fc0 */ mr r3, r31
    /* 0x805a1fc4 */ clrlwi r4, r0, 0x18
    /* 0x805a1fc8 */ li r5, 1
    /* 0x805a1fcc */ bl 0x80720be0
    /* 0x805a1fd0 */ lwz r0, 0x14(r1)
    /* 0x805a1fd4 */ lwz r31, 0xc(r1)
    /* 0x805a1fd8 */ lwz r30, 8(r1)
    /* 0x805a1fdc */ mtlr r0
    /* 0x805a1fe0 */ addi r1, r1, 0x10
    /* 0x805a1fe4 */ blr
    /* 0x805a1fe8 */ lhz r0, 0x334(r3)
    /* 0x805a1fec */ rlwinm. r0, r0, 0, 0x1a, 0x1a
    /* 0x805a1ff0 */ beq 0x805a2068
    /* 0x805a1ff4 */ lfs f1, 0x70(r3)
    /* 0x805a1ff8 */ lfs f0, 0xc4(r3)
    /* 0x805a1ffc */ lfs f3, 0x74(r3)
    /* 0x805a2000 */ fadds f5, f1, f0
    /* 0x805a2004 */ lfs f2, 0xc8(r3)
    /* 0x805a2008 */ lfs f1, 0x78(r3)
    /* 0x805a200c */ fadds f4, f3, f2
    /* 0x805a2010 */ lfs f0, 0xcc(r3)
    /* 0x805a2014 */ lfs f9, 0x308(r3)
    /* 0x805a2018 */ fadds f3, f1, f0
    /* 0x805a201c */ lfs f2, 0x138(r3)
    /* 0x805a2020 */ lfs f1, 0x13c(r3)
    /* 0x805a2024 */ lfs f0, 0x140(r3)
    /* 0x805a2028 */ fmuls f2, f9, f2
    /* 0x805a202c */ fmuls f1, f9, f1
    /* 0x805a2030 */ fmuls f0, f9, f0
    /* 0x805a2034 */ lfs f8, 0x268(r3)
    /* 0x805a2038 */ fadds f2, f5, f2
    /* 0x805a203c */ lfs f7, 0x26c(r3)
    /* 0x805a2040 */ fadds f1, f4, f1
    /* 0x805a2044 */ fadds f0, f3, f0
    /* 0x805a2048 */ lfs f6, 0x270(r3)
    /* 0x805a204c */ stfs f8, 0x64(r3)
    /* 0x805a2050 */ stfs f7, 0x68(r3)
    /* 0x805a2054 */ stfs f6, 0x6c(r3)
    /* 0x805a2058 */ stfs f2, 0x70(r3)
    /* 0x805a205c */ stfs f1, 0x74(r3)
    /* 0x805a2060 */ stfs f0, 0x78(r3)
    /* 0x805a2064 */ blr
    /* 0x805a2068 */ lfs f6, 0x23c(r3)
    /* 0x805a206c */ lfs f2, 0x138(r3)
    /* 0x805a2070 */ lfs f1, 0x13c(r3)
    /* 0x805a2074 */ fmuls f5, f6, f2
    /* 0x805a2078 */ lfs f4, 0x70(r3)
    /* 0x805a207c */ lfs f0, 0x140(r3)
    /* 0x805a2080 */ fmuls f3, f6, f1
    /* 0x805a2084 */ lfs f2, 0x74(r3)
    /* 0x805a2088 */ fmuls f1, f6, f0
    /* 0x805a208c */ lfs f0, 0x78(r3)
    /* 0x805a2090 */ fadds f4, f4, f5
    /* 0x805a2094 */ fadds f2, f2, f3
    /* 0x805a2098 */ fadds f0, f0, f1
    /* 0x805a209c */ stfs f4, 0x70(r3)
    /* 0x805a20a0 */ stfs f2, 0x74(r3)
    /* 0x805a20a4 */ stfs f0, 0x78(r3)
    /* 0x805a20a8 */ blr
