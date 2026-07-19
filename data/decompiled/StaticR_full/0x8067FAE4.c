/* Function at 0x8067FAE4, size=468 bytes */
/* Stack frame: 16 bytes */

int FUN_8067FAE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8067FAF0
    if (==) goto 0x0x8067fb50;
    if (>=) goto 0x0x8067fb2c;
    if (==) goto 0x0x8067fb50;
    if (>=) goto 0x0x8067fb20;
    if (==) goto 0x0x8067fc00;
    if (>=) goto 0x0x8067fca4;
    if (==) goto 0x0x8067fb50;
    /* b 0x8067fca4 */ // 0x8067FB1C
    if (==) goto 0x0x8067fc00;
    /* b 0x8067fca4 */ // 0x8067FB28
    if (==) goto 0x0x8067fb50;
    if (>=) goto 0x0x8067fb44;
    if (==) goto 0x0x8067fc00;
    /* b 0x8067fca4 */ // 0x8067FB40
    if (==) goto 0x0x8067fc00;
    /* b 0x8067fca4 */ // 0x8067FB4C
    /* li r3, -1 */ // 0x8067FB54
    if (==) goto 0x0x8067fb78;
    if (==) goto 0x0x8067fb94;
    if (==) goto 0x0x8067fbb0;
    if (==) goto 0x0x8067fbcc;
    /* b 0x8067fbe4 */ // 0x8067FB74
    /* lis r3, 0 */ // 0x8067FB78
    r3 = *(0 + r3); // lwz @ 0x8067FB7C
    r12 = *(0x1720 + r3); // lwzu @ 0x8067FB80
    r12 = *(0x10 + r12); // lwz @ 0x8067FB84
    /* mtctr r12 */ // 0x8067FB88
    /* bctrl  */ // 0x8067FB8C
    /* b 0x8067fbe4 */ // 0x8067FB90
    /* lis r3, 0 */ // 0x8067FB94
    r3 = *(0 + r3); // lwz @ 0x8067FB98
    r12 = *(0x2040 + r3); // lwzu @ 0x8067FB9C
    r12 = *(0x10 + r12); // lwz @ 0x8067FBA0
    /* mtctr r12 */ // 0x8067FBA4
    /* bctrl  */ // 0x8067FBA8
    /* b 0x8067fbe4 */ // 0x8067FBAC
    /* lis r3, 0 */ // 0x8067FBB0
    r3 = *(0 + r3); // lwz @ 0x8067FBB4
    r12 = *(0x2960 + r3); // lwzu @ 0x8067FBB8
    r12 = *(0x10 + r12); // lwz @ 0x8067FBBC
    /* mtctr r12 */ // 0x8067FBC0
    /* bctrl  */ // 0x8067FBC4
    /* b 0x8067fbe4 */ // 0x8067FBC8
    /* lis r3, 0 */ // 0x8067FBCC
    r3 = *(0 + r3); // lwz @ 0x8067FBD0
    r12 = *(0x3280 + r3); // lwzu @ 0x8067FBD4
    r12 = *(0x10 + r12); // lwz @ 0x8067FBD8
    /* mtctr r12 */ // 0x8067FBDC
    /* bctrl  */ // 0x8067FBE0
    /* subfic r0, r3, 2 */ // 0x8067FBE4
    /* li r4, 2 */ // 0x8067FBE8
    /* orc r3, r4, r3 */ // 0x8067FBEC
    /* srwi r0, r0, 1 */ // 0x8067FBF0
    /* subf r0, r0, r3 */ // 0x8067FBF4
    /* srwi r3, r0, 0x1f */ // 0x8067FBF8
    /* b 0x8067fca8 */ // 0x8067FBFC
    /* li r3, -1 */ // 0x8067FC04
    if (==) goto 0x0x8067fc28;
    if (==) goto 0x0x8067fc44;
    if (==) goto 0x0x8067fc60;
    if (==) goto 0x0x8067fc7c;
    /* b 0x8067fc94 */ // 0x8067FC24
    /* lis r3, 0 */ // 0x8067FC28
    r3 = *(0 + r3); // lwz @ 0x8067FC2C
    r12 = *(0x3ba0 + r3); // lwzu @ 0x8067FC30
    r12 = *(0x10 + r12); // lwz @ 0x8067FC34
    /* mtctr r12 */ // 0x8067FC38
    /* bctrl  */ // 0x8067FC3C
    /* b 0x8067fc94 */ // 0x8067FC40
    /* lis r3, 0 */ // 0x8067FC44
    r3 = *(0 + r3); // lwz @ 0x8067FC48
    r12 = *(0x3c50 + r3); // lwzu @ 0x8067FC4C
    r12 = *(0x10 + r12); // lwz @ 0x8067FC50
    /* mtctr r12 */ // 0x8067FC54
    /* bctrl  */ // 0x8067FC58
    /* b 0x8067fc94 */ // 0x8067FC5C
    /* lis r3, 0 */ // 0x8067FC60
    r3 = *(0 + r3); // lwz @ 0x8067FC64
    r12 = *(0x3d00 + r3); // lwzu @ 0x8067FC68
    r12 = *(0x10 + r12); // lwz @ 0x8067FC6C
    /* mtctr r12 */ // 0x8067FC70
    /* bctrl  */ // 0x8067FC74
    /* b 0x8067fc94 */ // 0x8067FC78
    /* lis r3, 0 */ // 0x8067FC7C
    r3 = *(0 + r3); // lwz @ 0x8067FC80
    r12 = *(0x3db0 + r3); // lwzu @ 0x8067FC84
    r12 = *(0x10 + r12); // lwz @ 0x8067FC88
    /* mtctr r12 */ // 0x8067FC8C
    /* bctrl  */ // 0x8067FC90
    r0 = r3 + -3; // 0x8067FC94
    /* cntlzw r0, r0 */ // 0x8067FC98
    /* srwi r3, r0, 5 */ // 0x8067FC9C
    /* b 0x8067fca8 */ // 0x8067FCA0
    /* li r3, 0 */ // 0x8067FCA4
    r0 = *(0x14 + r1); // lwz @ 0x8067FCA8
    return;
}