/* Function at 0x806C0D74, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806C0D74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C0D80
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x806C0D88
    if (!=) goto 0x0x806c0de8;
    r0 = *(0x248c + r3); // lbz @ 0x806C0D94
    if (==) goto 0x0x806c0de8;
    r3 = *(0x2474 + r3); // lwz @ 0x806C0DA0
    /* li r4, 0 */ // 0x806C0DA4
    r3 = r3 + 0x98; // 0x806C0DA8
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806C0DB0
    if (!=) goto 0x0x806c0de8;
    r3 = *(0x2478 + r31); // lwz @ 0x806C0DBC
    /* li r4, 0 */ // 0x806C0DC0
    r3 = r3 + 0x98; // 0x806C0DC4
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806C0DCC
    if (!=) goto 0x0x806c0de8;
    /* lfs f1, 0x2490(r31) */ // 0x806C0DD8
    r3 = r31;
    /* li r4, 1 */ // 0x806C0DE0
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806C0DE8
    r31 = *(0xc + r1); // lwz @ 0x806C0DEC
    return;
}