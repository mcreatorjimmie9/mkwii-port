/* Function at 0x8069FC20, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8069FC20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069FC30
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069FC38
    r30 = r3;
    if (==) goto 0x0x8069fc60;
    /* li r4, -1 */ // 0x8069FC44
    r3 = r3 + 0x68; // 0x8069FC48
    FUN_8064DB0C(r4, r3); // bl 0x8064DB0C
    if (<=) goto 0x0x8069fc60;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069FC64
    r30 = *(8 + r1); // lwz @ 0x8069FC68
    r0 = *(0x14 + r1); // lwz @ 0x8069FC6C
    return;
}