/* Function at 0x8061F64C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8061F64C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8061F654
    /* li r6, 0 */ // 0x8061F658
    *(0x24 + r1) = r0; // stw @ 0x8061F65C
    *(0x1c + r1) = r31; // stw @ 0x8061F660
    /* lis r31, 0 */ // 0x8061F664
    *(0x18 + r1) = r30; // stw @ 0x8061F668
    /* lis r30, 0 */ // 0x8061F66C
    r30 = r30 + 0; // 0x8061F670
    *(0x14 + r1) = r29; // stw @ 0x8061F674
    /* lis r29, 0 */ // 0x8061F678
    r29 = r29 + 0; // 0x8061F67C
    r5 = r30 + 0x135; // 0x8061F680
    r3 = *(0 + r31); // lwz @ 0x8061F684
    FUN_805CFD60(r5); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F68C
    *(0 + r29) = r3; // stw @ 0x8061F690
    r3 = *(0 + r31); // lwz @ 0x8061F694
    r5 = r30 + 0x143; // 0x8061F698
    *(8 + r29) = r0; // stw @ 0x8061F69C
    /* li r4, 0 */ // 0x8061F6A0
    /* li r6, 0 */ // 0x8061F6A4
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F6AC
    *(4 + r29) = r3; // stw @ 0x8061F6B0
    *(0xc + r29) = r0; // stw @ 0x8061F6B4
    r31 = *(0x1c + r1); // lwz @ 0x8061F6B8
    r30 = *(0x18 + r1); // lwz @ 0x8061F6BC
    r29 = *(0x14 + r1); // lwz @ 0x8061F6C0
    r0 = *(0x24 + r1); // lwz @ 0x8061F6C4
    return;
}