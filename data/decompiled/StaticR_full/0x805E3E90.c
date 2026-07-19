/* Function at 0x805E3E90, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805E3E90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x805E3EA0
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805E3EAC
    /* lis r29, 0 */ // 0x805E3EB0
    *(0x10 + r1) = r28; // stw @ 0x805E3EB4
    /* li r28, 0 */ // 0x805E3EB8
    /* b 0x805e3f44 */ // 0x805E3EBC
    r3 = *(0 + r30); // lwz @ 0x805E3EC0
    r5 = r31 rlwinm 2; // rlwinm
    /* lwzx r4, r3, r5 */ // 0x805E3EC8
    if (==) goto 0x0x805e3f40;
    r3 = *(8 + r4); // lhz @ 0x805E3ED4
    r0 = r3 + 1; // 0x805E3ED8
    *(8 + r4) = r0; // sth @ 0x805E3EDC
    /* clrlwi r3, r0, 0x10 */ // 0x805E3EE0
    r0 = *(0xc + r4); // lhz @ 0x805E3EE4
    if (<) goto 0x0x805e3f40;
    r4 = *(0 + r30); // lwz @ 0x805E3EF0
    /* lwzx r3, r4, r5 */ // 0x805E3EF4
    r0 = *(4 + r3); // lwz @ 0x805E3EF8
    /* stwx r0, r4, r5 */ // 0x805E3EFC
    r3 = *(0 + r30); // lwz @ 0x805E3F00
    /* lwzx r3, r3, r5 */ // 0x805E3F04
    if (==) goto 0x0x805e3f40;
    *(8 + r3) = r28; // sth @ 0x805E3F10
    r4 = *(0 + r30); // lwz @ 0x805E3F14
    r3 = *(0 + r29); // lwz @ 0x805E3F18
    /* lwzx r4, r4, r5 */ // 0x805E3F1C
    r5 = *(0 + r4); // lwz @ 0x805E3F20
    r4 = *(0xa + r4); // lbz @ 0x805E3F24
    r5 = *(0 + r5); // lwz @ 0x805E3F28
    r5 = *(0x2a + r5); // lha @ 0x805E3F2C
    r0 = r5 + -1; // 0x805E3F30
    /* cntlzw r0, r0 */ // 0x805E3F34
    /* srwi r5, r0, 5 */ // 0x805E3F38
    FUN_805A737C(); // bl 0x805A737C
    r31 = r31 + 1; // 0x805E3F40
    r0 = *(4 + r30); // lhz @ 0x805E3F44
    /* clrlwi r3, r31, 0x10 */ // 0x805E3F48
    if (<) goto 0x0x805e3ec0;
    r0 = *(0x24 + r1); // lwz @ 0x805E3F54
    r31 = *(0x1c + r1); // lwz @ 0x805E3F58
    r30 = *(0x18 + r1); // lwz @ 0x805E3F5C
    r29 = *(0x14 + r1); // lwz @ 0x805E3F60
    r28 = *(0x10 + r1); // lwz @ 0x805E3F64
    return;
}