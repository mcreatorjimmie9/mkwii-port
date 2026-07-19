/* Function at 0x805D324C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805D324C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* addis r5, r3, 2 */ // 0x805D3254
    /* lis r4, 1 */ // 0x805D3258
    /* li r0, 0 */ // 0x805D3260
    *(0x1c + r1) = r31; // stw @ 0x805D3264
    *(0x18 + r1) = r30; // stw @ 0x805D3268
    r30 = r4 + -0x7340; // 0x805D326C
    *(0x14 + r1) = r29; // stw @ 0x805D3270
    /* li r29, 0 */ // 0x805D3274
    *(0x5000 + r5) = r0; // stb @ 0x805D3278
    r31 = *(0x14 + r3); // lwz @ 0x805D327C
    *(0x5002 + r5) = r0; // stb @ 0x805D3280
    *(0x5001 + r5) = r0; // stb @ 0x805D3284
    *(0x36 + r3) = r0; // sth @ 0x805D3288
    *(0x5004 + r5) = r0; // stw @ 0x805D328C
    /* clrlwi r0, r29, 0x18 */ // 0x805D3290
    r0 = r0 * r30; // 0x805D3294
    r3 = r31 + r0; // 0x805D3298
    r3 = r3 + 8; // 0x805D329C
    FUN_805D6E64(r3); // bl 0x805D6E64
    r29 = r29 + 1; // 0x805D32A4
    if (<) goto 0x0x805d3290;
    /* addis r3, r31, 2 */ // 0x805D32B0
    /* li r4, 0 */ // 0x805D32B4
    /* li r5, 0x3804 */ // 0x805D32B8
    r3 = r3 + 0x3308; // 0x805D32BC
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}