/* Function at 0x807EE214, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_807EE214(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 0 */ // 0x807EE21C
    *(0x24 + r1) = r0; // stw @ 0x807EE220
    /* stmw r26, 8(r1) */ // 0x807EE224
    r30 = r3;
    r31 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807EE234
    /* lis r5, 0 */ // 0x807EE238
    /* li r0, 0 */ // 0x807EE23C
    *(0xb4 + r30) = r0; // stw @ 0x807EE240
    r3 = r3 + 0; // 0x807EE244
    r5 = r5 + 0; // 0x807EE248
    *(0 + r30) = r3; // stw @ 0x807EE24C
    /* li r4, 5 */ // 0x807EE250
    r3 = *(0xa0 + r30); // lwz @ 0x807EE254
    *(0xb0 + r30) = r5; // stw @ 0x807EE258
    *(0xb8 + r30) = r0; // stw @ 0x807EE25C
    r3 = *(0 + r3); // lwz @ 0x807EE260
    r0 = *(0x36 + r3); // lha @ 0x807EE264
    if (==) goto 0x0x807ee274;
    r4 = r0;
    *(0xbc + r30) = r4; // stw @ 0x807EE274
    r3 = r30 + 0xb0; // 0x807EE278
    /* li r5, 0 */ // 0x807EE27C
    r12 = *(0xb0 + r30); // lwz @ 0x807EE280
    r12 = *(0xc + r12); // lwz @ 0x807EE284
    /* mtctr r12 */ // 0x807EE288
    /* bctrl  */ // 0x807EE28C
    /* lis r29, 0 */ // 0x807EE290
    /* li r26, 0 */ // 0x807EE294
    r29 = r29 + 0; // 0x807EE298
    /* li r27, 0 */ // 0x807EE29C
    /* b 0x807ee35c */ // 0x807EE2A0
    /* li r3, 0xcc */ // 0x807EE2A4
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x807ee2c4;
    r4 = r31;
    FUN_808A8B3C(r4); // bl 0x808A8B3C
    *(0 + r28) = r29; // stw @ 0x807EE2C0
    /* li r3, 0 */ // 0x807EE2C8
    if (<) goto 0x0x807ee2e0;
}