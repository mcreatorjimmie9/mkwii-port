/* Function at 0x8073FB28, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8073FB28(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8073FB40
    r29 = r3;
    r5 = *(0x124 + r3); // lwz @ 0x8073FB48
    if (!=) goto 0x0x8073fb60;
    r0 = *(0x348 + r3); // lwz @ 0x8073FB54
    if (==) goto 0x0x8073fc94;
    if (!=) goto 0x0x8073fb74;
    r0 = *(0x330 + r3); // lwz @ 0x8073FB68
    if (==) goto 0x0x8073fc94;
    if (!=) goto 0x0x8073fc10;
    r0 = r4 + 0xc; // 0x8073FB7C
    /* slwi r0, r0, 2 */ // 0x8073FB80
    r31 = r3 + r0; // 0x8073FB84
    r3 = *(0x318 + r31); // lwz @ 0x8073FB88
    r12 = *(0 + r3); // lwz @ 0x8073FB8C
    r12 = *(0x14 + r12); // lwz @ 0x8073FB90
    /* mtctr r12 */ // 0x8073FB94
    /* bctrl  */ // 0x8073FB98
    r3 = *(0x318 + r31); // lwz @ 0x8073FB9C
    r4 = r29 + 0x6f4; // 0x8073FBA0
    r12 = *(0 + r3); // lwz @ 0x8073FBA4
    r12 = *(0x78 + r12); // lwz @ 0x8073FBA8
    /* mtctr r12 */ // 0x8073FBAC
    /* bctrl  */ // 0x8073FBB0
    r3 = *(0x318 + r31); // lwz @ 0x8073FBB4
    /* mulli r0, r30, 0xc */ // 0x8073FBB8
    r12 = *(0 + r3); // lwz @ 0x8073FBBC
    r4 = r29 + r0; // 0x8073FBC0
    r12 = *(0x74 + r12); // lwz @ 0x8073FBC4
    r4 = r4 + 0x7bc; // 0x8073FBC8
    /* mtctr r12 */ // 0x8073FBCC
    /* bctrl  */ // 0x8073FBD0
    r0 = *(0xb0 + r29); // lbz @ 0x8073FBD4
    if (==) goto 0x0x8073fbf8;
    r3 = *(0x318 + r31); // lwz @ 0x8073FBE0
    r4 = r29 + 0x72c; // 0x8073FBE4
    r12 = *(0 + r3); // lwz @ 0x8073FBE8
    r12 = *(0x70 + r12); // lwz @ 0x8073FBEC
    /* mtctr r12 */ // 0x8073FBF0
    /* bctrl  */ // 0x8073FBF4
    r3 = *(0x318 + r31); // lwz @ 0x8073FBF8
    r12 = *(0 + r3); // lwz @ 0x8073FBFC
    r12 = *(0x80 + r12); // lwz @ 0x8073FC00
    /* mtctr r12 */ // 0x8073FC04
    /* bctrl  */ // 0x8073FC08
    /* b 0x8073fc94 */ // 0x8073FC0C
    if (!=) goto 0x0x8073fc94;
    r3 = *(0x330 + r3); // lwz @ 0x8073FC18
    r12 = *(0 + r3); // lwz @ 0x8073FC1C
    r12 = *(0x14 + r12); // lwz @ 0x8073FC20
    /* mtctr r12 */ // 0x8073FC24
    /* bctrl  */ // 0x8073FC28
    r3 = *(0x330 + r29); // lwz @ 0x8073FC2C
    r4 = r29 + 0x6f4; // 0x8073FC30
    r12 = *(0 + r3); // lwz @ 0x8073FC34
    r12 = *(0x78 + r12); // lwz @ 0x8073FC38
    /* mtctr r12 */ // 0x8073FC3C
    /* bctrl  */ // 0x8073FC40
    r3 = *(0x330 + r29); // lwz @ 0x8073FC44
    r4 = r29 + 0x7c8; // 0x8073FC48
    r12 = *(0 + r3); // lwz @ 0x8073FC4C
    r12 = *(0x74 + r12); // lwz @ 0x8073FC50
    /* mtctr r12 */ // 0x8073FC54
    /* bctrl  */ // 0x8073FC58
    r0 = *(0xb0 + r29); // lbz @ 0x8073FC5C
    if (==) goto 0x0x8073fc80;
    r3 = *(0x330 + r29); // lwz @ 0x8073FC68
    r4 = r29 + 0x72c; // 0x8073FC6C
    r12 = *(0 + r3); // lwz @ 0x8073FC70
    r12 = *(0x70 + r12); // lwz @ 0x8073FC74
    /* mtctr r12 */ // 0x8073FC78
    /* bctrl  */ // 0x8073FC7C
    r3 = *(0x330 + r29); // lwz @ 0x8073FC80
    r12 = *(0 + r3); // lwz @ 0x8073FC84
    r12 = *(0x80 + r12); // lwz @ 0x8073FC88
    /* mtctr r12 */ // 0x8073FC8C
    /* bctrl  */ // 0x8073FC90
    r0 = *(0x24 + r1); // lwz @ 0x8073FC94
    r31 = *(0x1c + r1); // lwz @ 0x8073FC98
    r30 = *(0x18 + r1); // lwz @ 0x8073FC9C
    r29 = *(0x14 + r1); // lwz @ 0x8073FCA0
    return;
}