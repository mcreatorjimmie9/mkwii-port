/* Function at 0x80733434, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80733434(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r7 = r3 + 0x818; // 0x8073343C
    r8 = r3 + 0x7c8; // 0x80733440
    *(0x24 + r1) = r0; // stw @ 0x80733444
    /* li r5, 0x12 */ // 0x80733448
    /* li r6, 0x13 */ // 0x8073344C
    /* li r9, 1 */ // 0x80733450
    *(0x1c + r1) = r31; // stw @ 0x80733454
    r31 = r3;
    /* lfs f2, 0x6d8(r3) */ // 0x8073345C
    /* lfs f1, 0x7cc(r3) */ // 0x80733460
    /* lfs f0, 0x6d0(r3) */ // 0x80733464
    /* stfs f0, 8(r1) */ // 0x80733468
    r4 = *(0x614 + r3); // lwz @ 0x8073346C
    /* stfs f1, 0xc(r1) */ // 0x80733470
    /* stfs f2, 0x10(r1) */ // 0x80733474
    FUN_807273A0(); // bl 0x807273A0
    r4 = *(0x614 + r31); // lwz @ 0x8073347C
    r3 = r31;
    r7 = r31 + 0x818; // 0x80733484
    r8 = r31 + 0x7c8; // 0x80733488
    /* li r5, 0x13 */ // 0x8073348C
    /* li r6, 0x14 */ // 0x80733490
    /* li r9, 1 */ // 0x80733494
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x24 + r1); // lwz @ 0x8073349C
    r31 = *(0x1c + r1); // lwz @ 0x807334A0
    return;
}