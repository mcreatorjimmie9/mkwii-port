/* Function at 0x805B9A88, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9A88(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9A94
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B9A9C
    if (==) goto 0x0x805b9ab0;
    if (!=) goto 0x0x805b9abc;
    FUN_805DF740(); // bl 0x805DF740
    /* li r0, 2 */ // 0x805B9AB4
    *(0xac + r31) = r0; // stw @ 0x805B9AB8
    r0 = *(0x14 + r1); // lwz @ 0x805B9ABC
    r31 = *(0xc + r1); // lwz @ 0x805B9AC0
    return;
}