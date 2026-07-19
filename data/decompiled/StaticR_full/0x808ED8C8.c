/* Function at 0x808ED8C8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808ED8C8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808ED8D4
    /* li r31, 0 */ // 0x808ED8D8
    r3 = r31;
    FUN_808F2924(r3); // bl 0x808F2924
    if (==) goto 0x0x808ed8f4;
    r3 = r31;
    /* b 0x808ed904 */ // 0x808ED8F0
    r31 = r31 + 1; // 0x808ED8F4
    if (<) goto 0x0x808ed8dc;
    /* li r3, 0x3a */ // 0x808ED900
    r0 = *(0x14 + r1); // lwz @ 0x808ED904
    r31 = *(0xc + r1); // lwz @ 0x808ED908
    return;
}