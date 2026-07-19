/* Function at 0x805B9AD0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9AD0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9ADC
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B9AE4
    if (==) goto 0x0x805b9af8;
    if (!=) goto 0x0x805b9b04;
    FUN_805DF740(); // bl 0x805DF740
    /* li r0, 2 */ // 0x805B9AFC
    *(0xac + r31) = r0; // stw @ 0x805B9B00
    r0 = *(0x14 + r1); // lwz @ 0x805B9B04
    r31 = *(0xc + r1); // lwz @ 0x805B9B08
    return;
}