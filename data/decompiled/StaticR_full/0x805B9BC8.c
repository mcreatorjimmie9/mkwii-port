/* Function at 0x805B9BC8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B9BC8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9BD4
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B9BDC
    if (==) goto 0x0x805b9bf8;
    FUN_805DF7A0(); // bl 0x805DF7A0
    FUN_805DF090(); // bl 0x805DF090
    /* li r0, 0 */ // 0x805B9BF0
    *(0xac + r31) = r0; // stw @ 0x805B9BF4
    r0 = *(0x14 + r1); // lwz @ 0x805B9BF8
    r31 = *(0xc + r1); // lwz @ 0x805B9BFC
    return;
}