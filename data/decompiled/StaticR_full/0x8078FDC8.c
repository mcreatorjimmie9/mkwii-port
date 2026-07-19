/* Function at 0x8078FDC8, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078FDC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8078FDD4
    *(0xc + r1) = r31; // stw @ 0x8078FDD8
    r31 = r3;
    if (==) goto 0x0x8078fdf8;
    /* li r0, 0 */ // 0x8078FDE8
    *(4 + r3) = r0; // stw @ 0x8078FDEC
    if (<=) goto 0x0x8078fdf8;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8078FDFC
    r0 = *(0x14 + r1); // lwz @ 0x8078FE00
    return;
}