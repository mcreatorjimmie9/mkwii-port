/* Function at 0x806AE0BC, size=452 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806AE0BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x806AE0CC
    *(0x14 + r1) = r29; // stw @ 0x806AE0D4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806AE0DC
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x806AE0E4
    r3 = *(0 + r3); // lwz @ 0x806AE0E8
    r3 = *(0x404 + r3); // lwz @ 0x806AE0EC
    FUN_80659444(); // bl 0x80659444
    if (<=) goto 0x0x806ae198;
    r3 = *(0 + r31); // lwz @ 0x806AE0FC
    r3 = *(0 + r3); // lwz @ 0x806AE100
    r30 = *(0x274 + r3); // lwz @ 0x806AE104
    if (!=) goto 0x0x806ae118;
    /* li r30, 0 */ // 0x806AE110
    /* b 0x806ae16c */ // 0x806AE114
    /* lis r31, 0 */ // 0x806AE118
    r31 = r31 + 0; // 0x806AE11C
    if (==) goto 0x0x806ae168;
    r12 = *(0 + r30); // lwz @ 0x806AE124
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AE12C
    /* mtctr r12 */ // 0x806AE130
    /* bctrl  */ // 0x806AE134
    /* b 0x806ae150 */ // 0x806AE138
    if (!=) goto 0x0x806ae14c;
    /* li r0, 1 */ // 0x806AE144
    /* b 0x806ae15c */ // 0x806AE148
    r3 = *(0 + r3); // lwz @ 0x806AE14C
    if (!=) goto 0x0x806ae13c;
    /* li r0, 0 */ // 0x806AE158
    if (==) goto 0x0x806ae168;
    /* b 0x806ae16c */ // 0x806AE164
    /* li r30, 0 */ // 0x806AE168
    r3 = r30;
    /* li r4, 0 */ // 0x806AE170
    FUN_806C2644(r3, r4); // bl 0x806C2644
    /* li r0, 0x9b */ // 0x806AE178
    *(0xf30 + r28) = r0; // stw @ 0x806AE17C
    r3 = r29;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806AE18C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806ae260 */ // 0x806AE194
    r3 = *(0 + r31); // lwz @ 0x806AE198
    r3 = *(0 + r3); // lwz @ 0x806AE19C
    r30 = *(0x13c + r3); // lwz @ 0x806AE1A0
    if (!=) goto 0x0x806ae1b4;
    /* li r30, 0 */ // 0x806AE1AC
    /* b 0x806ae208 */ // 0x806AE1B0
    /* lis r31, 0 */ // 0x806AE1B4
    r31 = r31 + 0; // 0x806AE1B8
    if (==) goto 0x0x806ae204;
    r12 = *(0 + r30); // lwz @ 0x806AE1C0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AE1C8
    /* mtctr r12 */ // 0x806AE1CC
    /* bctrl  */ // 0x806AE1D0
    /* b 0x806ae1ec */ // 0x806AE1D4
    if (!=) goto 0x0x806ae1e8;
    /* li r0, 1 */ // 0x806AE1E0
    /* b 0x806ae1f8 */ // 0x806AE1E4
    r3 = *(0 + r3); // lwz @ 0x806AE1E8
    if (!=) goto 0x0x806ae1d8;
    /* li r0, 0 */ // 0x806AE1F4
    if (==) goto 0x0x806ae204;
    /* b 0x806ae208 */ // 0x806AE200
    /* li r30, 0 */ // 0x806AE204
    r12 = *(0 + r30); // lwz @ 0x806AE208
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806AE210
    /* mtctr r12 */ // 0x806AE214
    /* bctrl  */ // 0x806AE218
    r12 = *(0 + r30); // lwz @ 0x806AE21C
    r3 = r30;
    /* li r4, 0xfa8 */ // 0x806AE224
    /* li r5, 0 */ // 0x806AE228
    r12 = *(0x68 + r12); // lwz @ 0x806AE22C
    /* mtctr r12 */ // 0x806AE230
    /* bctrl  */ // 0x806AE234
    r12 = *(0 + r28); // lwz @ 0x806AE238
    r3 = r28;
    /* li r4, 0x4d */ // 0x806AE240
    /* li r5, 0 */ // 0x806AE244
    r12 = *(0x24 + r12); // lwz @ 0x806AE248
    /* mtctr r12 */ // 0x806AE24C
    /* bctrl  */ // 0x806AE250
    r3 = r29;
    /* li r4, 0 */ // 0x806AE258
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x24 + r1); // lwz @ 0x806AE260
    r31 = *(0x1c + r1); // lwz @ 0x806AE264
    r30 = *(0x18 + r1); // lwz @ 0x806AE268
    r29 = *(0x14 + r1); // lwz @ 0x806AE26C
    r28 = *(0x10 + r1); // lwz @ 0x806AE270
    return;
}