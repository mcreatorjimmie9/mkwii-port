/* Function at 0x8065A2A0, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8065A2A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x8065A2A8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8065A2B8
    *(0x14 + r1) = r29; // stw @ 0x8065A2BC
    *(0x10 + r1) = r28; // stw @ 0x8065A2C0
    r3 = *(0 + r4); // lwz @ 0x8065A2C4
    r0 = *(0x2754 + r3); // lbz @ 0x8065A2C8
    if (==) goto 0x0x8065a3b4;
    /* lis r3, 0 */ // 0x8065A2D4
    r5 = *(0 + r3); // lwz @ 0x8065A2D8
    r0 = *(0x36 + r5); // lha @ 0x8065A2DC
    if (<) goto 0x0x8065a304;
    /* lis r3, 1 */ // 0x8065A2E8
    /* clrlwi r4, r0, 0x18 */ // 0x8065A2EC
    r0 = r3 + -0x6c10; // 0x8065A2F0
    r0 = r0 * r4; // 0x8065A2F4
    r3 = r5 + r0; // 0x8065A2F8
    r3 = r3 + 0x38; // 0x8065A2FC
    /* b 0x8065a308 */ // 0x8065A300
    /* li r3, 0 */ // 0x8065A304
    /* lis r4, 0 */ // 0x8065A308
    /* addis r3, r3, 1 */ // 0x8065A30C
    r4 = *(0 + r4); // lwz @ 0x8065A310
    /* li r5, 0x168 */ // 0x8065A314
    r3 = r3 + -0x71b0; // 0x8065A318
    r4 = r4 + 0x204; // 0x8065A31C
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8065A324
    /* lis r3, 1 */ // 0x8065A328
    r4 = *(0 + r4); // lwz @ 0x8065A32C
    /* li r0, 0 */ // 0x8065A330
    r30 = r3 + -0x6c10; // 0x8065A334
    /* li r28, 0 */ // 0x8065A338
    *(0x2754 + r4) = r0; // stb @ 0x8065A33C
    /* lis r29, 0 */ // 0x8065A340
}