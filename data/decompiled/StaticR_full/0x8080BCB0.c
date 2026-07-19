/* Function at 0x8080BCB0, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080BCB0(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8080BCC0
    r31 = r5;
    r4 = *(0 + r7); // lwz @ 0x8080BCC8
    r0 = *(4 + r7); // lwz @ 0x8080BCCC
    *(0xc + r1) = r0; // stw @ 0x8080BCD0
    *(8 + r1) = r4; // stw @ 0x8080BCD4
    r0 = *(8 + r7); // lwz @ 0x8080BCD8
    *(0x10 + r1) = r0; // stw @ 0x8080BCDC
    FUN_805E3430(); // bl 0x805E3430
}