/* Function at 0x80774758, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80774758(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80774764
    r31 = r3;
    r6 = *(0xc + r3); // lwz @ 0x8077476C
    r4 = *(0x10 + r3); // lbz @ 0x80774770
    r5 = *(0 + r6); // lwz @ 0x80774778
    r0 = r4 + -1; // 0x8077477C
    /* slwi r0, r0, 2 */ // 0x80774780
    r4 = r5 + 0x10; // 0x80774784
    /* lwzx r5, r6, r0 */ // 0x80774788
    r5 = r5 + 0x10; // 0x8077478C
    FUN_805A4498(r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x80774794
    r3 = r31 + 0x34; // 0x80774798
    /* stfs f0, 0x34(r31) */ // 0x8077479C
    /* lfs f0, 0xc(r1) */ // 0x807747A0
    /* stfs f0, 0x38(r31) */ // 0x807747A4
    /* lfs f0, 0x10(r1) */ // 0x807747A8
    /* stfs f0, 0x3c(r31) */ // 0x807747AC
    FUN_805E3430(); // bl 0x805E3430
}