/* Function at 0x808359AC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808359AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808359B8
    r31 = r3;
    r0 = *(0x280 + r3); // lwz @ 0x808359C0
    if (!=) goto 0x0x808359d8;
    FUN_80839E50(); // bl 0x80839E50
    /* li r0, 2 */ // 0x808359D0
    *(0x2c4 + r31) = r0; // stw @ 0x808359D4
    r0 = *(0x14 + r1); // lwz @ 0x808359D8
    r31 = *(0xc + r1); // lwz @ 0x808359DC
    return;
}