/* Function at 0x80632A18, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80632A18(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80632A24
    r31 = r3;
    FUN_80632AA8(); // bl 0x80632AA8
    r3 = r31 + 0x1c; // 0x80632A30
    FUN_80632AA8(r3); // bl 0x80632AA8
    r0 = *(0x14 + r1); // lwz @ 0x80632A38
    r31 = *(0xc + r1); // lwz @ 0x80632A3C
    return;
}