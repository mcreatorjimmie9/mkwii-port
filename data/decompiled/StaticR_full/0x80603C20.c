/* Function at 0x80603C20, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80603C20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80603C2C
    r31 = r3;
    r4 = *(0x38 + r3); // lha @ 0x80603C34
    r0 = r4 + -1; // 0x80603C38
    *(0x38 + r3) = r0; // sth @ 0x80603C3C
    /* extsh. r0, r0 */ // 0x80603C40
    if (>=) goto 0x0x80603c50;
    /* li r0, 0 */ // 0x80603C48
    *(0x38 + r3) = r0; // sth @ 0x80603C4C
    r3 = *(0 + r3); // lwz @ 0x80603C50
    r3 = *(4 + r3); // lwz @ 0x80603C54
    r0 = *(8 + r3); // lwz @ 0x80603C58
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x80603C5C
    if (==) goto 0x0x80603c78;
    r12 = *(0xc + r31); // lwz @ 0x80603C64
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80603C6C
    /* mtctr r12 */ // 0x80603C70
    /* bctrl  */ // 0x80603C74
    r3 = r31;
    FUN_80603374(r3, r3); // bl 0x80603374
    r3 = r31;
    FUN_806034A8(r3, r3); // bl 0x806034A8
    r0 = *(0x14 + r1); // lwz @ 0x80603C88
    r31 = *(0xc + r1); // lwz @ 0x80603C8C
    return;
}