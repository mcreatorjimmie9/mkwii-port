/* Function at 0x808E19DC, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808E19DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r0, r4, 0xc */ // 0x808E19E8
    *(0x1c + r1) = r31; // stw @ 0x808E19EC
    r3 = r3 + r0; // 0x808E19F0
    *(0x18 + r1) = r30; // stw @ 0x808E19F4
    r30 = r4;
    r31 = *(0x18 + r3); // lwz @ 0x808E19FC
    r3 = *(4 + r31); // lwz @ 0x808E1A00
    r0 = *(0x28 + r3); // lwz @ 0x808E1A04
    *(0xc + r31) = r0; // stw @ 0x808E1A08
    r3 = *(4 + r31); // lwz @ 0x808E1A0C
    FUN_805ED710(); // bl 0x805ED710
    *(0x10 + r31) = r3; // stw @ 0x808E1A14
    r4 = r3;
    /* li r5, 0 */ // 0x808E1A1C
    r3 = *(4 + r31); // lwz @ 0x808E1A20
    FUN_805EF4F8(r4, r5); // bl 0x805EF4F8
    FUN_808DF104(r4, r5, r3); // bl 0x808DF104
    r5 = *(4 + r31); // lwz @ 0x808E1A30
    r4 = r30;
    r6 = *(0x18 + r31); // lwz @ 0x808E1A38
    FUN_808DF944(r4, r3); // bl 0x808DF944
    r3 = *(4 + r31); // lwz @ 0x808E1A44
    /* li r5, 0 */ // 0x808E1A48
    r4 = *(0xc + r31); // lwz @ 0x808E1A4C
    FUN_805EF4F8(r3, r5); // bl 0x805EF4F8
    /* li r4, -1 */ // 0x808E1A58
    FUN_808DF11C(r5, r3, r4); // bl 0x808DF11C
    r0 = *(0x24 + r1); // lwz @ 0x808E1A60
    r31 = *(0x1c + r1); // lwz @ 0x808E1A64
    r30 = *(0x18 + r1); // lwz @ 0x808E1A68
    return;
}