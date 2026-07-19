/* Function at 0x8061F6D4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8061F6D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8061F6DC
    /* lis r3, 0 */ // 0x8061F6E0
    *(0x14 + r1) = r0; // stw @ 0x8061F6E4
    r4 = r4 + 0; // 0x8061F6E8
    r5 = r4 + 0x153; // 0x8061F6EC
    /* li r6, 0 */ // 0x8061F6F0
    r3 = *(0 + r3); // lwz @ 0x8061F6F4
    /* li r4, 0 */ // 0x8061F6F8
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    /* lis r5, 0 */ // 0x8061F700
    /* lis r4, 0 */ // 0x8061F704
    r0 = r3 + 4; // 0x8061F708
    *(0 + r5) = r3; // stw @ 0x8061F70C
    *(0 + r4) = r0; // stw @ 0x8061F710
    r0 = *(0x14 + r1); // lwz @ 0x8061F714
    return;
}