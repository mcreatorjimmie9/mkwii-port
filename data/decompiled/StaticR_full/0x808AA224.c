/* Function at 0x808AA224, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808AA224(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808AA23C
    r28 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r29 = *(8 + r28); // lwz @ 0x808AA248
    r30 = r28 + 0x58; // 0x808AA24C
    /* li r31, 0 */ // 0x808AA250
    r3 = *(0x14 + r29); // lwz @ 0x808AA254
    r3 = *(0 + r3); // lwz @ 0x808AA258
    if (==) goto 0x0x808aa270;
    r5 = r30;
    /* li r4, 0 */ // 0x808AA268
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x808AA270
    r29 = r29 + 4; // 0x808AA274
    if (<) goto 0x0x808aa254;
    /* lis r3, 0 */ // 0x808AA280
    r4 = *(0xc0 + r28); // lwz @ 0x808AA284
    r3 = *(0 + r3); // lwz @ 0x808AA288
    /* srwi r0, r3, 0x1f */ // 0x808AA28C
    r0 = r0 + r3; // 0x808AA290
    r0 = r0 >> 1; // srawi
    if (<) goto 0x0x808aa2d4;
    r30 = r28;
    /* li r29, 0 */ // 0x808AA2A4
    /* b 0x808aa2c8 */ // 0x808AA2A8
    r3 = *(0xb0 + r30); // lwz @ 0x808AA2AC
    r12 = *(0 + r3); // lwz @ 0x808AA2B0
    r12 = *(0x1c + r12); // lwz @ 0x808AA2B4
    /* mtctr r12 */ // 0x808AA2B8
    /* bctrl  */ // 0x808AA2BC
    r30 = r30 + 4; // 0x808AA2C0
    r29 = r29 + 1; // 0x808AA2C4
    r0 = *(0xbc + r28); // lbz @ 0x808AA2C8
    if (<) goto 0x0x808aa2ac;
    r0 = *(0x24 + r1); // lwz @ 0x808AA2D4
    r31 = *(0x1c + r1); // lwz @ 0x808AA2D8
    r30 = *(0x18 + r1); // lwz @ 0x808AA2DC
    r29 = *(0x14 + r1); // lwz @ 0x808AA2E0
    r28 = *(0x10 + r1); // lwz @ 0x808AA2E4
    return;
}