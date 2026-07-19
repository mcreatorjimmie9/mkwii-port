/* Function at 0x80626D50, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80626D50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80626D5C
    r31 = r3;
    r4 = *(0x14 + r3); // lwz @ 0x80626D64
    FUN_8061E130(); // bl 0x8061E130
    *(0x18 + r31) = r3; // stw @ 0x80626D6C
    r31 = *(0xc + r1); // lwz @ 0x80626D70
    r0 = *(0x14 + r1); // lwz @ 0x80626D74
    return;
}