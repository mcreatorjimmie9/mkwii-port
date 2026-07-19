/* Function at 0x806F52F4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

void FUN_806F52F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806F52FC
    *(0xc + r1) = r31; // stw @ 0x806F5304
    *(8 + r1) = r30; // stw @ 0x806F5308
    r30 = *(0 + r3); // lwz @ 0x806F530C
    if (==) goto 0x0x806f53d8;
    /* li r0, 0 */ // 0x806F5318
    *(0 + r3) = r0; // stw @ 0x806F531C
    if (==) goto 0x0x806f53d8;
    r3 = *(0x2c + r30); // lwz @ 0x806F5324
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x758c + r30); // lwz @ 0x806F532C
    if (==) goto 0x0x806f534c;
    r12 = *(0x18 + r3); // lwz @ 0x806F5338
    /* li r4, 1 */ // 0x806F533C
    r12 = *(8 + r12); // lwz @ 0x806F5340
}