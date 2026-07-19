/* Function at 0x8061B5DC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8061B5DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8061B5E4
    *(0x14 + r1) = r0; // stw @ 0x8061B5E8
    *(0xc + r1) = r31; // stw @ 0x8061B5EC
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x8061B5F4
    r0 = *(0xb78 + r4); // lwz @ 0x8061B5F8
    if (!=) goto 0x0x8061b624;
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* li r4, 0 */ // 0x8061B608
    FUN_8060EBE0(r4); // bl 0x8060EBE0
    r3 = r31;
    FUN_8061ECC8(r4, r3); // bl 0x8061ECC8
    r0 = *(0x60 + r3); // lhz @ 0x8061B618
    r0 = r0 | 2; // 0x8061B61C
    *(0x60 + r3) = r0; // sth @ 0x8061B620
    r0 = *(0x14 + r1); // lwz @ 0x8061B624
    r31 = *(0xc + r1); // lwz @ 0x8061B628
    return;
}