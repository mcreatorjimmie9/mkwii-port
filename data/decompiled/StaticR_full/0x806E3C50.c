/* Function at 0x806E3C50, size=280 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E3C50(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806E3C60
    *(8 + r1) = r30; // stw @ 0x806E3C64
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x806E3C6C
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806e3c84;
    /* li r3, 1 */ // 0x806E3C7C
    /* b 0x806e3d50 */ // 0x806E3C80
    r3 = *(0 + r31); // lwz @ 0x806E3C84
    /* lis r4, 0 */ // 0x806E3C88
    r4 = *(0 + r4); // lwz @ 0x806E3C8C
    /* lis r5, 0 */ // 0x806E3C90
    r0 = *(0x291c + r3); // lwz @ 0x806E3C94
    /* li r6, 1 */ // 0x806E3C98
    r9 = *(0x24 + r4); // lbz @ 0x806E3C9C
    /* li r8, 0 */ // 0x806E3CA0
    /* mulli r0, r0, 0x58 */ // 0x806E3CA4
    r7 = *(4 + r30); // lwz @ 0x806E3CA8
    r5 = *(0 + r5); // lwz @ 0x806E3CAC
    /* li r10, 0 */ // 0x806E3CB0
    r4 = r3 + r0; // 0x806E3CB4
    r0 = *(0x59 + r4); // lbz @ 0x806E3CB8
    r0 = r6 << r0; // slw
    r7 = r7 | r0; // 0x806E3CC0
    /* mtctr r9 */ // 0x806E3CC4
    if (<=) goto 0x0x806e3d40;
    r0 = *(0x2930 + r3); // lwz @ 0x806E3CD0
    r4 = r6 << r10; // slw
    /* and. r0, r4, r0 */ // 0x806E3CD8
    if (!=) goto 0x0x806e3d38;
    r4 = *(0xc + r5); // lwz @ 0x806E3CE0
    r0 = r10 rlwinm 2; // rlwinm
    /* lwzx r4, r4, r0 */ // 0x806E3CE8
    r0 = *(0x38 + r4); // lwz @ 0x806E3CEC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x806E3CF0
    if (!=) goto 0x0x806e3d38;
    if (<) goto 0x0x806e3d14;
    if (>=) goto 0x0x806e3d14;
    r4 = r3 + r10; // 0x806E3D08
    r4 = *(0x2920 + r4); // lbz @ 0x806E3D0C
    /* b 0x806e3d18 */ // 0x806E3D10
    /* li r4, 0xff */ // 0x806E3D14
    r0 = *(0x291c + r3); // lwz @ 0x806E3D18
    r9 = r6 << r4; // slw
    /* mulli r0, r0, 0x58 */ // 0x806E3D20
    r4 = r3 + r0; // 0x806E3D24
    r0 = *(0x48 + r4); // lwz @ 0x806E3D28
    /* and. r0, r9, r0 */ // 0x806E3D2C
    if (==) goto 0x0x806e3d38;
    r8 = r8 | r9; // 0x806E3D34
    if (counter-- != 0) goto 0x0x806e3cd0;
    r0 = r8 & r7; // 0x806E3D40
    /* subf r0, r8, r0 */ // 0x806E3D44
    /* cntlzw r0, r0 */ // 0x806E3D48
    /* srwi r3, r0, 5 */ // 0x806E3D4C
    r0 = *(0x14 + r1); // lwz @ 0x806E3D50
    r31 = *(0xc + r1); // lwz @ 0x806E3D54
    r30 = *(8 + r1); // lwz @ 0x806E3D58
    return;
}