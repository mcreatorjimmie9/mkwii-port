/* Function at 0x80674444, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80674444(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80674450
    r31 = r3;
    r0 = *(0xbe8 + r3); // lwz @ 0x80674458
    if (!=) goto 0x0x80674484;
    /* lis r3, 0 */ // 0x80674464
    r3 = *(0 + r3); // lwz @ 0x80674468
    r3 = r3 + 0x34; // 0x8067446C
    FUN_8067FCB8(r3, r3); // bl 0x8067FCB8
    if (!=) goto 0x0x80674484;
    /* li r0, 3 */ // 0x8067447C
    *(0xbe8 + r31) = r0; // stw @ 0x80674480
    r0 = *(0x14 + r1); // lwz @ 0x80674484
    r31 = *(0xc + r1); // lwz @ 0x80674488
    return;
}