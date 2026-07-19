/* Function at 0x8064EB7C, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8064EB7C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8064EB84
    r5 = r5 + 0; // 0x8064EB8C
    *(0x1c + r1) = r31; // stw @ 0x8064EB90
    r31 = r4;
    r4 = r5 + 9; // 0x8064EB98
    *(0x18 + r1) = r30; // stw @ 0x8064EB9C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8064EBA4
    r6 = *(0 + r3); // lwz @ 0x8064EBA8
    r3 = r6 + 0x158; // 0x8064EBAC
    FUN_8066C34C(r3); // bl 0x8066C34C
    r3 = *(4 + r30); // lwz @ 0x8064EBB4
    r4 = *(0x24 + r30); // lwz @ 0x8064EBB8
    r0 = *(8 + r3); // lhz @ 0x8064EBBC
    /* lbzux r0, r4, r0 */ // 0x8064EBC0
    /* extsb. r0, r0 */ // 0x8064EBC4
    if (==) goto 0x0x8064ec40;
    r3 = *(0 + r30); // lwz @ 0x8064EBCC
    r3 = r3 + 0x144; // 0x8064EBD0
    FUN_8066C34C(r3); // bl 0x8066C34C
    /* li r29, 0 */ // 0x8064EBD8
    /* b 0x8064ec34 */ // 0x8064EBDC
    r0 = *(0x34 + r31); // lhz @ 0x8064EBE0
    r4 = *(0x1c + r30); // lwz @ 0x8064EBE4
    r0 = r0 + r29; // 0x8064EBE8
    r3 = *(0x24 + r30); // lwz @ 0x8064EBEC
    /* slwi r0, r0, 3 */ // 0x8064EBF0
    r6 = r4 + r0; // 0x8064EBF4
    /* lhzx r0, r4, r0 */ // 0x8064EBF8
    r4 = r3 + r0; // 0x8064EBFC
    /* lbzx r0, r3, r0 */ // 0x8064EC00
    /* extsb. r0, r0 */ // 0x8064EC04
    if (!=) goto 0x0x8064ec20;
    r3 = *(0 + r30); // lwz @ 0x8064EC0C
    /* li r5, 0 */ // 0x8064EC10
    r4 = *(4 + r6); // lwz @ 0x8064EC14
    FUN_806A0A34(r5); // bl 0x806A0A34
    /* b 0x8064ec30 */ // 0x8064EC1C
    r5 = *(4 + r6); // lwz @ 0x8064EC20
    /* li r6, 0 */ // 0x8064EC24
    r3 = *(0 + r30); // lwz @ 0x8064EC28
    FUN_806A093C(r6); // bl 0x806A093C
    r29 = r29 + 1; // 0x8064EC30
    r0 = *(0x36 + r31); // lhz @ 0x8064EC34
    if (<) goto 0x0x8064ebe0;
    r0 = *(0x24 + r1); // lwz @ 0x8064EC40
    r31 = *(0x1c + r1); // lwz @ 0x8064EC44
    r30 = *(0x18 + r1); // lwz @ 0x8064EC48
    r29 = *(0x14 + r1); // lwz @ 0x8064EC4C
    return;
}