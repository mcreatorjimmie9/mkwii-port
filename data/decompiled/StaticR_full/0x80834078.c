/* Function at 0x80834078, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80834078(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80834084
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x8083408C
    if (==) goto 0x0x808340b0;
    r0 = *(0x2b4 + r3); // lhz @ 0x80834098
    if (==) goto 0x0x808340b0;
    FUN_808392CC(); // bl 0x808392CC
    /* li r0, 4 */ // 0x808340A8
    *(0x2b8 + r31) = r0; // stw @ 0x808340AC
    r0 = *(0x14 + r1); // lwz @ 0x808340B0
    r31 = *(0xc + r1); // lwz @ 0x808340B4
    return;
}