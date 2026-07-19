/* Function at 0x807BFCA4, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807BFCA4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807BFCBC
    r29 = r3;
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r0 = r3 rlwinm 2; // rlwinm
    /* clrlwi r31, r3, 0x18 */ // 0x807BFCD0
    r4 = r29 + r0; // 0x807BFCD4
    r3 = r30;
    *(0x24 + r4) = r30; // stw @ 0x807BFCDC
    FUN_807B5F00(r3); // bl 0x807B5F00
    if (==) goto 0x0x807bfd24;
    /* li r0, 0xc */ // 0x807BFCEC
    r4 = r29;
    /* li r3, 0 */ // 0x807BFCF4
    /* mtctr r0 */ // 0x807BFCF8
    r0 = *(0x54 + r4); // lwz @ 0x807BFCFC
    if (!=) goto 0x0x807bfd18;
    /* slwi r0, r3, 2 */ // 0x807BFD08
    r3 = r29 + r0; // 0x807BFD0C
    *(0x54 + r3) = r30; // stw @ 0x807BFD10
    /* b 0x807bfd24 */ // 0x807BFD14
    r4 = r4 + 4; // 0x807BFD18
    r3 = r3 + 1; // 0x807BFD1C
    if (counter-- != 0) goto 0x0x807bfcfc;
    r3 = *(0x84 + r29); // lwz @ 0x807BFD24
    if (==) goto 0x0x807bfd38;
    r4 = r30;
    FUN_807C568C(r4); // bl 0x807C568C
    r3 = *(0x88 + r29); // lwz @ 0x807BFD38
    r4 = r30;
    FUN_807C2DC0(r4, r4); // bl 0x807C2DC0
    r3 = *(0x90 + r29); // lwz @ 0x807BFD44
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x807BFD4C
    r12 = *(0x14 + r12); // lwz @ 0x807BFD50
    /* mtctr r12 */ // 0x807BFD54
    /* bctrl  */ // 0x807BFD58
    r0 = *(0x24 + r1); // lwz @ 0x807BFD5C
    r31 = *(0x1c + r1); // lwz @ 0x807BFD60
    r30 = *(0x18 + r1); // lwz @ 0x807BFD64
    r29 = *(0x14 + r1); // lwz @ 0x807BFD68
    return;
}