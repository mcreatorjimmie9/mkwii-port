/* Function at 0x807F14B0, size=148 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F14B0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x34 + r1) = r0; // stw @ 0x807F14BC
    *(0x2c + r1) = r31; // stw @ 0x807F14C0
    r31 = r5;
    if (!=) goto 0x0x807f1504;
    r0 = *(0xb0 + r3); // lwz @ 0x807F14CC
    if (==) goto 0x0x807f14fc;
    /* lis r7, 0 */ // 0x807F14D8
    r6 = *(0 + r7); // lwzu @ 0x807F14DC
    *(0x14 + r1) = r6; // stw @ 0x807F14E0
    r5 = *(4 + r7); // lwz @ 0x807F14E8
    r0 = *(8 + r7); // lwz @ 0x807F14EC
    *(0x18 + r1) = r5; // stw @ 0x807F14F0
    *(0x1c + r1) = r0; // stw @ 0x807F14F4
    FUN_807F1048(r4); // bl 0x807F1048
    r3 = r31;
    /* b 0x807f1530 */ // 0x807F1500
    if (!=) goto 0x0x807f152c;
    r5 = *(0 + r7); // lwz @ 0x807F150C
    r0 = *(4 + r7); // lwz @ 0x807F1514
    *(0xc + r1) = r0; // stw @ 0x807F1518
    *(8 + r1) = r5; // stw @ 0x807F151C
    r0 = *(8 + r7); // lwz @ 0x807F1520
    *(0x10 + r1) = r0; // stw @ 0x807F1524
    FUN_807F1048(); // bl 0x807F1048
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x807F1530
    r31 = *(0x2c + r1); // lwz @ 0x807F1534
    return;
}