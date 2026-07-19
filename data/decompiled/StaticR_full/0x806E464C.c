/* Function at 0x806E464C, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806E464C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806E4658
    r29 = r3;
    /* li r30, 0 */ // 0x806E4660
    /* lis r31, 0 */ // 0x806E4664
    /* li r26, 1 */ // 0x806E4668
    /* lis r27, 0 */ // 0x806E466C
    /* lis r28, 0 */ // 0x806E4670
    /* b 0x806e46f4 */ // 0x806E4674
    r5 = *(0 + r31); // lwz @ 0x806E467C
    if (<) goto 0x0x806e4698;
    if (>=) goto 0x0x806e4698;
    r3 = r5 + r30; // 0x806E468C
    r4 = *(0x2920 + r3); // lbz @ 0x806E4690
    /* b 0x806e469c */ // 0x806E4694
    /* li r4, 0xff */ // 0x806E4698
    r0 = *(0x2930 + r5); // lwz @ 0x806E469C
    r3 = r26 << r30; // slw
    /* and. r0, r3, r0 */ // 0x806E46A4
    if (!=) goto 0x0x806e46e4;
    r3 = *(0 + r31); // lwz @ 0x806E46AC
    r0 = *(0x291c + r3); // lwz @ 0x806E46B0
    /* mulli r0, r0, 0x58 */ // 0x806E46B4
    r3 = r3 + r0; // 0x806E46B8
    r0 = *(0x59 + r3); // lbz @ 0x806E46BC
    if (==) goto 0x0x806e46e4;
    r0 = *(0x48 + r3); // lwz @ 0x806E46C8
    r3 = r26 << r4; // slw
    /* and. r0, r3, r0 */ // 0x806E46D0
    if (==) goto 0x0x806e46e4;
    r0 = *(0xc + r29); // lwz @ 0x806E46D8
    /* and. r0, r0, r3 */ // 0x806E46DC
    if (==) goto 0x0x806e46f0;
    r3 = *(0 + r27); // lwz @ 0x806E46E4
    /* clrlwi r4, r30, 0x18 */ // 0x806E46E8
    FUN_805C32DC(); // bl 0x805C32DC
    r30 = r30 + 1; // 0x806E46F0
    r3 = *(0 + r28); // lwz @ 0x806E46F4
    r0 = *(0x24 + r3); // lbz @ 0x806E46F8
    if (<) goto 0x0x806e4678;
    r0 = *(0x24 + r1); // lwz @ 0x806E4708
    return;
}