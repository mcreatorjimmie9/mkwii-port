/* Function at 0x8082FAAC, size=304 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8082FAAC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8082FABC
    r31 = r31 + 0; // 0x8082FAC0
    *(8 + r1) = r30; // stw @ 0x8082FAC4
    r30 = r3;
    /* lfs f0, 0xb4(r31) */ // 0x8082FACC
    r0 = *(0x78 + r3); // lwz @ 0x8082FAD0
    /* lfs f1, 0xb0(r31) */ // 0x8082FAD4
    r0 = r0 | 0x404; // 0x8082FAD8
    *(0x78 + r3) = r0; // stw @ 0x8082FADC
    /* lfs f2, 0x94(r4) */ // 0x8082FAE0
    /* fmuls f2, f0, f2 */ // 0x8082FAE4
    /* lfs f0, 0xb8(r31) */ // 0x8082FAE8
    /* fadds f1, f1, f2 */ // 0x8082FAEC
    /* stfs f1, 0x1d0(r3) */ // 0x8082FAF0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082FAF4
    if (<=) goto 0x0x8082fb00;
    /* stfs f0, 0x1d0(r3) */ // 0x8082FAFC
    r3 = *(0xc + r4); // lwz @ 0x8082FB00
    r3 = *(0xc + r3); // lhz @ 0x8082FB04
    /* rlwinm. r0, r3, 0, 0x1a, 0x1a */ // 0x8082FB08
    if (==) goto 0x0x8082fb6c;
    /* lfs f1, 0x94(r4) */ // 0x8082FB10
    /* lfs f0, 0xc0(r31) */ // 0x8082FB14
    /* lfs f3, 0xbc(r31) */ // 0x8082FB18
    /* fmuls f0, f1, f0 */ // 0x8082FB1C
    /* fadds f0, f3, f0 */ // 0x8082FB20
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8082FB24
    if (>=) goto 0x0x8082fb30;
    /* b 0x8082fb44 */ // 0x8082FB2C
    /* lfs f3, 0xc4(r31) */ // 0x8082FB30
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8082FB34
    if (<=) goto 0x0x8082fb40;
    /* b 0x8082fb44 */ // 0x8082FB3C
    /* fmr f3, f0 */ // 0x8082FB40
    /* lfs f1, 0xc8(r31) */ // 0x8082FB44
    r3 = r30;
    /* lfs f2, 0xcc(r31) */ // 0x8082FB4C
    /* li r5, 2 */ // 0x8082FB50
    /* li r6, 0 */ // 0x8082FB54
    FUN_8083C744(r3, r5, r6); // bl 0x8083C744
    /* li r0, 0x5a */ // 0x8082FB5C
    *(0x1dc + r30) = r0; // stw @ 0x8082FB60
    /* li r3, 0 */ // 0x8082FB64
    /* b 0x8082fbc4 */ // 0x8082FB68
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x8082FB6C
    if (==) goto 0x0x8082fb94;
    /* lfs f1, 0xc8(r31) */ // 0x8082FB74
    r3 = r30;
    /* lfs f2, 0xcc(r31) */ // 0x8082FB7C
    /* li r5, 3 */ // 0x8082FB80
    /* lfs f3, 0xc4(r31) */ // 0x8082FB84
    /* li r6, 1 */ // 0x8082FB88
    FUN_8083C744(r3, r5, r6); // bl 0x8083C744
    /* b 0x8082fbb0 */ // 0x8082FB90
    /* lfs f1, 0xd0(r31) */ // 0x8082FB94
    r3 = r30;
    /* lfs f2, 0xcc(r31) */ // 0x8082FB9C
    /* li r5, 3 */ // 0x8082FBA0
    /* lfs f3, 0xc4(r31) */ // 0x8082FBA4
    /* li r6, 1 */ // 0x8082FBA8
    FUN_8083C744(r3, r5, r6); // bl 0x8083C744
    /* lfs f1, 0(r31) */ // 0x8082FBB0
    r3 = r30;
    /* li r4, 0x100 */ // 0x8082FBB8
    FUN_8082DFAC(r6, r3, r4); // bl 0x8082DFAC
    /* li r3, 1 */ // 0x8082FBC0
    r0 = *(0x14 + r1); // lwz @ 0x8082FBC4
    r31 = *(0xc + r1); // lwz @ 0x8082FBC8
    r30 = *(8 + r1); // lwz @ 0x8082FBCC
    return;
}