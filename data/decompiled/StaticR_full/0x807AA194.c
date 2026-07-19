/* Function at 0x807AA194, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807AA194(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807AA1B0
    *(0x10 + r1) = r28; // stw @ 0x807AA1B4
    r28 = r4;
    r0 = *(0x93 + r3); // lbz @ 0x807AA1BC
    if (!=) goto 0x0x807aa280;
    r12 = *(0 + r28); // lwz @ 0x807AA1C8
    r3 = r28;
    r12 = *(0x24 + r12); // lwz @ 0x807AA1D0
    /* mtctr r12 */ // 0x807AA1D4
    /* bctrl  */ // 0x807AA1D8
    r29 = r3;
    r4 = r28;
    r3 = r30 + 0x88; // 0x807AA1E4
    /* clrlwi r5, r29, 0x10 */ // 0x807AA1E8
    FUN_8078FE10(r4, r3); // bl 0x8078FE10
    /* lis r4, 0 */ // 0x807AA1F0
    /* li r0, 0xc */ // 0x807AA1F4
    r4 = r4 + 0; // 0x807AA1F8
    /* clrlwi r3, r29, 0x10 */ // 0x807AA1FC
    /* li r5, 0 */ // 0x807AA200
    /* mtctr r0 */ // 0x807AA204
    r0 = *(0 + r4); // lhz @ 0x807AA208
    if (!=) goto 0x0x807aa230;
    /* lis r3, 0 */ // 0x807AA214
    /* slwi r0, r5, 3 */ // 0x807AA218
    r3 = r3 + 0; // 0x807AA21C
    r3 = r3 + r0; // 0x807AA220
    r0 = *(4 + r3); // lwz @ 0x807AA224
    *(0xa8 + r30) = r0; // stw @ 0x807AA228
    /* b 0x807aa23c */ // 0x807AA22C
    r4 = r4 + 8; // 0x807AA230
    r5 = r5 + 1; // 0x807AA234
    if (counter-- != 0) goto 0x0x807aa208;
    r0 = *(0xa8 + r30); // lwz @ 0x807AA23C
    /* lis r3, 0 */ // 0x807AA240
    r3 = *(0 + r3); // lwz @ 0x807AA244
    r0 = *(0x10 + r3); // lwz @ 0x807AA24C
    if (!=) goto 0x0x807aa27c;
    if (==) goto 0x0x807aa268;
    if (==) goto 0x0x807aa274;
    /* b 0x807aa27c */ // 0x807AA264
    /* li r0, 0x362 */ // 0x807AA268
    *(0xa8 + r30) = r0; // stw @ 0x807AA26C
    /* b 0x807aa27c */ // 0x807AA270
    /* li r0, 0x381 */ // 0x807AA274
    *(0xa8 + r30) = r0; // stw @ 0x807AA278
    *(0xac + r30) = r31; // sth @ 0x807AA27C
    r0 = *(0x24 + r1); // lwz @ 0x807AA280
    r31 = *(0x1c + r1); // lwz @ 0x807AA284
    r30 = *(0x18 + r1); // lwz @ 0x807AA288
    r29 = *(0x14 + r1); // lwz @ 0x807AA28C
    r28 = *(0x10 + r1); // lwz @ 0x807AA290
    return;
}