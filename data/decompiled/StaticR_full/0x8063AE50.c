/* Function at 0x8063AE50, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8063AE50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8063AE58
    *(0xc + r1) = r31; // stw @ 0x8063AE60
    *(8 + r1) = r30; // stw @ 0x8063AE64
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x8063AE6C
    r3 = *(0x38 + r3); // lwz @ 0x8063AE70
    r31 = *(0x10 + r4); // lwz @ 0x8063AE74
    r4 = *(0x68 + r31); // lwz @ 0x8063AE78
    FUN_8063776C(); // bl 0x8063776C
    r3 = *(0xc8 + r30); // lwz @ 0x8063AE80
    if (==) goto 0x0x8063aea0;
    r0 = *(0x68 + r31); // lwz @ 0x8063AE8C
    r3 = *(0x18 + r3); // lwz @ 0x8063AE90
    /* slwi r0, r0, 2 */ // 0x8063AE94
    /* lwzx r3, r3, r0 */ // 0x8063AE98
    FUN_80648AAC(); // bl 0x80648AAC
    /* lis r3, 0 */ // 0x8063AEA0
    r4 = *(0x68 + r31); // lwz @ 0x8063AEA4
    r3 = *(0 + r3); // lwz @ 0x8063AEA8
    FUN_80825688(r3); // bl 0x80825688
    r3 = r30;
    /* li r4, 0 */ // 0x8063AEB4
    FUN_805F22C8(r3, r4); // bl 0x805F22C8
    r0 = *(0x14 + r1); // lwz @ 0x8063AEBC
    r31 = *(0xc + r1); // lwz @ 0x8063AEC0
    r30 = *(8 + r1); // lwz @ 0x8063AEC4
    return;
}