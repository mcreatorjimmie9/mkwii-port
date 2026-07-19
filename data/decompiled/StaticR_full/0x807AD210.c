/* Function at 0x807AD210, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807AD210(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807AD218
    *(0x14 + r1) = r0; // stw @ 0x807AD220
    /* li r0, 0 */ // 0x807AD224
    r5 = r5 + 0; // 0x807AD228
    *(0xc + r1) = r31; // stw @ 0x807AD22C
    r31 = r3;
    *(4 + r3) = r0; // stw @ 0x807AD234
    *(0 + r3) = r5; // stw @ 0x807AD238
    *(0x24 + r3) = r0; // stw @ 0x807AD23C
    if (==) goto 0x0x807ad250;
    /* lis r4, 0 */ // 0x807AD244
    /* lfs f0, 0(r4) */ // 0x807AD248
    /* b 0x807ad258 */ // 0x807AD24C
    /* lis r4, 0 */ // 0x807AD250
    /* lfs f0, 0(r4) */ // 0x807AD254
    /* stfs f0, 8(r3) */ // 0x807AD258
    /* li r3, 0x610 */ // 0x807AD25C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}