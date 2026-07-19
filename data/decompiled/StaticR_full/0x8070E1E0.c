/* Function at 0x8070E1E0, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8070E1E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x8070E1E8
    *(0x14 + r1) = r0; // stw @ 0x8070E1EC
    *(0xc + r1) = r31; // stw @ 0x8070E1F0
    r31 = r3;
    r5 = *(8 + r3); // lwz @ 0x8070E1F8
    r3 = *(0x28 + r5); // lwz @ 0x8070E1FC
    FUN_805E7080(); // bl 0x805E7080
    if (==) goto 0x0x8070e234;
    r3 = *(8 + r31); // lwz @ 0x8070E20C
    /* li r4, 2 */ // 0x8070E210
    r3 = *(0x28 + r3); // lwz @ 0x8070E214
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8070E21C
    /* lis r4, 0 */ // 0x8070E220
    /* lfs f1, 0(r4) */ // 0x8070E224
    r12 = *(0x10 + r12); // lwz @ 0x8070E228
    /* mtctr r12 */ // 0x8070E22C
    /* bctrl  */ // 0x8070E230
    r3 = *(8 + r31); // lwz @ 0x8070E234
    /* li r4, 0 */ // 0x8070E238
    r3 = *(0x28 + r3); // lwz @ 0x8070E23C
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x8070e274;
    r3 = *(8 + r31); // lwz @ 0x8070E24C
    /* li r4, 0 */ // 0x8070E250
    r3 = *(0x28 + r3); // lwz @ 0x8070E254
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8070E25C
    /* lis r4, 0 */ // 0x8070E260
    /* lfs f1, 0(r4) */ // 0x8070E264
    r12 = *(0x10 + r12); // lwz @ 0x8070E268
    /* mtctr r12 */ // 0x8070E26C
    /* bctrl  */ // 0x8070E270
    r0 = *(0x14 + r1); // lwz @ 0x8070E274
    r31 = *(0xc + r1); // lwz @ 0x8070E278
    return;
}