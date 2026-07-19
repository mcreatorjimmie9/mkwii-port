/* Function at 0x80753374, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80753374(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8075337C
    /* li r5, 1 */ // 0x80753380
    *(0x24 + r1) = r0; // stw @ 0x80753384
    *(0x1c + r1) = r31; // stw @ 0x80753388
    /* lis r31, 0 */ // 0x8075338C
    /* lfs f2, 0(r31) */ // 0x80753390
    *(0x18 + r1) = r30; // stw @ 0x80753394
    /* lis r30, 0 */ // 0x80753398
    /* lfs f1, 0(r30) */ // 0x8075339C
    *(0x14 + r1) = r29; // stw @ 0x807533A0
    *(0x10 + r1) = r28; // stw @ 0x807533A4
    r28 = r3;
    r29 = *(0xd8 + r3); // lwz @ 0x807533AC
    r3 = *(8 + r29); // lwz @ 0x807533B0
    r3 = *(0x28 + r3); // lwz @ 0x807533B4
    FUN_805E73A4(); // bl 0x805E73A4
    r3 = *(0xe4 + r29); // lwz @ 0x807533BC
    /* li r4, 1 */ // 0x807533C0
    /* lfs f1, 0(r30) */ // 0x807533C4
    /* li r5, 1 */ // 0x807533C8
    r3 = *(0x28 + r3); // lwz @ 0x807533CC
    /* lfs f2, 0(r31) */ // 0x807533D0
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r30 = *(0xd8 + r28); // lwz @ 0x807533D8
    /* li r4, 0 */ // 0x807533DC
    r3 = *(8 + r30); // lwz @ 0x807533E0
    r3 = *(0x28 + r3); // lwz @ 0x807533E4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807533EC
    /* lfs f1, 0(r31) */ // 0x807533F0
    r12 = *(0x1c + r12); // lwz @ 0x807533F4
    /* mtctr r12 */ // 0x807533F8
    /* bctrl  */ // 0x807533FC
    r3 = *(0xe4 + r30); // lwz @ 0x80753400
    /* li r4, 0 */ // 0x80753404
    r3 = *(0x28 + r3); // lwz @ 0x80753408
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80753410
    /* lfs f1, 0(r31) */ // 0x80753414
    r12 = *(0x1c + r12); // lwz @ 0x80753418
    /* mtctr r12 */ // 0x8075341C
    /* bctrl  */ // 0x80753420
    r0 = *(0x24 + r1); // lwz @ 0x80753424
    r31 = *(0x1c + r1); // lwz @ 0x80753428
    r30 = *(0x18 + r1); // lwz @ 0x8075342C
    r29 = *(0x14 + r1); // lwz @ 0x80753430
    r28 = *(0x10 + r1); // lwz @ 0x80753434
    return;
}