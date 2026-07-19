/* Function at 0x807BE2E8, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807BE2E8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807BE2FC
    r29 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BE304
    r30 = *(4 + r4); // lwz @ 0x807BE308
    r3 = *(0 + r4); // lwz @ 0x807BE30C
    FUN_8061E2D8(); // bl 0x8061E2D8
    r31 = r3;
    r3 = r30;
    /* li r4, 0 */ // 0x807BE31C
    FUN_805AE68C(r3, r4); // bl 0x805AE68C
    r3 = *(0x19c + r29); // lwz @ 0x807BE324
    if (==) goto 0x0x807be344;
    if (==) goto 0x0x807be360;
    if (==) goto 0x0x807be36c;
    /* b 0x807be3c8 */ // 0x807BE340
    r3 = *(0x198 + r29); // lwz @ 0x807BE344
    /* li r4, 4 */ // 0x807BE348
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = *(0x19c + r29); // lwz @ 0x807BE350
    r0 = r3 + 1; // 0x807BE354
    *(0x19c + r29) = r0; // stw @ 0x807BE358
    /* b 0x807be3c8 */ // 0x807BE35C
    r0 = r3 + 1; // 0x807BE360
    *(0x19c + r29) = r0; // stw @ 0x807BE364
    /* b 0x807be3c8 */ // 0x807BE368
    /* lis r3, 0 */ // 0x807BE36C
    /* clrlwi r0, r31, 0x18 */ // 0x807BE370
    r4 = *(0 + r3); // lwz @ 0x807BE374
    /* mulli r0, r0, 0x248 */ // 0x807BE378
    /* li r3, 0 */ // 0x807BE37C
    r4 = *(0x14 + r4); // lwz @ 0x807BE380
    r4 = r4 + r0; // 0x807BE384
    r0 = *(0xc8 + r4); // lwz @ 0x807BE388
    if (==) goto 0x0x807be3a4;
    r0 = *(0x208 + r4); // lbz @ 0x807BE394
    if (!=) goto 0x0x807be3a4;
    /* li r3, 1 */ // 0x807BE3A0
    if (==) goto 0x0x807be3bc;
    r3 = r29;
    r4 = r29 + 0x64; // 0x807BE3B0
    FUN_807CF1B4(r3, r3, r4); // bl 0x807CF1B4
    /* b 0x807be3c8 */ // 0x807BE3B8
    r3 = r29;
    r4 = r29 + 0x38; // 0x807BE3C0
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807BE3C8
    r31 = *(0x1c + r1); // lwz @ 0x807BE3CC
    r30 = *(0x18 + r1); // lwz @ 0x807BE3D0
    r29 = *(0x14 + r1); // lwz @ 0x807BE3D4
    return;
}