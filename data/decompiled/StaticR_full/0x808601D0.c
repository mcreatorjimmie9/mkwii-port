/* Function at 0x808601D0, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808601D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808601DC
    r31 = r3;
    r0 = *(0x5c + r3); // lwz @ 0x808601E4
    if (!=) goto 0x0x808602d8;
    r0 = *(0x60 + r3); // lwz @ 0x808601F0
    if (!=) goto 0x0x8086027c;
    r0 = *(0x64 + r3); // lwz @ 0x808601FC
    /* addic. r0, r0, -1 */ // 0x80860200
    *(0x64 + r3) = r0; // stw @ 0x80860204
    if (!=) goto 0x0x808602d8;
    r3 = *(0x14 + r3); // lwz @ 0x8086020C
    r0 = *(4 + r3); // lwz @ 0x80860210
    if (!=) goto 0x0x80860224;
    r3 = *(0 + r3); // lwz @ 0x8086021C
    /* b 0x80860228 */ // 0x80860220
    /* li r3, 0 */ // 0x80860224
    /* li r4, 0 */ // 0x80860228
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = *(0x18 + r31); // lwz @ 0x80860230
    r0 = *(4 + r3); // lwz @ 0x80860234
    if (!=) goto 0x0x80860248;
    r3 = *(0 + r3); // lwz @ 0x80860240
    /* b 0x8086024c */ // 0x80860244
    /* li r3, 0 */ // 0x80860248
    /* li r4, 0 */ // 0x8086024C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80860254
    r3 = *(0x68 + r31); // lwz @ 0x80860258
    r4 = *(0 + r4); // lwz @ 0x8086025C
    FUN_805E364C(r4, r4); // bl 0x805E364C
    /* lis r4, 0 */ // 0x80860264
    /* slwi r0, r3, 2 */ // 0x80860268
    r4 = r4 + 0; // 0x8086026C
    /* lwzx r0, r4, r0 */ // 0x80860270
}