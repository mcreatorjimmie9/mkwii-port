/* Function at 0x806F5150, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806F5150(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x806F5168
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806F5170
    r28 = r3;
    if (==) goto 0x0x806f5274;
    /* lis r5, 0 */ // 0x806F517C
    /* lis r4, 0 */ // 0x806F5180
    r5 = r5 + 0; // 0x806F5184
    *(0 + r3) = r5; // stw @ 0x806F5188
    r30 = *(0 + r4); // lwz @ 0x806F518C
    if (==) goto 0x0x806f5258;
    /* li r0, 0 */ // 0x806F5198
    *(0 + r4) = r0; // stw @ 0x806F519C
    if (==) goto 0x0x806f5258;
    r3 = *(0x2c + r30); // lwz @ 0x806F51A4
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x758c + r30); // lwz @ 0x806F51AC
    if (==) goto 0x0x806f51cc;
    r12 = *(0x18 + r3); // lwz @ 0x806F51B8
    /* li r4, 1 */ // 0x806F51BC
    r12 = *(8 + r12); // lwz @ 0x806F51C0
    /* mtctr r12 */ // 0x806F51C4
    /* bctrl  */ // 0x806F51C8
    r3 = *(0x41f0 + r30); // lwz @ 0x806F51CC
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x7588 + r30); // lwz @ 0x806F51D4
    FUN_805E3430(); // bl 0x805E3430
}