/* Function at 0x806E459C, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806E459C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806E45A8
    /* li r31, 0 */ // 0x806E45AC
    /* lis r27, 0 */ // 0x806E45B0
    /* li r28, 1 */ // 0x806E45B4
    /* lis r29, 0 */ // 0x806E45B8
    /* lis r30, 0 */ // 0x806E45BC
    /* b 0x806e4628 */ // 0x806E45C0
    r5 = *(0 + r27); // lwz @ 0x806E45C8
    if (<) goto 0x0x806e45e4;
    if (>=) goto 0x0x806e45e4;
    r3 = r5 + r31; // 0x806E45D8
    r4 = *(0x2920 + r3); // lbz @ 0x806E45DC
    /* b 0x806e45e8 */ // 0x806E45E0
    /* li r4, 0xff */ // 0x806E45E4
    r0 = *(0x2930 + r5); // lwz @ 0x806E45E8
    r3 = r28 << r31; // slw
    /* and. r0, r3, r0 */ // 0x806E45F0
    if (!=) goto 0x0x806e4618;
    r3 = *(0 + r27); // lwz @ 0x806E45F8
    r4 = r28 << r4; // slw
    r0 = *(0x291c + r3); // lwz @ 0x806E4600
    /* mulli r0, r0, 0x58 */ // 0x806E4604
    r3 = r3 + r0; // 0x806E4608
    r0 = *(0x48 + r3); // lwz @ 0x806E460C
    /* and. r0, r4, r0 */ // 0x806E4610
    if (!=) goto 0x0x806e4624;
    r3 = *(0 + r29); // lwz @ 0x806E4618
    /* clrlwi r4, r31, 0x18 */ // 0x806E461C
    FUN_805C32DC(); // bl 0x805C32DC
    r31 = r31 + 1; // 0x806E4624
    r3 = *(0 + r30); // lwz @ 0x806E4628
    r0 = *(0x24 + r3); // lbz @ 0x806E462C
    if (<) goto 0x0x806e45c4;
    r0 = *(0x24 + r1); // lwz @ 0x806E463C
    return;
}