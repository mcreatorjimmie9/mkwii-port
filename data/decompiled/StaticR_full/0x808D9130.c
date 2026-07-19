/* Function at 0x808D9130, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808D9130(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r5, 0 */ // 0x808D9138
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808D9148
    *(0x24 + r1) = r29; // stw @ 0x808D914C
    *(0x20 + r1) = r28; // stw @ 0x808D9150
    r28 = r4;
    FUN_8089BC74(); // bl 0x8089BC74
    /* lis r3, 0 */ // 0x808D915C
    /* li r0, 0 */ // 0x808D9160
    r3 = r3 + 0; // 0x808D9164
    *(0 + r31) = r3; // stw @ 0x808D9168
    /* lis r3, 0 */ // 0x808D916C
    *(0x104 + r31) = r0; // stw @ 0x808D9170
    r3 = *(0 + r3); // lwz @ 0x808D9174
    r0 = *(0xb6c + r3); // lwz @ 0x808D9178
    if (==) goto 0x0x808d9198;
    if (==) goto 0x0x808d91a8;
    if (==) goto 0x0x808d91b8;
    /* b 0x808d91c4 */ // 0x808D9194
    r3 = *(0 + r28); // lwz @ 0x808D9198
    r0 = *(0x2a + r3); // lha @ 0x808D919C
    *(0x108 + r31) = r0; // stw @ 0x808D91A0
    /* b 0x808d91c4 */ // 0x808D91A4
    r3 = *(0 + r28); // lwz @ 0x808D91A8
    r0 = *(0x2e + r3); // lha @ 0x808D91AC
    *(0x108 + r31) = r0; // stw @ 0x808D91B0
    /* b 0x808d91c4 */ // 0x808D91B4
    r3 = *(0 + r28); // lwz @ 0x808D91B8
    r0 = *(0x30 + r3); // lha @ 0x808D91BC
    *(0x108 + r31) = r0; // stw @ 0x808D91C0
    r3 = *(0 + r28); // lwz @ 0x808D91C4
    /* lis r5, 0x4330 */ // 0x808D91C8
    /* lis r7, 0 */ // 0x808D91CC
    /* lis r4, 0 */ // 0x808D91D0
    r6 = *(0x2c + r3); // lha @ 0x808D91D4
    /* lis r3, 0 */ // 0x808D91D8
    r0 = *(0x54 + r31); // lbz @ 0x808D91DC
    /* xoris r6, r6, 0x8000 */ // 0x808D91E0
    *(0x1c + r1) = r6; // stw @ 0x808D91E4
    /* lfd f3, 0(r7) */ // 0x808D91E8
    *(0x18 + r1) = r5; // stw @ 0x808D91F0
    /* lfs f1, 0(r4) */ // 0x808D91F4
    /* lfd f2, 0x18(r1) */ // 0x808D91F8
    /* lfs f0, 0(r3) */ // 0x808D91FC
    /* fsubs f2, f2, f3 */ // 0x808D9200
    /* fmuls f1, f1, f2 */ // 0x808D9204
    /* fdivs f0, f1, f0 */ // 0x808D9208
    /* stfs f0, 0x10c(r31) */ // 0x808D920C
    if (==) goto 0x0x808d921c;
    r3 = r31 + 0x48; // 0x808D9214
    /* b 0x808d924c */ // 0x808D9218
    /* li r0, 1 */ // 0x808D921C
    *(0x54 + r31) = r0; // stb @ 0x808D9220
    r4 = r31 + 0x58; // 0x808D9228
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808D9230
    r3 = r31 + 0x48; // 0x808D9234
    /* stfs f0, 0x48(r31) */ // 0x808D9238
    /* lfs f0, 0xc(r1) */ // 0x808D923C
    /* stfs f0, 0x4c(r31) */ // 0x808D9240
    /* lfs f0, 0x10(r1) */ // 0x808D9244
    /* stfs f0, 0x50(r31) */ // 0x808D9248
    /* lfs f0, 0(r3) */ // 0x808D924C
    /* li r3, 0x104 */ // 0x808D9250
    /* stfs f0, 0x110(r31) */ // 0x808D9254
    FUN_805E3430(r3); // bl 0x805E3430
}