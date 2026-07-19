/* Function at 0x808E614C, size=488 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r20 */
/* Calls: 6 function(s) */

int FUN_808E614C(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r20 */
    /* stmw r20, 0x20(r1) */ // 0x808E6158
    FUN_808CFA50(); // bl 0x808CFA50
    r22 = r3;
    FUN_808CF954(); // bl 0x808CF954
    /* clrlwi r3, r3, 0x18 */ // 0x808E6168
    /* clrlwi r0, r22, 0x18 */ // 0x808E616C
    /* subf r20, r0, r3 */ // 0x808E6170
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x808E617C
    /* clrlwi r0, r22, 0x18 */ // 0x808E6180
    r3 = *(0 + r3); // lwz @ 0x808E6184
    r0 = r20 + r0; // 0x808E6188
    /* lis r25, 0 */ // 0x808E618C
    /* li r31, 0x14 */ // 0x808E6190
    r3 = *(0x98 + r3); // lwz @ 0x808E6194
    /* clrlwi r21, r0, 0x18 */ // 0x808E6198
    /* li r30, 0x13 */ // 0x808E619C
    /* li r29, 0x12 */ // 0x808E61A0
    r23 = *(0x74 + r3); // lwz @ 0x808E61A4
    /* li r28, 2 */ // 0x808E61A8
    /* li r27, 1 */ // 0x808E61AC
    /* li r26, 0 */ // 0x808E61B0
    /* b 0x808e6308 */ // 0x808E61B4
    /* clrlwi r3, r22, 0x18 */ // 0x808E61B8
    r0 = *(0 + r25); // lwz @ 0x808E61BC
    /* mulli r24, r3, 0xf0 */ // 0x808E61C0
    r3 = r0 + r24; // 0x808E61C4
    r3 = *(0xc24 + r3); // lwz @ 0x808E61C8
    FUN_8089E030(); // bl 0x8089E030
    r20 = r3;
    /* li r4, 2 */ // 0x808E61D8
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (==) goto 0x0x808e61f4;
    if (==) goto 0x0x808e6240;
    /* b 0x808e628c */ // 0x808E61F0
    if (==) goto 0x0x808e6210;
    if (==) goto 0x0x808e6220;
    if (==) goto 0x0x808e6230;
    /* b 0x808e6304 */ // 0x808E620C
    r0 = *(0 + r25); // lwz @ 0x808E6210
    r3 = r0 + r24; // 0x808E6214
    *(0xc20 + r3) = r26; // stw @ 0x808E6218
    /* b 0x808e6304 */ // 0x808E621C
    r0 = *(0 + r25); // lwz @ 0x808E6220
    r3 = r0 + r24; // 0x808E6224
    *(0xc20 + r3) = r27; // stw @ 0x808E6228
    /* b 0x808e6304 */ // 0x808E622C
    r0 = *(0 + r25); // lwz @ 0x808E6230
    r3 = r0 + r24; // 0x808E6234
    *(0xc20 + r3) = r28; // stw @ 0x808E6238
    /* b 0x808e6304 */ // 0x808E623C
    if (==) goto 0x0x808e625c;
    if (==) goto 0x0x808e626c;
    if (==) goto 0x0x808e627c;
    /* b 0x808e6304 */ // 0x808E6258
    r0 = *(0 + r25); // lwz @ 0x808E625C
    r3 = r0 + r24; // 0x808E6260
    *(0xc20 + r3) = r29; // stw @ 0x808E6264
    /* b 0x808e6304 */ // 0x808E6268
    r0 = *(0 + r25); // lwz @ 0x808E626C
    r3 = r0 + r24; // 0x808E6270
    *(0xc20 + r3) = r30; // stw @ 0x808E6274
    /* b 0x808e6304 */ // 0x808E6278
    r0 = *(0 + r25); // lwz @ 0x808E627C
    r3 = r0 + r24; // 0x808E6280
    *(0xc20 + r3) = r31; // stw @ 0x808E6284
    /* b 0x808e6304 */ // 0x808E6288
    if (==) goto 0x0x808e62a8;
    if (==) goto 0x0x808e62c8;
    if (==) goto 0x0x808e62e8;
    /* b 0x808e6304 */ // 0x808E62A4
    r4 = *(0 + r25); // lwz @ 0x808E62A8
    /* li r0, 0x12 */ // 0x808E62B0
    r3 = r4 + r24; // 0x808E62B4
    if (!=) goto 0x0x808e62c0;
    /* li r0, 0 */ // 0x808E62BC
    *(0xc20 + r3) = r0; // stw @ 0x808E62C0
    /* b 0x808e6304 */ // 0x808E62C4
    r4 = *(0 + r25); // lwz @ 0x808E62C8
    /* li r0, 0x13 */ // 0x808E62D0
    r3 = r4 + r24; // 0x808E62D4
    if (!=) goto 0x0x808e62e0;
    /* li r0, 1 */ // 0x808E62DC
    *(0xc20 + r3) = r0; // stw @ 0x808E62E0
    /* b 0x808e6304 */ // 0x808E62E4
    r4 = *(0 + r25); // lwz @ 0x808E62E8
    /* li r0, 0x14 */ // 0x808E62F0
    r3 = r4 + r24; // 0x808E62F4
    if (!=) goto 0x0x808e6300;
    /* li r0, 2 */ // 0x808E62FC
    *(0xc20 + r3) = r0; // stw @ 0x808E6300
    r22 = r22 + 1; // 0x808E6304
    /* clrlwi r0, r22, 0x18 */ // 0x808E6308
    if (<) goto 0x0x808e61b8;
    /* li r4, -1 */ // 0x808E6318
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x54 + r1); // lwz @ 0x808E6324
    return;
}