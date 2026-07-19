/* Function at 0x8085E774, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8085E774(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8085E780
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x8085E788
    FUN_8085842C(); // bl 0x8085842C
    if (!=) goto 0x0x8085e7a4;
    /* lis r3, 0 */ // 0x8085E798
    /* lfs f0, 0(r3) */ // 0x8085E79C
    /* stfs f0, 0x240(r31) */ // 0x8085E7A0
    r3 = *(0x10 + r31); // lwz @ 0x8085E7A4
    FUN_808584B8(r3); // bl 0x808584B8
    if (!=) goto 0x0x8085e7c0;
    /* lis r3, 0 */ // 0x8085E7B4
    /* lfs f0, 0(r3) */ // 0x8085E7B8
    /* stfs f0, 0x244(r31) */ // 0x8085E7BC
    r3 = *(0x10 + r31); // lwz @ 0x8085E7C0
    FUN_80858544(r3); // bl 0x80858544
    if (!=) goto 0x0x8085e7dc;
    /* lis r3, 0 */ // 0x8085E7D0
    /* lfs f0, 0(r3) */ // 0x8085E7D4
    /* stfs f0, 0x248(r31) */ // 0x8085E7D8
    r3 = *(0x10 + r31); // lwz @ 0x8085E7DC
    FUN_808585EC(r3); // bl 0x808585EC
    if (!=) goto 0x0x8085e7f8;
    /* lis r3, 0 */ // 0x8085E7EC
    /* lfs f0, 0(r3) */ // 0x8085E7F0
    /* stfs f0, 0x24c(r31) */ // 0x8085E7F4
    r0 = *(0x14 + r1); // lwz @ 0x8085E7F8
    r31 = *(0xc + r1); // lwz @ 0x8085E7FC
    return;
}