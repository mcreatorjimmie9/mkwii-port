/* Function at 0x805B4208, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B4208(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 4; // 0x805B4218
    *(8 + r1) = r30; // stw @ 0x805B421C
    /* li r30, 0 */ // 0x805B4220
    r3 = r31;
    FUN_805B12B4(r3); // bl 0x805B12B4
    r30 = r30 + 1; // 0x805B422C
    r31 = r31 + 0xec; // 0x805B4230
    if (<) goto 0x0x805b4224;
    r0 = *(0x14 + r1); // lwz @ 0x805B423C
    r31 = *(0xc + r1); // lwz @ 0x805B4240
    r30 = *(8 + r1); // lwz @ 0x805B4244
    return;
}