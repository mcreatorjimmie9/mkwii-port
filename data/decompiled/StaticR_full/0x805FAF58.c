/* Function at 0x805FAF58, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805FAF58(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r0 = *(0 + r4); // lwz @ 0x805FAF64
    *(0x14 + r1) = r29; // stw @ 0x805FAF70
    *(0x10 + r1) = r28; // stw @ 0x805FAF74
    r28 = r3;
    *(0x14 + r3) = r0; // stw @ 0x805FAF7C
    FUN_8061E2BC(); // bl 0x8061E2BC
    r30 = r3;
    /* li r31, 0 */ // 0x805FAF88
    r29 = r30;
    /* b 0x805fafb4 */ // 0x805FAF90
    r12 = *(0xc + r28); // lwz @ 0x805FAF94
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FAF9C
    r12 = *(8 + r12); // lwz @ 0x805FAFA0
    /* mtctr r12 */ // 0x805FAFA4
    /* bctrl  */ // 0x805FAFA8
    r29 = r29 + 4; // 0x805FAFAC
    r31 = r31 + 1; // 0x805FAFB0
    r0 = *(0xf0 + r30); // lwz @ 0x805FAFB4
    if (<) goto 0x0x805faf94;
    r3 = r28;
    FUN_8061DF18(r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x805FAFC8
    r12 = *(0x28 + r12); // lwz @ 0x805FAFCC
    /* mtctr r12 */ // 0x805FAFD0
    /* bctrl  */ // 0x805FAFD4
    /* li r30, 0 */ // 0x805FAFD8
    /* b 0x805fb000 */ // 0x805FAFDC
    r3 = r28;
    r4 = r30;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x805FAFEC
    r12 = *(0x28 + r12); // lwz @ 0x805FAFF0
    /* mtctr r12 */ // 0x805FAFF4
    /* bctrl  */ // 0x805FAFF8
    r30 = r30 + 1; // 0x805FAFFC
    r3 = r28;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x805FB008
    if (<) goto 0x0x805fafe0;
    /* li r30, 0 */ // 0x805FB014
    /* b 0x805fb03c */ // 0x805FB018
    r3 = r28;
    r4 = r30;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r12 = *(0xc + r3); // lwz @ 0x805FB028
    r12 = *(0x28 + r12); // lwz @ 0x805FB02C
    /* mtctr r12 */ // 0x805FB030
    /* bctrl  */ // 0x805FB034
    r30 = r30 + 1; // 0x805FB038
    r3 = r28;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x805FB044
    if (<) goto 0x0x805fb01c;
    r0 = *(0x24 + r1); // lwz @ 0x805FB050
    r31 = *(0x1c + r1); // lwz @ 0x805FB054
    r30 = *(0x18 + r1); // lwz @ 0x805FB058
    r29 = *(0x14 + r1); // lwz @ 0x805FB05C
    r28 = *(0x10 + r1); // lwz @ 0x805FB060
    return;
}