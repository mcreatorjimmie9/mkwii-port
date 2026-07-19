/* Function at 0x808EA9A0, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808EA9A0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808EA9B8
    r28 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808EA9C4
    /* li r29, 0 */ // 0x808EA9C8
    /* li r31, 0 */ // 0x808EA9CC
    /* b 0x808eaa20 */ // 0x808EA9D0
    r0 = *(0x10 + r28); // lwz @ 0x808EA9D4
    if (!=) goto 0x0x808eaa08;
    r12 = *(0 + r28); // lwz @ 0x808EA9E0
    r3 = r28;
    r12 = *(0x10 + r12); // lwz @ 0x808EA9E8
    /* mtctr r12 */ // 0x808EA9EC
    /* bctrl  */ // 0x808EA9F0
    r0 = *(0x6c8 + r28); // lwz @ 0x808EA9F4
    r4 = r3;
    r3 = r0 + r31; // 0x808EA9FC
    FUN_806CA628(r4); // bl 0x806CA628
    /* b 0x808eaa18 */ // 0x808EAA04
    r0 = *(0x6c8 + r28); // lwz @ 0x808EAA08
    r4 = *(0x3ec + r28); // lwz @ 0x808EAA0C
    r3 = r0 + r31; // 0x808EAA10
    FUN_806CA628(); // bl 0x806CA628
    r31 = r31 + 0x188; // 0x808EAA18
    r29 = r29 + 1; // 0x808EAA1C
    if (<) goto 0x0x808ea9d4;
    r0 = *(0x24 + r1); // lwz @ 0x808EAA28
    r31 = *(0x1c + r1); // lwz @ 0x808EAA2C
    r30 = *(0x18 + r1); // lwz @ 0x808EAA30
    r29 = *(0x14 + r1); // lwz @ 0x808EAA34
    r28 = *(0x10 + r1); // lwz @ 0x808EAA38
    return;
}