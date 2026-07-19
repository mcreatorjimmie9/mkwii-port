/* Function at 0x80856F2C, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80856F2C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80856F40
    /* lis r30, 0 */ // 0x80856F44
    r30 = r30 + 0; // 0x80856F48
    r0 = *(0xa8 + r3); // lbz @ 0x80856F4C
    if (!=) goto 0x0x80856ff0;
    r0 = *(0xb4 + r3); // lbz @ 0x80856F58
    if (!=) goto 0x0x80856ff0;
    /* li r0, 0x1e */ // 0x80856F64
    *(0x2c + r3) = r0; // stw @ 0x80856F68
    *(0x38 + r3) = r4; // stw @ 0x80856F6C
    *(0x3c + r3) = r5; // stw @ 0x80856F70
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80856F78
    /* cntlzw r0, r0 */ // 0x80856F7C
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80856F80
    if (==) goto 0x0x80856f9c;
    r0 = *(0x38 + r31); // lwz @ 0x80856F88
    r3 = r30 + 0x5d4; // 0x80856F8C
    /* slwi r0, r0, 2 */ // 0x80856F90
    /* lfsx f0, r3, r0 */ // 0x80856F94
    /* b 0x80856fac */ // 0x80856F98
    r0 = *(0x38 + r31); // lwz @ 0x80856F9C
    r3 = r30 + 0x5e0; // 0x80856FA0
    /* slwi r0, r0, 2 */ // 0x80856FA4
    /* lfsx f0, r3, r0 */ // 0x80856FA8
    /* stfs f0, 0x48(r31) */ // 0x80856FAC
    r3 = r31;
    FUN_8061E2E8(r3, r3); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80856FB8
    /* cntlzw r0, r0 */ // 0x80856FBC
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80856FC0
    if (==) goto 0x0x80856fdc;
    r0 = *(0x38 + r31); // lwz @ 0x80856FC8
    r3 = r30 + 0x5bc; // 0x80856FCC
    /* slwi r0, r0, 2 */ // 0x80856FD0
    /* lwzx r0, r3, r0 */ // 0x80856FD4
    /* b 0x80856fec */ // 0x80856FD8
    r0 = *(0x38 + r31); // lwz @ 0x80856FDC
    r3 = r30 + 0x5c8; // 0x80856FE0
    /* slwi r0, r0, 2 */ // 0x80856FE4
    /* lwzx r0, r3, r0 */ // 0x80856FE8
    *(0x30 + r31) = r0; // stw @ 0x80856FEC
    r0 = *(0x14 + r1); // lwz @ 0x80856FF0
    r31 = *(0xc + r1); // lwz @ 0x80856FF4
    r30 = *(8 + r1); // lwz @ 0x80856FF8
    return;
}