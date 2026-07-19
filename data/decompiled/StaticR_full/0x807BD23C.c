/* Function at 0x807BD23C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BD23C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BD248
    r31 = r3;
    FUN_807BC3F0(); // bl 0x807BC3F0
    r3 = *(0x144 + r31); // lwz @ 0x807BD254
    r12 = *(0x34 + r3); // lwz @ 0x807BD258
    r12 = *(0x40 + r12); // lwz @ 0x807BD25C
    /* mtctr r12 */ // 0x807BD260
    /* bctrl  */ // 0x807BD264
    if (==) goto 0x0x807bd28c;
    r3 = *(0x144 + r31); // lwz @ 0x807BD270
    r12 = *(0x34 + r3); // lwz @ 0x807BD274
    r12 = *(0x40 + r12); // lwz @ 0x807BD278
    /* mtctr r12 */ // 0x807BD27C
    /* bctrl  */ // 0x807BD280
    /* li r0, 1 */ // 0x807BD284
    *(0xbc + r3) = r0; // stb @ 0x807BD288
    r0 = *(0x14 + r1); // lwz @ 0x807BD28C
    r31 = *(0xc + r1); // lwz @ 0x807BD290
    return;
}