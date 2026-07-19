/* Function at 0x808C7568, size=124 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808C7568(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xdc + r1) = r31; // stw @ 0x808C7578
    r31 = r5;
    *(0xd8 + r1) = r30; // stw @ 0x808C7580
    r30 = r4;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808C758C
    /* slwi r0, r31, 2 */ // 0x808C7590
    r3 = r3 + 0; // 0x808C7594
    /* lwzx r0, r3, r0 */ // 0x808C7598
    *(8 + r1) = r0; // stw @ 0x808C759C
    if (!=) goto 0x0x808c75bc;
    r3 = r30;
    /* li r4, 0xd88 */ // 0x808C75AC
    /* li r5, 0 */ // 0x808C75B0
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* b 0x808c75cc */ // 0x808C75B8
    r3 = r30;
    /* li r4, 0xd7b */ // 0x808C75C4
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x808C75CC
    r31 = *(0xdc + r1); // lwz @ 0x808C75D0
    r30 = *(0xd8 + r1); // lwz @ 0x808C75D4
    return;
}