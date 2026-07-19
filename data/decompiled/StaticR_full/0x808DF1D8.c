/* Function at 0x808DF1D8, size=496 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_808DF1D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r6 = r4;
    *(0x1c + r1) = r31; // stw @ 0x808DF1EC
    /* li r31, 0 */ // 0x808DF1F0
    *(0x18 + r1) = r30; // stw @ 0x808DF1F4
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808DF1FC
    *(0x10 + r1) = r28; // stw @ 0x808DF200
    if (==) goto 0x0x808df21c;
    if (==) goto 0x0x808df224;
    if (==) goto 0x0x808df22c;
    /* b 0x808df230 */ // 0x808DF218
    /* li r6, 0x2d */ // 0x808DF21C
    /* b 0x808df230 */ // 0x808DF220
    /* li r6, 0x2e */ // 0x808DF224
    /* b 0x808df230 */ // 0x808DF228
    /* li r6, 0x2f */ // 0x808DF22C
    /* lis r3, 0 */ // 0x808DF230
    r5 = *(0 + r3); // lwz @ 0x808DF234
    r3 = *(0 + r5); // lwz @ 0x808DF238
    r0 = *(0 + r3); // lwz @ 0x808DF23C
    if (==) goto 0x0x808df250;
    if (!=) goto 0x0x808df31c;
    if (<) goto 0x0x808df31c;
    r3 = *(0x98 + r5); // lwz @ 0x808DF258
    /* li r29, 0 */ // 0x808DF25C
    /* li r4, 0 */ // 0x808DF260
    r3 = r3 + 0x238; // 0x808DF264
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    if (==) goto 0x0x808df29c;
    /* lis r3, 0 */ // 0x808DF274
    /* li r4, 0 */ // 0x808DF278
    r3 = *(0 + r3); // lwz @ 0x808DF27C
    r3 = *(0x98 + r3); // lwz @ 0x808DF280
    r3 = r3 + 0x238; // 0x808DF284
    FUN_8066E0EC(r3, r4, r3); // bl 0x8066E0EC
    r0 = *(0x9c + r3); // lwz @ 0x808DF28C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808DF290
    if (!=) goto 0x0x808df29c;
    /* li r29, 1 */ // 0x808DF298
    /* lis r3, 0 */ // 0x808DF29C
    r3 = r3 + 0; // 0x808DF2A4
    r29 = r3 + 0xf; // 0x808DF2A8
    if (==) goto 0x0x808df2b4;
    r29 = r3;
    /* lis r3, 0 */ // 0x808DF2B4
    r5 = r29;
    r3 = *(0 + r3); // lwz @ 0x808DF2BC
    /* li r4, 2 */ // 0x808DF2C0
    /* li r6, 0 */ // 0x808DF2C4
    FUN_805CFD60(r3, r5, r4, r6); // bl 0x805CFD60
    r28 = r3;
    if (==) goto 0x0x808df3a4;
    /* clrlwi. r0, r3, 0x1b */ // 0x808DF2D8
    if (==) goto 0x0x808df2fc;
    /* lis r3, 0 */ // 0x808DF2E0
    /* lis r5, 0 */ // 0x808DF2E4
    r3 = r3 + 0; // 0x808DF2E8
    /* li r4, 0x3c */ // 0x808DF2EC
    r5 = r5 + 0; // 0x808DF2F0
    /* crclr cr1eq */ // 0x808DF2F4
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r30) = r28; // stw @ 0x808DF2FC
    r4 = r29;
    r3 = r30 + 4; // 0x808DF304
    /* li r5, 0 */ // 0x808DF308
    /* li r6, 0 */ // 0x808DF30C
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    /* li r31, 1 */ // 0x808DF314
    /* b 0x808df3a4 */ // 0x808DF318
    r3 = r6;
    FUN_805D052C(r6, r3); // bl 0x805D052C
    /* lis r5, 0 */ // 0x808DF324
    r4 = r3;
    r5 = r5 + 0; // 0x808DF32C
    r3 = r5 + 0x1e; // 0x808DF330
    /* crclr cr1eq */ // 0x808DF334
    FUN_8063803C(r5, r4, r5, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x808DF33C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808DF344
    r5 = r29;
    /* li r4, 6 */ // 0x808DF34C
    /* li r6, 0 */ // 0x808DF350
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r28 = r3;
    if (==) goto 0x0x808df3a4;
    /* clrlwi. r0, r3, 0x1b */ // 0x808DF364
    if (==) goto 0x0x808df388;
    /* lis r3, 0 */ // 0x808DF36C
    /* lis r5, 0 */ // 0x808DF370
    r3 = r3 + 0; // 0x808DF374
    /* li r4, 0x3c */ // 0x808DF378
    r5 = r5 + 0; // 0x808DF37C
    /* crclr cr1eq */ // 0x808DF380
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r30) = r28; // stw @ 0x808DF388
    r4 = r29;
    r3 = r30 + 4; // 0x808DF390
    /* li r5, 0 */ // 0x808DF394
    /* li r6, 0 */ // 0x808DF398
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    /* li r31, 1 */ // 0x808DF3A0
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808DF3A8
    r30 = *(0x18 + r1); // lwz @ 0x808DF3AC
    r29 = *(0x14 + r1); // lwz @ 0x808DF3B0
    r28 = *(0x10 + r1); // lwz @ 0x808DF3B4
    r0 = *(0x24 + r1); // lwz @ 0x808DF3B8
    return;
}