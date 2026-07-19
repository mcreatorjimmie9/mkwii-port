/* Function at 0x807BE1E0, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807BE1E0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807BE1F4
    r29 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BE1FC
    r30 = *(4 + r4); // lwz @ 0x807BE200
    r3 = *(0 + r4); // lwz @ 0x807BE204
    FUN_8061E2D8(); // bl 0x8061E2D8
    r31 = r3;
    r3 = r30;
    /* li r4, 0xc */ // 0x807BE214
    FUN_805AE68C(r3, r4); // bl 0x805AE68C
    r3 = *(0x19c + r29); // lwz @ 0x807BE21C
    if (==) goto 0x0x807be23c;
    if (==) goto 0x0x807be258;
    if (==) goto 0x0x807be264;
    /* b 0x807be2c0 */ // 0x807BE238
    r3 = *(0x198 + r29); // lwz @ 0x807BE23C
    /* li r4, 4 */ // 0x807BE240
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = *(0x19c + r29); // lwz @ 0x807BE248
    r0 = r3 + 1; // 0x807BE24C
    *(0x19c + r29) = r0; // stw @ 0x807BE250
    /* b 0x807be2c0 */ // 0x807BE254
    r0 = r3 + 1; // 0x807BE258
    *(0x19c + r29) = r0; // stw @ 0x807BE25C
    /* b 0x807be2c0 */ // 0x807BE260
    /* lis r3, 0 */ // 0x807BE264
    /* clrlwi r0, r31, 0x18 */ // 0x807BE268
    r4 = *(0 + r3); // lwz @ 0x807BE26C
    /* mulli r0, r0, 0x248 */ // 0x807BE270
    /* li r3, 0 */ // 0x807BE274
    r4 = *(0x14 + r4); // lwz @ 0x807BE278
    r4 = r4 + r0; // 0x807BE27C
    r0 = *(0xc8 + r4); // lwz @ 0x807BE280
    if (==) goto 0x0x807be29c;
    r0 = *(0x208 + r4); // lbz @ 0x807BE28C
    if (!=) goto 0x0x807be29c;
    /* li r3, 1 */ // 0x807BE298
    if (==) goto 0x0x807be2b4;
    r3 = r29;
    r4 = r29 + 0x64; // 0x807BE2A8
    FUN_807CF1B4(r3, r3, r4); // bl 0x807CF1B4
    /* b 0x807be2c0 */ // 0x807BE2B0
    r3 = r29;
    r4 = r29 + 0x38; // 0x807BE2B8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807BE2C0
    r31 = *(0x1c + r1); // lwz @ 0x807BE2C4
    r30 = *(0x18 + r1); // lwz @ 0x807BE2C8
    r29 = *(0x14 + r1); // lwz @ 0x807BE2CC
    return;
}