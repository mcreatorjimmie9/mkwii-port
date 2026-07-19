/* Function at 0x80781368, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80781368(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80781370
    /* lis r4, 0 */ // 0x80781374
    *(0x24 + r1) = r0; // stw @ 0x80781378
    /* lis r6, 0 */ // 0x8078137C
    /* lfs f0, 0(r5) */ // 0x80781380
    /* lis r5, 0 */ // 0x80781384
    *(0x1c + r1) = r31; // stw @ 0x80781388
    r31 = r3;
    r4 = r4 + 0; // 0x80781390
    r5 = r5 + 0; // 0x80781394
    /* stfs f0, 8(r1) */ // 0x80781398
    r6 = r6 + 0; // 0x8078139C
    /* li r8, 0 */ // 0x807813A4
    /* stfs f0, 0xc(r1) */ // 0x807813A8
    /* stfs f0, 0x10(r1) */ // 0x807813AC
    FUN_8089F5F0(r6, r7, r8); // bl 0x8089F5F0
    /* lis r4, 0 */ // 0x807813B4
    r3 = r31;
    r4 = r4 + 0; // 0x807813BC
    *(0 + r31) = r4; // stw @ 0x807813C0
    r31 = *(0x1c + r1); // lwz @ 0x807813C4
    r0 = *(0x24 + r1); // lwz @ 0x807813C8
    return;
}