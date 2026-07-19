/* Function at 0x808EDFB0, size=696 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_808EDFB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x808EDFB8
    *(0x14 + r1) = r29; // stw @ 0x808EDFC8
    *(0x10 + r1) = r28; // stw @ 0x808EDFCC
    r3 = *(0 + r3); // lwz @ 0x808EDFD0
    r3 = *(0 + r3); // lwz @ 0x808EDFD4
    r0 = *(0 + r3); // lwz @ 0x808EDFD8
    if (==) goto 0x0x808ee248;
    if (!=) goto 0x0x808edff0;
    /* b 0x808ee248 */ // 0x808EDFEC
    /* lis r3, 0 */ // 0x808EDFF0
    r5 = *(0 + r3); // lwz @ 0x808EDFF4
    r0 = *(0x36 + r5); // lha @ 0x808EDFF8
    if (<) goto 0x0x808ee020;
    /* lis r3, 1 */ // 0x808EE004
    /* clrlwi r4, r0, 0x18 */ // 0x808EE008
    r0 = r3 + -0x6c10; // 0x808EE00C
    r0 = r0 * r4; // 0x808EE010
    r3 = r5 + r0; // 0x808EE014
    r30 = r3 + 0x38; // 0x808EE018
    /* b 0x808ee024 */ // 0x808EE01C
    /* li r30, 0 */ // 0x808EE020
    /* lis r3, 0 */ // 0x808EE024
    r3 = *(0 + r3); // lwz @ 0x808EE028
    r0 = *(0xb70 + r3); // lwz @ 0x808EE02C
    if (<) goto 0x0x808ee040;
    if (<=) goto 0x0x808ee050;
    if (<) goto 0x0x808ee238;
    if (>) goto 0x0x808ee238;
    /* li r4, 0 */ // 0x808EE050
    FUN_805C14C8(r4); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808EE058
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808EE060
    r3 = *(0xc + r3); // lwz @ 0x808EE064
    /* lwzx r3, r3, r0 */ // 0x808EE068
    r0 = *(0x20 + r3); // lbz @ 0x808EE06C
    if (!=) goto 0x0x808ee0a8;
    /* addis r5, r30, 1 */ // 0x808EE078
    /* lis r3, 2 */ // 0x808EE07C
    r4 = *(-0x6d48 + r5); // lwz @ 0x808EE080
    r0 = r3 + -0x7961; // 0x808EE084
    if (>=) goto 0x0x808ee098;
    r0 = r4 + 1; // 0x808EE090
    *(-0x6d48 + r5) = r0; // stw @ 0x808EE094
    /* lis r3, 0 */ // 0x808EE098
    r3 = *(0 + r3); // lwz @ 0x808EE09C
    r3 = *(0x90 + r3); // lwz @ 0x808EE0A0
    FUN_806845FC(r3); // bl 0x806845FC
    /* lis r28, 0 */ // 0x808EE0A8
    /* li r4, 0 */ // 0x808EE0AC
    r3 = *(0 + r28); // lwz @ 0x808EE0B0
    FUN_805C14C8(r4); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808EE0B8
    r7 = *(0 + r28); // lwz @ 0x808EE0BC
    r4 = *(0 + r4); // lwz @ 0x808EE0C0
    r5 = r3 rlwinm 2; // rlwinm
    r0 = *(0xb70 + r7); // lwz @ 0x808EE0C8
    /* li r3, 0 */ // 0x808EE0CC
    r6 = *(0xc + r4); // lwz @ 0x808EE0D0
    r4 = *(0x24 + r7); // lbz @ 0x808EE0D8
    /* lwzx r5, r6, r5 */ // 0x808EE0DC
    r31 = *(0x20 + r5); // lbz @ 0x808EE0E0
    /* subf r29, r31, r4 */ // 0x808EE0E4
    r28 = r31 + -1; // 0x808EE0E8
    if (<) goto 0x0x808ee0fc;
    if (>) goto 0x0x808ee0fc;
    /* li r3, 1 */ // 0x808EE0F8
    if (==) goto 0x0x808ee164;
    r0 = *(0x26 + r7); // lbz @ 0x808EE104
    if (!=) goto 0x0x808ee164;
    r3 = r7;
    /* li r4, 1 */ // 0x808EE114
    FUN_805C14C8(r3, r4); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808EE11C
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x808EE124
    r4 = *(0xc + r4); // lwz @ 0x808EE128
    /* lwzx r4, r4, r0 */ // 0x808EE12C
    r0 = *(0x20 + r4); // lbz @ 0x808EE130
    if (>=) goto 0x0x808ee140;
    r29 = r29 + -1; // 0x808EE13C
    /* lis r4, 0 */ // 0x808EE140
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808EE148
    r3 = *(0xc + r3); // lwz @ 0x808EE14C
    /* lwzx r3, r3, r0 */ // 0x808EE150
    r0 = *(0x20 + r3); // lbz @ 0x808EE154
    if (<) goto 0x0x808ee164;
    r28 = r28 + -1; // 0x808EE160
    /* addis r4, r30, 1 */ // 0x808EE164
    /* lis r3, 2 */ // 0x808EE168
    r5 = *(-0x6d94 + r4); // lwz @ 0x808EE16C
    /* clrlwi r4, r29, 0x10 */ // 0x808EE170
    r0 = r3 + -0x7961; // 0x808EE174
    r4 = r5 + r4; // 0x808EE178
    if (<=) goto 0x0x808ee188;
    r4 = r0;
    /* addis r5, r30, 1 */ // 0x808EE188
    /* lis r3, 2 */ // 0x808EE18C
    *(-0x6d94 + r5) = r4; // stw @ 0x808EE190
    r0 = r3 + -0x7961; // 0x808EE194
    /* clrlwi r4, r28, 0x10 */ // 0x808EE198
    r3 = *(-0x6d90 + r5); // lwz @ 0x808EE19C
    r5 = r3 + r4; // 0x808EE1A0
    if (<=) goto 0x0x808ee1b0;
    r5 = r0;
    /* addis r3, r30, 1 */ // 0x808EE1B0
    /* lis r4, 0 */ // 0x808EE1B4
    *(-0x6d90 + r3) = r5; // stw @ 0x808EE1B8
    /* li r3, 0 */ // 0x808EE1BC
    r4 = *(0 + r4); // lwz @ 0x808EE1C0
    r0 = *(0xb70 + r4); // lwz @ 0x808EE1C4
    if (==) goto 0x0x808ee1d8;
    if (!=) goto 0x0x808ee1dc;
    /* li r3, 1 */ // 0x808EE1D8
    if (==) goto 0x0x808ee238;
    /* addis r4, r30, 1 */ // 0x808EE1E4
    /* lis r3, 2 */ // 0x808EE1E8
    r5 = *(-0x6d84 + r4); // lwz @ 0x808EE1EC
    /* clrlwi r4, r29, 0x10 */ // 0x808EE1F0
    r0 = r3 + -0x7961; // 0x808EE1F4
    r4 = r5 + r4; // 0x808EE1F8
    if (<=) goto 0x0x808ee208;
    r4 = r0;
    /* addis r5, r30, 1 */ // 0x808EE208
    /* lis r3, 2 */ // 0x808EE20C
    *(-0x6d84 + r5) = r4; // stw @ 0x808EE210
    r0 = r3 + -0x7961; // 0x808EE214
    /* clrlwi r4, r28, 0x10 */ // 0x808EE218
    r3 = *(-0x6d80 + r5); // lwz @ 0x808EE21C
    r4 = r3 + r4; // 0x808EE220
    if (<=) goto 0x0x808ee230;
    r4 = r0;
    /* addis r3, r30, 1 */ // 0x808EE230
    *(-0x6d80 + r3) = r4; // stw @ 0x808EE234
    /* lis r3, 0 */ // 0x808EE238
    r3 = *(0 + r3); // lwz @ 0x808EE23C
    r3 = *(0x90 + r3); // lwz @ 0x808EE240
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x24 + r1); // lwz @ 0x808EE248
    r31 = *(0x1c + r1); // lwz @ 0x808EE24C
    r30 = *(0x18 + r1); // lwz @ 0x808EE250
    r29 = *(0x14 + r1); // lwz @ 0x808EE254
    r28 = *(0x10 + r1); // lwz @ 0x808EE258
    return;
}