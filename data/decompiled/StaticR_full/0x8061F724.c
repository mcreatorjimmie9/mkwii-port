/* Function at 0x8061F724, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8061F724(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8061F72C
    /* lis r3, 0 */ // 0x8061F730
    *(0x14 + r1) = r0; // stw @ 0x8061F734
    r4 = r4 + 0; // 0x8061F738
    r5 = r4 + 0x161; // 0x8061F73C
    /* li r6, 0 */ // 0x8061F740
    r3 = *(0 + r3); // lwz @ 0x8061F744
    /* li r4, 0 */ // 0x8061F748
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    /* lis r5, 0 */ // 0x8061F750
    /* lis r4, 0 */ // 0x8061F754
    r0 = r3 + 4; // 0x8061F758
    *(0 + r5) = r3; // stw @ 0x8061F75C
    *(0 + r4) = r0; // stw @ 0x8061F760
    r0 = *(0x14 + r1); // lwz @ 0x8061F764
    return;
}