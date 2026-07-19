/* Function at 0x808359EC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808359EC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808359F8
    r31 = r3;
    r0 = *(0x280 + r3); // lwz @ 0x80835A00
    if (!=) goto 0x0x80835a18;
    FUN_80839E50(); // bl 0x80839E50
    /* li r0, 2 */ // 0x80835A10
    *(0x2c4 + r31) = r0; // stw @ 0x80835A14
    r0 = *(0x14 + r1); // lwz @ 0x80835A18
    r31 = *(0xc + r1); // lwz @ 0x80835A1C
    return;
}