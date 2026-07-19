/* Function at 0x807332E0, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807332E0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807332F0
    r30 = r3;
    r31 = *(0x614 + r3); // lwz @ 0x807332F8
    r3 = *(0x40 + r31); // lwz @ 0x807332FC
    if (==) goto 0x0x80733358;
    r3 = r3 + 0x74; // 0x80733308
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80733320;
    /* li r3, 0 */ // 0x80733318
    /* b 0x80733324 */ // 0x8073331C
    r3 = *(0xc + r3); // lwz @ 0x80733320
    /* li r0, 0 */ // 0x80733328
    if (==) goto 0x0x80733338;
    if (!=) goto 0x0x8073333c;
    /* li r0, 1 */ // 0x80733338
}