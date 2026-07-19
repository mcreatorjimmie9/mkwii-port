/* Function at 0x80733F30, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80733F30(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0x20; // 0x80733F40
    *(0x18 + r1) = r30; // stw @ 0x80733F44
    /* li r30, 8 */ // 0x80733F48
    *(0x14 + r1) = r29; // stw @ 0x80733F4C
    r29 = r3;
    r3 = *(0x2d8 + r31); // lwz @ 0x80733F54
    if (==) goto 0x0x80733fa0;
    /* slwi r0, r30, 0x1e */ // 0x80733F60
    /* srwi r4, r30, 0x1f */ // 0x80733F64
    /* subf r0, r4, r0 */ // 0x80733F68
    /* rotlwi r0, r0, 2 */ // 0x80733F6C
    r0 = r0 + r4; // 0x80733F70
    r4 = r29 + r0; // 0x80733F74
    r0 = *(0x848 + r4); // lbz @ 0x80733F78
    if (==) goto 0x0x80733fa0;
    r0 = *(0x96d + r4); // lbz @ 0x80733F84
    if (!=) goto 0x0x80733fa0;
    r12 = *(0 + r3); // lwz @ 0x80733F90
    r12 = *(0xc + r12); // lwz @ 0x80733F94
    /* mtctr r12 */ // 0x80733F98
    /* bctrl  */ // 0x80733F9C
    r30 = r30 + 1; // 0x80733FA0
    r31 = r31 + 4; // 0x80733FA4
    if (<) goto 0x0x80733f54;
    r0 = *(0x24 + r1); // lwz @ 0x80733FB0
    r31 = *(0x1c + r1); // lwz @ 0x80733FB4
    r30 = *(0x18 + r1); // lwz @ 0x80733FB8
    r29 = *(0x14 + r1); // lwz @ 0x80733FBC
    return;
}