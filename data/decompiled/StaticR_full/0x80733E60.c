/* Function at 0x80733E60, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80733E60(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x10; // 0x80733E70
    *(0x18 + r1) = r30; // stw @ 0x80733E74
    /* li r30, 4 */ // 0x80733E78
    *(0x14 + r1) = r29; // stw @ 0x80733E7C
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733E84
    if (==) goto 0x0x80733f04;
    r3 = r3 + 0x74; // 0x80733E90
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80733ea8;
    /* li r3, 0 */ // 0x80733EA0
    /* b 0x80733eac */ // 0x80733EA4
    r3 = *(0xc + r3); // lwz @ 0x80733EA8
    /* li r0, 0 */ // 0x80733EB0
    if (==) goto 0x0x80733ec0;
    if (!=) goto 0x0x80733ec4;
    /* li r0, 1 */ // 0x80733EC0
}