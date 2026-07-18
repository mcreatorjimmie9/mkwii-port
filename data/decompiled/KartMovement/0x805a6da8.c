// sub_805a6da8
// Address: 0x805a6da8
// Size: 8192 bytes (326 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a6da8 */ stwu r1, -0x10(r1)
    /* 0x805a6dac */ mflr r0
    /* 0x805a6db0 */ cmpwi r3, 0
    /* 0x805a6db4 */ stw r0, 0x14(r1)
    /* 0x805a6db8 */ stw r31, 0xc(r1)
    /* 0x805a6dbc */ mr r31, r3
    /* 0x805a6dc0 */ beq 0x805a6dd0
    /* 0x805a6dc4 */ cmpwi r4, 0
    /* 0x805a6dc8 */ ble 0x805a6dd0
    /* 0x805a6dcc */ bl 0x80555bf4
    /* 0x805a6dd0 */ mr r3, r31
    /* 0x805a6dd4 */ lwz r31, 0xc(r1)
    /* 0x805a6dd8 */ lwz r0, 0x14(r1)
    /* 0x805a6ddc */ mtlr r0
    /* 0x805a6de0 */ addi r1, r1, 0x10
    /* 0x805a6de4 */ blr
    /* 0x805a6de8 */ stwu r1, -0x10(r1)
    /* 0x805a6dec */ mflr r0
    /* 0x805a6df0 */ cmpwi r3, 0
    /* 0x805a6df4 */ stw r0, 0x14(r1)
    /* 0x805a6df8 */ stw r31, 0xc(r1)
    /* 0x805a6dfc */ mr r31, r3
    /* 0x805a6e00 */ beq 0x805a6e10
    /* 0x805a6e04 */ cmpwi r4, 0
    /* 0x805a6e08 */ ble 0x805a6e10
    /* 0x805a6e0c */ bl 0x80555bf4
    /* 0x805a6e10 */ mr r3, r31
    /* 0x805a6e14 */ lwz r31, 0xc(r1)
    /* 0x805a6e18 */ lwz r0, 0x14(r1)
    /* 0x805a6e1c */ mtlr r0
    /* 0x805a6e20 */ addi r1, r1, 0x10
    /* 0x805a6e24 */ blr
    /* 0x805a6e28 */ stwu r1, -0x10(r1)
    /* 0x805a6e2c */ mflr r0
    /* 0x805a6e30 */ cmpwi r3, 0
    /* 0x805a6e34 */ stw r0, 0x14(r1)
    /* 0x805a6e38 */ stw r31, 0xc(r1)
    /* 0x805a6e3c */ mr r31, r3
    /* 0x805a6e40 */ beq 0x805a6e50
    /* 0x805a6e44 */ cmpwi r4, 0
    /* 0x805a6e48 */ ble 0x805a6e50
    /* 0x805a6e4c */ bl 0x80555bf4
    /* 0x805a6e50 */ mr r3, r31
    /* 0x805a6e54 */ lwz r31, 0xc(r1)
    /* 0x805a6e58 */ lwz r0, 0x14(r1)
    /* 0x805a6e5c */ mtlr r0
    /* 0x805a6e60 */ addi r1, r1, 0x10
    /* 0x805a6e64 */ blr
    /* 0x805a6e68 */ lwz r3, 0x28(r3)
    /* 0x805a6e6c */ b 0x8074194c
    /* 0x805a6e70 */ stwu r1, -0x20(r1)
    /* 0x805a6e74 */ mflr r0
    /* 0x805a6e78 */ stw r0, 0x24(r1)
    /* 0x805a6e7c */ stw r31, 0x1c(r1)
    /* 0x805a6e80 */ lis r31, 0
    /* 0x805a6e84 */ addi r31, r31, 0
    /* 0x805a6e88 */ stw r30, 0x18(r1)
    /* 0x805a6e8c */ mr r30, r3
    /* 0x805a6e90 */ stw r29, 0x14(r1)
    /* 0x805a6e94 */ stw r28, 0x10(r1)
    /* 0x805a6e98 */ li r28, 0
    /* 0x805a6e9c */ lwz r4, 0x2c(r3)
    /* 0x805a6ea0 */ cmpwi r4, 0
    /* 0x805a6ea4 */ beq 0x805a6ec0
    /* 0x805a6ea8 */ lwz r4, 0(r4)
    /* 0x805a6eac */ lwz r4, 4(r4)
    /* 0x805a6eb0 */ lwz r0, 0x14(r4)
    /* 0x805a6eb4 */ andi. r0, r0, 0x4400
    /* 0x805a6eb8 */ beq 0x805a6ec0
    /* 0x805a6ebc */ li r28, 1
    /* 0x805a6ec0 */ cmpwi r28, 0
    /* 0x805a6ec4 */ beq 0x805a6f84
    /* 0x805a6ec8 */ lbz r0, 0x1a7(r3)
    /* 0x805a6ecc */ cmpwi r0, 0
    /* 0x805a6ed0 */ bne 0x805a6f84
    /* 0x805a6ed4 */ lis r4, 0
    /* 0x805a6ed8 */ lwz r4, 0(r4)
    /* 0x805a6edc */ lwz r0, 0x48(r4)
    /* 0x805a6ee0 */ cmpwi r0, 0
    /* 0x805a6ee4 */ beq 0x805a6ef8
    /* 0x805a6ee8 */ stw r0, 8(r3)
    /* 0x805a6eec */ mr r3, r30
    /* 0x805a6ef0 */ bl 0x805a7690
    /* 0x805a6ef4 */ b 0x805a6f70
    /* 0x805a6ef8 */ lwz r3, 4(r3)
    /* 0x805a6efc */ bl 0x805a2430
    /* 0x805a6f00 */ li r3, 0
    /* 0x805a6f04 */ sth r3, 0x1b8(r30)
    /* 0x805a6f08 */ lfs f0, 0(r31)
    /* 0x805a6f0c */ li r0, 1
    /* 0x805a6f10 */ stfs f0, 0x1d0(r30)
    /* 0x805a6f14 */ sth r3, 0x1ba(r30)
    /* 0x805a6f18 */ stfs f0, 0x1d4(r30)
    /* 0x805a6f1c */ sth r3, 0x1bc(r30)
    /* 0x805a6f20 */ stfs f0, 0x1d8(r30)
    /* 0x805a6f24 */ sth r3, 0x1be(r30)
    /* 0x805a6f28 */ stfs f0, 0x1dc(r30)
    /* 0x805a6f2c */ sth r3, 0x1c0(r30)
    /* 0x805a6f30 */ stfs f0, 0x1e0(r30)
    /* 0x805a6f34 */ sth r3, 0x1c2(r30)
    /* 0x805a6f38 */ stfs f0, 0x1e4(r30)
    /* 0x805a6f3c */ sth r3, 0x1c4(r30)
    /* 0x805a6f40 */ stfs f0, 0x1e8(r30)
    /* 0x805a6f44 */ sth r3, 0x1c6(r30)
    /* 0x805a6f48 */ stfs f0, 0x1ec(r30)
    /* 0x805a6f4c */ sth r3, 0x1c8(r30)
    /* 0x805a6f50 */ stfs f0, 0x1f0(r30)
    /* 0x805a6f54 */ sth r3, 0x1ca(r30)
    /* 0x805a6f58 */ stfs f0, 0x1f4(r30)
    /* 0x805a6f5c */ sth r3, 0x1cc(r30)
    /* 0x805a6f60 */ stfs f0, 0x1f8(r30)
    /* 0x805a6f64 */ sth r3, 0x1ce(r30)
    /* 0x805a6f68 */ stfs f0, 0x1fc(r30)
    /* 0x805a6f6c */ stb r0, 0x1a8(r30)
    /* 0x805a6f70 */ mr r3, r30
    /* 0x805a6f74 */ li r4, 1
    /* 0x805a6f78 */ bl 0x805a5788
    /* 0x805a6f7c */ li r0, 1
    /* 0x805a6f80 */ stb r0, 0x1a7(r30)
    /* 0x805a6f84 */ cmpwi r28, 0
    /* 0x805a6f88 */ beq 0x805a6f98
    /* 0x805a6f8c */ lbz r0, 0x1a7(r30)
    /* 0x805a6f90 */ cmpwi r0, 0
    /* 0x805a6f94 */ beq 0x805a73a4
    /* 0x805a6f98 */ lbz r0, 0x1a8(r30)
    /* 0x805a6f9c */ cmpwi r0, 0
    /* 0x805a6fa0 */ beq 0x805a7080
    /* 0x805a6fa4 */ lwz r3, 0x2c(r30)
    /* 0x805a6fa8 */ bl 0x8059024c
    /* 0x805a6fac */ lwz r4, 4(r30)
    /* 0x805a6fb0 */ lfs f0, 0(r3)
    /* 0x805a6fb4 */ lwz r4, 0x90(r4)
    /* 0x805a6fb8 */ stfs f0, 0x70(r4)
    /* 0x805a6fbc */ lfs f0, 4(r3)
    /* 0x805a6fc0 */ stfs f0, 0x74(r4)
    /* 0x805a6fc4 */ lfs f0, 8(r3)
    /* 0x805a6fc8 */ stfs f0, 0x78(r4)
    /* 0x805a6fcc */ lwz r4, 4(r30)
    /* 0x805a6fd0 */ lwz r3, 0x2c(r30)
    /* 0x805a6fd4 */ lwz r29, 0x90(r4)
    /* 0x805a6fd8 */ bl 0x80590a08
    /* 0x805a6fdc */ lis r3, 0
    /* 0x805a6fe0 */ lfs f0, 0x74(r29)
    /* 0x805a6fe4 */ lfs f2, 0(r3)
    /* 0x805a6fe8 */ mr r3, r30
    /* 0x805a6fec */ fsubs f1, f2, f1
    /* 0x805a6ff0 */ fadds f0, f0, f1
    /* 0x805a6ff4 */ stfs f0, 0x74(r29)
    /* 0x805a6ff8 */ lwz r12, 0(r30)
    /* 0x805a6ffc */ lwz r12, 0x14(r12)
    /* 0x805a7000 */ mtctr r12
    /* 0x805a7004 */ bctrl
    /* 0x805a7008 */ lis r4, 0
    /* 0x805a700c */ lis r5, 0
    /* 0x805a7010 */ addi r4, r4, 0
    /* 0x805a7014 */ lis r6, 0
    /* 0x805a7018 */ lfs f0, 8(r4)
    /* 0x805a701c */ mr r3, r30
    /* 0x805a7020 */ stfs f0, 0x18(r30)
    /* 0x805a7024 */ addi r5, r5, 0
    /* 0x805a7028 */ addi r6, r6, 0
    /* 0x805a702c */ stfs f0, 0x1c(r30)
    /* 0x805a7030 */ bl 0x805a5a60
    /* 0x805a7034 */ lwz r3, 4(r30)
    /* 0x805a7038 */ lfs f2, 0x58(r31)
    /* 0x805a703c */ lwz r29, 0x8c(r3)
    /* 0x805a7040 */ lfs f0, 0x10(r29)
    /* 0x805a7044 */ fcmpu cr0, f0, f2
    /* 0x805a7048 */ beq 0x805a73a4
    /* 0x805a704c */ lfs f1, 0x10(r31)
    /* 0x805a7050 */ addi r3, r1, 8
    /* 0x805a7054 */ lfs f0, 0x14(r31)
    /* 0x805a7058 */ addi r4, r1, 0xc
    /* 0x805a705c */ fmuls f1, f2, f1
    /* 0x805a7060 */ stfs f2, 0x10(r29)
    /* 0x805a7064 */ fmuls f1, f0, f1
    /* 0x805a7068 */ bl 0x80555bf4
    /* 0x805a706c */ lfs f1, 0xc(r1)
    /* 0x805a7070 */ lfs f0, 8(r1)
    /* 0x805a7074 */ fdivs f0, f1, f0
    /* 0x805a7078 */ stfs f0, 0x14(r29)
    /* 0x805a707c */ b 0x805a73a4
    /* 0x805a7080 */ lwz r3, 0x2c(r30)
    /* 0x805a7084 */ lwz r3, 0(r3)
    /* 0x805a7088 */ lwz r3, 4(r3)
    /* 0x805a708c */ lwz r0, 0x14(r3)
    /* 0x805a7090 */ rlwinm. r0, r0, 0, 0x15, 0x15
    /* 0x805a7094 */ beq 0x805a70f0
    /* 0x805a7098 */ lwz r12, 0(r30)
    /* 0x805a709c */ mr r3, r30
    /* 0x805a70a0 */ lwz r12, 0x14(r12)
    /* 0x805a70a4 */ mtctr r12
    /* 0x805a70a8 */ bctrl
    /* 0x805a70ac */ cmpwi r3, 0
    /* 0x805a70b0 */ bne 0x805a70f0
    /* 0x805a70b4 */ lwz r0, 0x2c(r30)
    /* 0x805a70b8 */ cmpwi r0, 0
    /* 0x805a70bc */ beq 0x805a70f0
    /* 0x805a70c0 */ lbz r0, 0x1a7(r30)
    /* 0x805a70c4 */ cmpwi r0, 0
    /* 0x805a70c8 */ bne 0x805a7364
    /* 0x805a70cc */ lis r4, 0
    /* 0x805a70d0 */ mr r3, r30
    /* 0x805a70d4 */ lwz r4, 0(r4)
    /* 0x805a70d8 */ lwz r0, 0x48(r4)
    /* 0x805a70dc */ stw r0, 8(r30)
    /* 0x805a70e0 */ bl 0x805a7690
    /* 0x805a70e4 */ li r0, 1
    /* 0x805a70e8 */ stb r0, 0x1a7(r30)
    /* 0x805a70ec */ b 0x805a7364
    /* 0x805a70f0 */ mr r3, r30
    /* 0x805a70f4 */ bl 0x805a8530
    /* 0x805a70f8 */ lwz r0, 0x4c(r30)
    /* 0x805a70fc */ cmpwi r0, 0
    /* 0x805a7100 */ bne 0x805a728c
    /* 0x805a7104 */ lha r28, 0x30(r30)
    /* 0x805a7108 */ lwz r3, 0x2c(r30)
    /* 0x805a710c */ bl 0x8059024c
    /* 0x805a7110 */ lis r29, 0
    /* 0x805a7114 */ mr r4, r3
    /* 0x805a7118 */ lwz r3, 0(r29)
    /* 0x805a711c */ mr r5, r28
    /* 0x805a7120 */ li r6, 0
    /* 0x805a7124 */ bl 0x80518bf8
    /* 0x805a7128 */ extsh r4, r3
    /* 0x805a712c */ cmpwi r4, -1
    /* 0x805a7130 */ beq 0x805a7254
    /* 0x805a7134 */ lha r0, 0x30(r30)
    /* 0x805a7138 */ cmpw r4, r0
    /* 0x805a713c */ beq 0x805a7254
    /* 0x805a7140 */ sth r3, 0x30(r30)
    /* 0x805a7144 */ mr r3, r30
    /* 0x805a7148 */ lwz r12, 0(r30)
    /* 0x805a714c */ lwz r12, 0x18(r12)
    /* 0x805a7150 */ mtctr r12
    /* 0x805a7154 */ bctrl
    /* 0x805a7158 */ cmpwi r3, 0
    /* 0x805a715c */ bne 0x805a7364
    /* 0x805a7160 */ lwz r0, 0x4c(r30)
    /* 0x805a7164 */ lha r4, 0x30(r30)
    /* 0x805a7168 */ cmpwi r0, 1
    /* 0x805a716c */ bne 0x805a71b4
    /* 0x805a7170 */ lbz r0, 0x50(r30)
    /* 0x805a7174 */ cmpwi r0, 0
    /* 0x805a7178 */ bne 0x805a71d8
    /* 0x805a717c */ li r29, 1
    /* 0x805a7180 */ stw r29, 0x4c(r30)
    /* 0x805a7184 */ mr r3, r30
    /* 0x805a7188 */ lwz r12, 0(r30)
    /* 0x805a718c */ lwz r12, 0x14(r12)
    /* 0x805a7190 */ mtctr r12
    /* 0x805a7194 */ bctrl
    /* 0x805a7198 */ bl 0x805190c4
    /* 0x805a719c */ cmpwi r3, 0
    /* 0x805a71a0 */ beq 0x805a71ac
    /* 0x805a71a4 */ stw r3, 8(r30)
    /* 0x805a71a8 */ b 0x805a71d8
    /* 0x805a71ac */ stb r29, 0x50(r30)
    /* 0x805a71b0 */ b 0x805a71d8
    /* 0x805a71b4 */ cmpwi r4, -1
    /* 0x805a71b8 */ sth r4, 0x30(r30)
    /* 0x805a71bc */ beq 0x805a71d0
    /* 0x805a71c0 */ lwz r3, 0(r29)
    /* 0x805a71c4 */ clrlwi r4, r4, 0x10
    /* 0x805a71c8 */ bl 0x80518fec
    /* 0x805a71cc */ stw r3, 8(r30)
    /* 0x805a71d0 */ li r0, 0
    /* 0x805a71d4 */ stw r0, 0x4c(r30)
    /* 0x805a71d8 */ lwz r3, 4(r30)
    /* 0x805a71dc */ bl 0x805a2430
    /* 0x805a71e0 */ li r0, 0
    /* 0x805a71e4 */ sth r0, 0x1b8(r30)
    /* 0x805a71e8 */ lfs f0, 0(r31)
    /* 0x805a71ec */ mr r3, r30
    /* 0x805a71f0 */ stfs f0, 0x1d0(r30)
    /* 0x805a71f4 */ sth r0, 0x1ba(r30)
    /* 0x805a71f8 */ stfs f0, 0x1d4(r30)
    /* 0x805a71fc */ sth r0, 0x1bc(r30)
    /* 0x805a7200 */ stfs f0, 0x1d8(r30)
    /* 0x805a7204 */ sth r0, 0x1be(r30)
    /* 0x805a7208 */ stfs f0, 0x1dc(r30)
    /* 0x805a720c */ sth r0, 0x1c0(r30)
    /* 0x805a7210 */ stfs f0, 0x1e0(r30)
    /* 0x805a7214 */ sth r0, 0x1c2(r30)
    /* 0x805a7218 */ stfs f0, 0x1e4(r30)
    /* 0x805a721c */ sth r0, 0x1c4(r30)
    /* 0x805a7220 */ stfs f0, 0x1e8(r30)
    /* 0x805a7224 */ sth r0, 0x1c6(r30)
    /* 0x805a7228 */ stfs f0, 0x1ec(r30)
    /* 0x805a722c */ sth r0, 0x1c8(r30)
    /* 0x805a7230 */ stfs f0, 0x1f0(r30)
    /* 0x805a7234 */ sth r0, 0x1ca(r30)
    /* 0x805a7238 */ stfs f0, 0x1f4(r30)
    /* 0x805a723c */ sth r0, 0x1cc(r30)
    /* 0x805a7240 */ stfs f0, 0x1f8(r30)
    /* 0x805a7244 */ sth r0, 0x1ce(r30)
    /* 0x805a7248 */ stfs f0, 0x1fc(r30)
    /* 0x805a724c */ bl 0x805a7690
    /* 0x805a7250 */ b 0x805a7364
    /* 0x805a7254 */ lbz r0, 0x1a4(r30)
    /* 0x805a7258 */ cmpwi r0, 0
    /* 0x805a725c */ beq 0x805a7364
    /* 0x805a7260 */ lwz r3, 0x2c(r30)
    /* 0x805a7264 */ lwz r3, 0(r3)
    /* 0x805a7268 */ lwz r3, 4(r3)
    /* 0x805a726c */ lwz r0, 0x14(r3)
    /* 0x805a7270 */ rlwinm. r0, r0, 0, 0x10, 0x10
    /* 0x805a7274 */ beq 0x805a7364
    /* 0x805a7278 */ li r3, 0
    /* 0x805a727c */ li r0, 1
    /* 0x805a7280 */ stw r3, 8(r30)
    /* 0x805a7284 */ stb r0, 0x20(r30)
    /* 0x805a7288 */ b 0x805a7364
    /* 0x805a728c */ cmpwi r0, 1
    /* 0x805a7290 */ bne 0x805a7364
    /* 0x805a7294 */ lwz r12, 0(r30)
    /* 0x805a7298 */ mr r3, r30
    /* 0x805a729c */ li r29, 0
    /* 0x805a72a0 */ lwz r12, 0x14(r12)
    /* 0x805a72a4 */ mtctr r12
    /* 0x805a72a8 */ bctrl
    /* 0x805a72ac */ lfs f1, 0xc(r30)
    /* 0x805a72b0 */ lfs f0, 4(r31)
    /* 0x805a72b4 */ lwz r3, 0(r3)
    /* 0x805a72b8 */ fadds f0, f1, f0
    /* 0x805a72bc */ lfs f1, 0x44(r3)
