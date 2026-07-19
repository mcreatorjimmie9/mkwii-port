/* Function at 0x805B9B30, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9B30(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9B3C
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B9B44
    if (!=) goto 0x0x805b9b5c;
    FUN_805DF87C(); // bl 0x805DF87C
    /* li r0, 3 */ // 0x805B9B54
    *(0xac + r31) = r0; // stw @ 0x805B9B58
    r0 = *(0x14 + r1); // lwz @ 0x805B9B5C
    r31 = *(0xc + r1); // lwz @ 0x805B9B60
    return;
}