/* Function at 0x805C2394, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805C2394(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x805C23AC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805C23B4
    r28 = r3;
    if (==) goto 0x0x805c247c;
    r0 = *(4 + r3); // lwz @ 0x805C23C0
    /* lis r4, 0 */ // 0x805C23C4
    r4 = r4 + 0; // 0x805C23C8
    *(0 + r3) = r4; // stw @ 0x805C23CC
    if (==) goto 0x0x805c23f0;
    r3 = r0;
    /* li r4, 1 */ // 0x805C23DC
    r12 = *(0 + r3); // lwz @ 0x805C23E0
    r12 = *(8 + r12); // lwz @ 0x805C23E4
    /* mtctr r12 */ // 0x805C23E8
    /* bctrl  */ // 0x805C23EC
    r3 = *(8 + r28); // lwz @ 0x805C23F0
    if (==) goto 0x0x805c2410;
    r12 = *(0 + r3); // lwz @ 0x805C23FC
    /* li r4, 1 */ // 0x805C2400
    r12 = *(8 + r12); // lwz @ 0x805C2404
    /* mtctr r12 */ // 0x805C2408
    /* bctrl  */ // 0x805C240C
    /* li r30, 0 */ // 0x805C2410
    /* lis r31, 0 */ // 0x805C2414
    /* b 0x805c2448 */ // 0x805C2418
    r3 = *(0xc + r28); // lwz @ 0x805C241C
    r0 = r30 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805C2424
    if (==) goto 0x0x805c2444;
    r12 = *(0 + r3); // lwz @ 0x805C2430
    /* li r4, 1 */ // 0x805C2434
    r12 = *(8 + r12); // lwz @ 0x805C2438
    /* mtctr r12 */ // 0x805C243C
    /* bctrl  */ // 0x805C2440
    r30 = r30 + 1; // 0x805C2444
    r3 = *(0 + r31); // lwz @ 0x805C2448
    /* clrlwi r4, r30, 0x18 */ // 0x805C244C
    r0 = *(0x24 + r3); // lbz @ 0x805C2450
    if (<) goto 0x0x805c241c;
    r3 = *(0xc + r28); // lwz @ 0x805C245C
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x18 + r28); // lwz @ 0x805C2464
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x805c247c;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x805C247C
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x805C2484
}