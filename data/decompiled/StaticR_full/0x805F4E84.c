/* Function at 0x805F4E84, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F4E84(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805F4E98
    r29 = r3;
    r4 = *(0x10 + r3); // lwz @ 0x805F4EA0
    r31 = *(0x68 + r4); // lwz @ 0x805F4EA4
    if (<) goto 0x0x805f4f54;
    /* li r4, 0 */ // 0x805F4EB0
    if (<) goto 0x0x805f4ed0;
    /* lis r3, 0 */ // 0x805F4EB8
    r3 = r3 + 0; // 0x805F4EBC
    r0 = *(4 + r3); // lwz @ 0x805F4EC0
    if (>=) goto 0x0x805f4ed0;
    /* li r4, 1 */ // 0x805F4ECC
    if (!=) goto 0x0x805f4eec;
    /* lis r3, 0 */ // 0x805F4ED8
    r12 = *(0 + r3); // lwzu @ 0x805F4EDC
    r12 = *(0x18 + r12); // lwz @ 0x805F4EE0
    /* mtctr r12 */ // 0x805F4EE4
    /* bctrl  */ // 0x805F4EE8
    /* lis r4, 0 */ // 0x805F4EEC
    /* slwi r30, r31, 2 */ // 0x805F4EF0
    r4 = r4 + 0; // 0x805F4EF4
    r3 = *(8 + r4); // lwz @ 0x805F4EF8
    /* lwzx r0, r3, r30 */ // 0x805F4EFC
    if (!=) goto 0x0x805f4f54;
    /* li r3, 0 */ // 0x805F4F0C
    if (<) goto 0x0x805f4f24;
    r0 = *(4 + r4); // lwz @ 0x805F4F14
    if (>=) goto 0x0x805f4f24;
    /* li r3, 1 */ // 0x805F4F20
    if (!=) goto 0x0x805f4f40;
    /* lis r3, 0 */ // 0x805F4F2C
    r12 = *(0 + r3); // lwzu @ 0x805F4F30
    r12 = *(0x18 + r12); // lwz @ 0x805F4F34
    /* mtctr r12 */ // 0x805F4F38
    /* bctrl  */ // 0x805F4F3C
    /* lis r3, 0 */ // 0x805F4F40
    r0 = *(0x10 + r29); // lwz @ 0x805F4F44
    r3 = r3 + 0; // 0x805F4F48
    r3 = *(8 + r3); // lwz @ 0x805F4F4C
    /* stwx r0, r3, r30 */ // 0x805F4F50
    /* lis r3, 0 */ // 0x805F4F54
    r4 = r29;
    r3 = r3 + 0; // 0x805F4F5C
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
}