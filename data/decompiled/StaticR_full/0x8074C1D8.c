/* Function at 0x8074C1D8, size=280 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8074C1D8(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x58 + r1) = r30; // stw @ 0x8074C1E8
    r30 = r3;
    r0 = *(0x120 + r3); // lwz @ 0x8074C1F0
    if (!=) goto 0x0x8074c204;
    FUN_808A2028(); // bl 0x808A2028
    /* b 0x8074c2d8 */ // 0x8074C200
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0x58 + r30); // lwz @ 0x8074C208
    /* lis r4, 0 */ // 0x8074C20C
    r0 = *(0x5c + r30); // lwz @ 0x8074C210
    *(0x24 + r1) = r0; // stw @ 0x8074C218
    r4 = r4 + 0; // 0x8074C21C
    *(0x20 + r1) = r5; // stw @ 0x8074C220
    r5 = *(0x60 + r30); // lwz @ 0x8074C224
    r0 = *(0x64 + r30); // lwz @ 0x8074C228
    *(0x2c + r1) = r0; // stw @ 0x8074C22C
    *(0x28 + r1) = r5; // stw @ 0x8074C230
    r5 = *(0x68 + r30); // lwz @ 0x8074C234
    r0 = *(0x6c + r30); // lwz @ 0x8074C238
    *(0x34 + r1) = r0; // stw @ 0x8074C23C
    *(0x30 + r1) = r5; // stw @ 0x8074C240
    r5 = *(0x70 + r30); // lwz @ 0x8074C244
    r0 = *(0x74 + r30); // lwz @ 0x8074C248
    *(0x3c + r1) = r0; // stw @ 0x8074C24C
    *(0x38 + r1) = r5; // stw @ 0x8074C250
    r5 = *(0x78 + r30); // lwz @ 0x8074C254
    r0 = *(0x7c + r30); // lwz @ 0x8074C258
    *(0x44 + r1) = r0; // stw @ 0x8074C25C
    *(0x40 + r1) = r5; // stw @ 0x8074C260
    r5 = *(0x80 + r30); // lwz @ 0x8074C264
    r0 = *(0x84 + r30); // lwz @ 0x8074C268
    *(0x4c + r1) = r0; // stw @ 0x8074C26C
    *(0x48 + r1) = r5; // stw @ 0x8074C270
    /* lfs f1, 0x124(r30) */ // 0x8074C274
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x8074C280
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x14(r1) */ // 0x8074C28C
    /* li r31, 0 */ // 0x8074C290
    /* lfs f1, 0x18(r1) */ // 0x8074C294
    /* lfs f0, 0x1c(r1) */ // 0x8074C298
    /* stfs f2, 0x2c(r1) */ // 0x8074C29C
    /* stfs f1, 0x3c(r1) */ // 0x8074C2A0
    /* stfs f0, 0x4c(r1) */ // 0x8074C2A4
    r30 = *(8 + r30); // lwz @ 0x8074C2A8
    r3 = *(0x14 + r30); // lwz @ 0x8074C2AC
    r3 = *(0 + r3); // lwz @ 0x8074C2B0
    if (==) goto 0x0x8074c2c8;
    /* li r4, 0 */ // 0x8074C2C0
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x8074C2C8
    r30 = r30 + 4; // 0x8074C2CC
    if (<) goto 0x0x8074c2ac;
    r0 = *(0x64 + r1); // lwz @ 0x8074C2D8
    r31 = *(0x5c + r1); // lwz @ 0x8074C2DC
    r30 = *(0x58 + r1); // lwz @ 0x8074C2E0
    return;
}