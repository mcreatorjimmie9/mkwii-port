/* Function at 0x807FC498, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_807FC498(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 0 */ // 0x807FC4A0
    *(0x24 + r1) = r0; // stw @ 0x807FC4A4
    /* stmw r26, 8(r1) */ // 0x807FC4A8
    r30 = r3;
    r31 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807FC4B8
    /* lis r4, 0 */ // 0x807FC4BC
    /* li r0, 0 */ // 0x807FC4C0
    *(0xb4 + r30) = r0; // stw @ 0x807FC4C4
    r3 = r3 + 0; // 0x807FC4C8
    r4 = r4 + 0; // 0x807FC4CC
    *(0 + r30) = r3; // stw @ 0x807FC4D0
    r3 = r30;
    *(0xb0 + r30) = r4; // stw @ 0x807FC4D8
    *(0xb8 + r30) = r0; // stw @ 0x807FC4DC
    r12 = *(0 + r30); // lwz @ 0x807FC4E0
    r12 = *(0xc + r12); // lwz @ 0x807FC4E4
    /* mtctr r12 */ // 0x807FC4E8
    /* bctrl  */ // 0x807FC4EC
    r3 = *(0xa0 + r30); // lwz @ 0x807FC4F0
    /* li r4, 5 */ // 0x807FC4F4
    r3 = *(0 + r3); // lwz @ 0x807FC4F8
    r0 = *(0x36 + r3); // lha @ 0x807FC4FC
    if (==) goto 0x0x807fc50c;
    r4 = r0;
    *(0xbc + r30) = r4; // stw @ 0x807FC50C
    r3 = r30 + 0xb0; // 0x807FC510
    /* li r5, 0 */ // 0x807FC514
    r12 = *(0xb0 + r30); // lwz @ 0x807FC518
    r12 = *(0xc + r12); // lwz @ 0x807FC51C
    /* mtctr r12 */ // 0x807FC520
    /* bctrl  */ // 0x807FC524
    /* lis r29, 0 */ // 0x807FC528
    /* li r26, 0 */ // 0x807FC52C
    r29 = r29 + 0; // 0x807FC530
    /* li r27, 0 */ // 0x807FC534
    /* b 0x807fc5f4 */ // 0x807FC538
    /* li r3, 0xc8 */ // 0x807FC53C
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x807fc55c;
    r4 = r31;
    FUN_8080F158(r4); // bl 0x8080F158
    *(0 + r28) = r29; // stw @ 0x807FC558
    /* li r3, 0 */ // 0x807FC560
    if (<) goto 0x0x807fc578;
}