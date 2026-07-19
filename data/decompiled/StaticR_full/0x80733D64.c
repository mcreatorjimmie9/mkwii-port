/* Function at 0x80733D64, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80733D64(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x10; // 0x80733D74
    *(0x18 + r1) = r30; // stw @ 0x80733D78
    /* li r30, 4 */ // 0x80733D7C
    *(0x14 + r1) = r29; // stw @ 0x80733D80
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733D88
    if (==) goto 0x0x80733e34;
    r3 = r3 + 0x74; // 0x80733D94
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80733dac;
    /* li r3, 0 */ // 0x80733DA4
    /* b 0x80733db0 */ // 0x80733DA8
    r3 = *(0xc + r3); // lwz @ 0x80733DAC
    /* li r0, 0 */ // 0x80733DB4
    if (==) goto 0x0x80733dc4;
    if (!=) goto 0x0x80733dc8;
    /* li r0, 1 */ // 0x80733DC4
}