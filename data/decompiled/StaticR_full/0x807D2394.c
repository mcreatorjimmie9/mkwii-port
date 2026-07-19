/* Function at 0x807D2394, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_807D2394(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807D239C
    *(0xc + r1) = r31; // stw @ 0x807D23A4
    *(8 + r1) = r30; // stw @ 0x807D23A8
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x807D23B0
    FUN_807BFFC0(); // bl 0x807BFFC0
    if (==) goto 0x0x807d23d4;
    if (==) goto 0x0x807d23f4;
    if (==) goto 0x0x807d2414;
    /* b 0x807d2430 */ // 0x807D23D0
    /* lis r31, 0 */ // 0x807D23D4
    r3 = *(0xc0 + r30); // lwz @ 0x807D23D8
    /* lfs f1, 0(r31) */ // 0x807D23DC
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D23E4
    /* lfs f1, 0(r31) */ // 0x807D23E8
    FUN_807D25C8(); // bl 0x807D25C8
    /* b 0x807d2430 */ // 0x807D23F0
    /* lis r31, 0 */ // 0x807D23F4
    r3 = *(0xc0 + r30); // lwz @ 0x807D23F8
    /* lfs f1, 0(r31) */ // 0x807D23FC
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D2404
    /* lfs f1, 0(r31) */ // 0x807D2408
    FUN_807D25C8(); // bl 0x807D25C8
    /* b 0x807d2430 */ // 0x807D2410
    /* lis r31, 0 */ // 0x807D2414
    r3 = *(0xc0 + r30); // lwz @ 0x807D2418
    /* lfs f1, 0(r31) */ // 0x807D241C
    FUN_807D25C8(); // bl 0x807D25C8
    r3 = *(0xc4 + r30); // lwz @ 0x807D2424
    /* lfs f1, 0(r31) */ // 0x807D2428
    FUN_807D25C8(); // bl 0x807D25C8
    /* li r0, 0 */ // 0x807D2430
    *(0xc8 + r30) = r0; // stw @ 0x807D2434
    *(0xcc + r30) = r0; // stw @ 0x807D2438
    r31 = *(0xc + r1); // lwz @ 0x807D243C
    r30 = *(8 + r1); // lwz @ 0x807D2440
    r0 = *(0x14 + r1); // lwz @ 0x807D2444
    return;
}