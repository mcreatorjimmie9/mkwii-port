/* Function at 0x808ED06C, size=716 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 12 function(s) */

int FUN_808ED06C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808ED084
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x808ED08C
    r28 = r4;
    r0 = *(0xb44 + r3); // lwz @ 0x808ED094
    if (==) goto 0x0x808ed0d8;
    /* lis r3, 0 */ // 0x808ED0A0
    r3 = *(0 + r3); // lwz @ 0x808ED0A4
    if (==) goto 0x0x808ed184;
    r3 = *(0x14 + r3); // lwz @ 0x808ED0B0
    if (==) goto 0x0x808ed184;
    r3 = *(0x18 + r3); // lwz @ 0x808ED0BC
    if (==) goto 0x0x808ed184;
    /* li r4, 0 */ // 0x808ED0C8
    /* li r5, 3 */ // 0x808ED0CC
    FUN_808E08F0(r4, r5); // bl 0x808E08F0
    /* b 0x808ed184 */ // 0x808ED0D4
    r0 = *(0xb48 + r3); // lwz @ 0x808ED0D8
    if (==) goto 0x0x808ed184;
    /* lis r3, 0 */ // 0x808ED0E4
    r3 = *(0 + r3); // lwz @ 0x808ED0E8
    if (==) goto 0x0x808ed118;
    r3 = *(0x14 + r3); // lwz @ 0x808ED0F4
    if (==) goto 0x0x808ed118;
    r3 = *(0x18 + r3); // lwz @ 0x808ED100
    if (==) goto 0x0x808ed118;
    /* li r4, 0 */ // 0x808ED10C
    /* li r5, 1 */ // 0x808ED110
    FUN_808E08F0(r4, r5); // bl 0x808E08F0
    r3 = *(0xb48 + r31); // lwz @ 0x808ED118
    FUN_805B7218(r4, r5); // bl 0x805B7218
    if (==) goto 0x0x808ed174;
    /* lis r3, 0 */ // 0x808ED128
    r3 = *(0 + r3); // lwz @ 0x808ED12C
    r0 = *(0x98 + r3); // lwz @ 0x808ED130
    /* addic. r3, r0, 0x238 */ // 0x808ED134
    *(0x44 + r31) = r3; // stw @ 0x808ED138
    if (==) goto 0x0x808ed184;
    r4 = r29;
    FUN_8066E0EC(r4); // bl 0x8066E0EC
    if (==) goto 0x0x808ed184;
    /* lis r4, 0 */ // 0x808ED150
    r3 = *(0x44 + r31); // lwz @ 0x808ED154
    r30 = *(0 + r4); // lwz @ 0x808ED158
    r4 = r29;
    FUN_8066E0EC(r4, r4); // bl 0x8066E0EC
    r4 = r3;
    r3 = r30;
    FUN_808F8448(r4, r4, r3); // bl 0x808F8448
    /* b 0x808ed184 */ // 0x808ED170
    /* lis r3, 0 */ // 0x808ED174
    r4 = *(0xb48 + r31); // lwz @ 0x808ED178
    r3 = *(0 + r3); // lwz @ 0x808ED17C
    FUN_808F8370(r3); // bl 0x808F8370
    r3 = r28;
    FUN_8064A384(r3, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x808ED18C
    r0 = *(0xb48 + r31); // lwz @ 0x808ED190
    /* stfd f0, 8(r1) */ // 0x808ED194
    r29 = *(0xc + r1); // lwz @ 0x808ED19C
    if (!=) goto 0x0x808ed1b0;
    r0 = *(0xb44 + r31); // lwz @ 0x808ED1A4
    if (==) goto 0x0x808ed1b4;
    /* li r29, 0x5a */ // 0x808ED1B0
    /* li r30, 0 */ // 0x808ED1B4
    r3 = r30;
    FUN_808F0FAC(r3); // bl 0x808F0FAC
    if (==) goto 0x0x808ed1cc;
    /* b 0x808ed1dc */ // 0x808ED1C8
    r30 = r30 + 1; // 0x808ED1CC
    if (<) goto 0x0x808ed1b8;
    /* li r30, -1 */ // 0x808ED1D8
    if (>=) goto 0x0x808ed204;
    if (>=) goto 0x0x808ed1f8;
    if (>=) goto 0x0x808ed218;
    /* b 0x808ed238 */ // 0x808ED1F4
    if (>=) goto 0x0x808ed228;
    /* b 0x808ed220 */ // 0x808ED200
    if (>=) goto 0x0x808ed238;
    if (>=) goto 0x0x808ed230;
    /* b 0x808ed220 */ // 0x808ED214
    /* li r4, 0x93 */ // 0x808ED218
    /* b 0x808ed2ac */ // 0x808ED21C
    /* li r4, 0x90 */ // 0x808ED220
    /* b 0x808ed2ac */ // 0x808ED224
    /* li r4, 0x92 */ // 0x808ED228
    /* b 0x808ed2ac */ // 0x808ED22C
    /* li r4, 0x91 */ // 0x808ED230
    /* b 0x808ed2ac */ // 0x808ED234
    /* li r30, 0 */ // 0x808ED238
    r3 = r30;
    FUN_808F2924(r4, r3); // bl 0x808F2924
    if (==) goto 0x0x808ed250;
    /* b 0x808ed260 */ // 0x808ED24C
    r30 = r30 + 1; // 0x808ED250
    if (<) goto 0x0x808ed23c;
    /* li r30, 0x3a */ // 0x808ED25C
    r0 = r30 + -0x22; // 0x808ED260
    if (<=) goto 0x0x808ed2a0;
    if (<=) goto 0x0x808ed290;
    r0 = r30 + -0xc; // 0x808ED274
    if (<=) goto 0x0x808ed298;
    if (!=) goto 0x0x808ed2a8;
    /* li r4, 0x93 */ // 0x808ED288
    /* b 0x808ed2ac */ // 0x808ED28C
    /* li r4, 0x90 */ // 0x808ED290
    /* b 0x808ed2ac */ // 0x808ED294
    /* li r4, 0x92 */ // 0x808ED298
    /* b 0x808ed2ac */ // 0x808ED29C
    /* li r4, 0x91 */ // 0x808ED2A0
    /* b 0x808ed2ac */ // 0x808ED2A4
    /* li r4, -1 */ // 0x808ED2A8
    if (!=) goto 0x0x808ed2e4;
    /* xoris r3, r29, 0x8000 */ // 0x808ED2B4
    /* lis r0, 0x4330 */ // 0x808ED2B8
    *(0xc + r1) = r3; // stw @ 0x808ED2BC
    /* lis r4, 0 */ // 0x808ED2C0
    /* lfd f1, 0(r4) */ // 0x808ED2C4
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x808ED2CC
    /* li r4, 0x41 */ // 0x808ED2D0
    /* lfd f0, 8(r1) */ // 0x808ED2D4
    /* fsubs f1, f0, f1 */ // 0x808ED2D8
    FUN_808B3E04(r3, r4); // bl 0x808B3E04
    /* b 0x808ed30c */ // 0x808ED2E0
    /* xoris r3, r29, 0x8000 */ // 0x808ED2E4
    /* lis r0, 0x4330 */ // 0x808ED2E8
    *(0xc + r1) = r3; // stw @ 0x808ED2EC
    /* lis r5, 0 */ // 0x808ED2F0
    /* lfd f1, 0(r5) */ // 0x808ED2F4
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x808ED2FC
    /* lfd f0, 8(r1) */ // 0x808ED300
    /* fsubs f1, f0, f1 */ // 0x808ED304
    FUN_808B3E04(r3); // bl 0x808B3E04
    /* li r0, -1 */ // 0x808ED30C
    *(0xb44 + r31) = r0; // stw @ 0x808ED310
    *(0xb48 + r31) = r0; // stw @ 0x808ED314
    r31 = *(0x1c + r1); // lwz @ 0x808ED318
    r30 = *(0x18 + r1); // lwz @ 0x808ED31C
    r29 = *(0x14 + r1); // lwz @ 0x808ED320
    r28 = *(0x10 + r1); // lwz @ 0x808ED324
    r0 = *(0x24 + r1); // lwz @ 0x808ED328
    return;
}