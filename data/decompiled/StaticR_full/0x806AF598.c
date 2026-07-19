/* Function at 0x806AF598, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806AF598(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806AF5A0
    *(0x14 + r1) = r29; // stw @ 0x806AF5B0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806AF5B8
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806AF5C0
    r3 = *(0 + r3); // lwz @ 0x806AF5C4
    r30 = *(0x124 + r3); // lwz @ 0x806AF5C8
    if (!=) goto 0x0x806af5dc;
    /* li r30, 0 */ // 0x806AF5D4
    /* b 0x806af630 */ // 0x806AF5D8
    /* lis r31, 0 */ // 0x806AF5DC
    r31 = r31 + 0; // 0x806AF5E0
    if (==) goto 0x0x806af62c;
    r12 = *(0 + r30); // lwz @ 0x806AF5E8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AF5F0
    /* mtctr r12 */ // 0x806AF5F4
    /* bctrl  */ // 0x806AF5F8
    /* b 0x806af614 */ // 0x806AF5FC
    if (!=) goto 0x0x806af610;
    /* li r0, 1 */ // 0x806AF608
    /* b 0x806af620 */ // 0x806AF60C
    r3 = *(0 + r3); // lwz @ 0x806AF610
    if (!=) goto 0x0x806af600;
    /* li r0, 0 */ // 0x806AF61C
    if (==) goto 0x0x806af62c;
    /* b 0x806af630 */ // 0x806AF628
    /* li r30, 0 */ // 0x806AF62C
    /* li r31, 1 */ // 0x806AF630
    *(0x6c + r30) = r31; // stw @ 0x806AF634
    /* li r0, 0x47 */ // 0x806AF638
    r3 = r29;
    *(0xb14 + r28) = r0; // stw @ 0x806AF640
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806AF64C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    *(0xb18 + r28) = r31; // stb @ 0x806AF654
    r31 = *(0x1c + r1); // lwz @ 0x806AF658
    r30 = *(0x18 + r1); // lwz @ 0x806AF65C
    r29 = *(0x14 + r1); // lwz @ 0x806AF660
    r28 = *(0x10 + r1); // lwz @ 0x806AF664
    r0 = *(0x24 + r1); // lwz @ 0x806AF668
    return;
}