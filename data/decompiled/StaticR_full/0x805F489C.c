/* Function at 0x805F489C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F489C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x805F48A4
    *(0x18 + r1) = r30; // stw @ 0x805F48B0
    /* lis r30, 0 */ // 0x805F48B4
    r30 = r30 + 0; // 0x805F48B8
    *(0x14 + r1) = r29; // stw @ 0x805F48BC
    /* slwi r29, r3, 2 */ // 0x805F48C0
    r31 = r30 + 0x20; // 0x805F48C4
    *(0x10 + r1) = r28; // stw @ 0x805F48C8
    r28 = r3;
    /* lwzx r0, r31, r29 */ // 0x805F48D0
    *(0 + r4) = r3; // stw @ 0x805F48D4
    if (==) goto 0x0x805f48fc;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x805F48E4
    r12 = *(0x14 + r12); // lwz @ 0x805F48E8
    /* mtctr r12 */ // 0x805F48EC
    /* bctrl  */ // 0x805F48F0
    /* lwzx r3, r31, r29 */ // 0x805F48F4
    FUN_805F25A8(); // bl 0x805F25A8
    /* mulli r3, r28, 0xc */ // 0x805F48FC
    r31 = r30 + 0x18; // 0x805F4900
    r0 = r30 + 0; // 0x805F4904
    /* li r4, 0 */ // 0x805F4908
    /* stwx r4, r31, r29 */ // 0x805F490C
    r30 = r0 + r3; // 0x805F4910
    /* b 0x805f492c */ // 0x805F4914
    /* lwzx r3, r31, r29 */ // 0x805F4918
    r12 = *(0 + r3); // lwz @ 0x805F491C
    r12 = *(0xc + r12); // lwz @ 0x805F4920
}