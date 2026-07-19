/* Function at 0x806E3B3C, size=276 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_806E3B3C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806E3B48
    r29 = r3;
    FUN_806E4D7C(); // bl 0x806E4D7C
    r3 = r29;
    FUN_806E5364(r3); // bl 0x806E5364
    /* lis r3, 0 */ // 0x806E3B5C
    r3 = *(0 + r3); // lwz @ 0x806E3B60
    r0 = *(0x291c + r3); // lwz @ 0x806E3B64
    /* mulli r0, r0, 0x58 */ // 0x806E3B68
    r4 = r3 + r0; // 0x806E3B6C
    r0 = *(0x8b + r4); // lbz @ 0x806E3B70
    if (!=) goto 0x0x806e3b80;
    FUN_806E6508(); // bl 0x806E6508
    /* lis r3, 0 */ // 0x806E3B80
    r3 = *(0 + r3); // lwz @ 0x806E3B84
    FUN_806EB1B4(r3); // bl 0x806EB1B4
    /* lis r3, 0 */ // 0x806E3B8C
    r3 = *(0 + r3); // lwz @ 0x806E3B90
    FUN_806F1310(r3, r3); // bl 0x806F1310
    /* li r30, 0 */ // 0x806E3B98
    /* lis r31, 0 */ // 0x806E3B9C
    /* li r26, 1 */ // 0x806E3BA0
    /* lis r27, 0 */ // 0x806E3BA4
    /* lis r28, 0 */ // 0x806E3BA8
    /* b 0x806e3c2c */ // 0x806E3BAC
    r5 = *(0 + r31); // lwz @ 0x806E3BB4
    if (<) goto 0x0x806e3bd0;
    if (>=) goto 0x0x806e3bd0;
    r3 = r5 + r30; // 0x806E3BC4
    r4 = *(0x2920 + r3); // lbz @ 0x806E3BC8
    /* b 0x806e3bd4 */ // 0x806E3BCC
    /* li r4, 0xff */ // 0x806E3BD0
    r0 = *(0x2930 + r5); // lwz @ 0x806E3BD4
    r3 = r26 << r30; // slw
    /* and. r0, r3, r0 */ // 0x806E3BDC
    if (!=) goto 0x0x806e3c1c;
    r3 = *(0 + r31); // lwz @ 0x806E3BE4
    r0 = *(0x291c + r3); // lwz @ 0x806E3BE8
    /* mulli r0, r0, 0x58 */ // 0x806E3BEC
    r3 = r3 + r0; // 0x806E3BF0
    r0 = *(0x59 + r3); // lbz @ 0x806E3BF4
    if (==) goto 0x0x806e3c1c;
    r0 = *(0x48 + r3); // lwz @ 0x806E3C00
    r3 = r26 << r4; // slw
    /* and. r0, r3, r0 */ // 0x806E3C08
    if (==) goto 0x0x806e3c1c;
    r0 = *(0xc + r29); // lwz @ 0x806E3C10
    /* and. r0, r0, r3 */ // 0x806E3C14
    if (==) goto 0x0x806e3c28;
    r3 = *(0 + r27); // lwz @ 0x806E3C1C
    /* clrlwi r4, r30, 0x18 */ // 0x806E3C20
    FUN_805C32DC(); // bl 0x805C32DC
    r30 = r30 + 1; // 0x806E3C28
    r3 = *(0 + r28); // lwz @ 0x806E3C2C
    r0 = *(0x24 + r3); // lbz @ 0x806E3C30
    if (<) goto 0x0x806e3bb0;
    r0 = *(0x24 + r1); // lwz @ 0x806E3C40
    return;
}