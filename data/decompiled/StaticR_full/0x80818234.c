/* Function at 0x80818234, size=472 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80818234(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80818248
    /* lis r30, 0 */ // 0x8081824C
    *(0x14 + r1) = r29; // stw @ 0x80818250
    r4 = *(0 + r30); // lwz @ 0x80818254
    r0 = *(0xb90 + r4); // lwz @ 0x80818258
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8081825C
    if (==) goto 0x0x808182b0;
    /* lis r3, 0 */ // 0x80818264
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x8081826C
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DEF4(r3, r4); // bl 0x8061DEF4
    if (==) goto 0x0x80818288;
    /* li r3, 0 */ // 0x80818280
    /* b 0x808183f0 */ // 0x80818284
    /* mulli r0, r31, 0xf0 */ // 0x80818288
    r4 = *(0 + r30); // lwz @ 0x8081828C
    /* lis r3, 0 */ // 0x80818290
    r3 = *(0 + r3); // lwz @ 0x80818294
    r4 = r4 + r0; // 0x80818298
    r0 = *(0x38 + r4); // lwz @ 0x8081829C
    if (!=) goto 0x0x808183f0;
    /* li r3, 4 */ // 0x808182A8
    /* b 0x808183f0 */ // 0x808182AC
    r0 = *(0xb70 + r4); // lwz @ 0x808182B0
    if (<) goto 0x0x808182c4;
    if (<=) goto 0x0x80818304;
    if (<) goto 0x0x808182d4;
    if (<=) goto 0x0x80818304;
    if (==) goto 0x0x808182f0;
    if (==) goto 0x0x808183a4;
    if (==) goto 0x0x808183a4;
    /* b 0x808182f8 */ // 0x808182EC
    /* li r3, 0 */ // 0x808182F0
    /* b 0x808183f0 */ // 0x808182F4
    r3 = r31;
    FUN_80818560(r3, r3); // bl 0x80818560
    /* b 0x808183f0 */ // 0x80818300
    /* lis r5, 0 */ // 0x80818304
    /* lis r4, 0 */ // 0x80818308
    r7 = *(0 + r5); // lwz @ 0x8081830C
    /* lis r5, 0 */ // 0x80818310
    r0 = *(0 + r4); // lbz @ 0x80818314
    r4 = r3 rlwinm 2; // rlwinm
    r6 = *(0xc + r7); // lwz @ 0x8081831C
    r3 = *(0 + r5); // lwz @ 0x80818320
    /* lwzx r4, r6, r4 */ // 0x80818328
    r30 = *(0x24 + r3); // lbz @ 0x8081832C
    r29 = *(0x20 + r4); // lbz @ 0x80818330
    if (==) goto 0x0x80818368;
    r3 = r7;
    /* li r4, 4 */ // 0x8081833C
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x80818368;
    /* lis r3, 0 */ // 0x8081834C
    r0 = *(0 + r3); // lwz @ 0x80818350
    r3 = r0 + r31; // 0x80818354
    r0 = *(0x161 + r3); // lbz @ 0x80818358
    if (<=) goto 0x0x80818368;
    r29 = r0;
    /* clrlwi r5, r29, 0x18 */ // 0x80818368
    if (!=) goto 0x0x8081837c;
    /* li r3, 0 */ // 0x80818374
    /* b 0x808183f0 */ // 0x80818378
    r0 = r30 + -1; // 0x8081837C
    /* lis r4, 0 */ // 0x80818380
    /* slwi r0, r0, 2 */ // 0x80818384
    /* li r3, 2 */ // 0x80818388
    r4 = r4 + 0; // 0x8081838C
    /* lwzx r0, r4, r0 */ // 0x80818390
    if (>) goto 0x0x808183f0;
    /* li r3, 1 */ // 0x8081839C
    /* b 0x808183f0 */ // 0x808183A0
    /* lis r3, 0 */ // 0x808183A4
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x808183AC
    FUN_8061D97C(r3, r3, r4); // bl 0x8061D97C
    FUN_8061DEF4(r3, r4); // bl 0x8061DEF4
    if (==) goto 0x0x808183c8;
    /* li r3, 0 */ // 0x808183C0
    /* b 0x808183f0 */ // 0x808183C4
    /* lis r4, 0 */ // 0x808183C8
    /* lis r3, 0 */ // 0x808183CC
    /* mulli r0, r31, 0xf0 */ // 0x808183D0
    r4 = *(0 + r4); // lwz @ 0x808183D4
    r3 = *(0 + r3); // lwz @ 0x808183D8
    r4 = r4 + r0; // 0x808183DC
    r0 = *(0x38 + r4); // lwz @ 0x808183E0
    if (!=) goto 0x0x808183f0;
    /* li r3, 4 */ // 0x808183EC
    r0 = *(0x24 + r1); // lwz @ 0x808183F0
    r31 = *(0x1c + r1); // lwz @ 0x808183F4
    r30 = *(0x18 + r1); // lwz @ 0x808183F8
    r29 = *(0x14 + r1); // lwz @ 0x808183FC
    return;
}