/* Function at 0x806D31D8, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806D31D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D31E0
    *(0x18 + r1) = r30; // stw @ 0x806D31EC
    *(0x14 + r1) = r29; // stw @ 0x806D31F0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D31F8
    FUN_806FE0AC(); // bl 0x806FE0AC
    if (==) goto 0x0x806d32e4;
    /* lis r3, 0 */ // 0x806D3208
    r3 = *(0 + r3); // lwz @ 0x806D320C
    r3 = *(0 + r3); // lwz @ 0x806D3210
    r30 = *(0x324 + r3); // lwz @ 0x806D3214
    if (!=) goto 0x0x806d3228;
    /* li r30, 0 */ // 0x806D3220
    /* b 0x806d327c */ // 0x806D3224
    /* lis r31, 0 */ // 0x806D3228
    r31 = r31 + 0; // 0x806D322C
    if (==) goto 0x0x806d3278;
    r12 = *(0 + r30); // lwz @ 0x806D3234
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D323C
    /* mtctr r12 */ // 0x806D3240
    /* bctrl  */ // 0x806D3244
    /* b 0x806d3260 */ // 0x806D3248
    if (!=) goto 0x0x806d325c;
    /* li r0, 1 */ // 0x806D3254
    /* b 0x806d326c */ // 0x806D3258
    r3 = *(0 + r3); // lwz @ 0x806D325C
    if (!=) goto 0x0x806d324c;
    /* li r0, 0 */ // 0x806D3268
    if (==) goto 0x0x806d3278;
    /* b 0x806d327c */ // 0x806D3274
    /* li r30, 0 */ // 0x806D3278
    r12 = *(0 + r30); // lwz @ 0x806D327C
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D3284
    /* mtctr r12 */ // 0x806D3288
    /* bctrl  */ // 0x806D328C
    r3 = r30;
    /* li r4, 0x1c84 */ // 0x806D3294
    /* li r5, 0 */ // 0x806D3298
    FUN_806496F0(r3, r4, r5); // bl 0x806496F0
    r12 = *(0 + r30); // lwz @ 0x806D32A0
    r3 = r30;
    /* li r4, 0x10cd */ // 0x806D32A8
    /* li r5, 0 */ // 0x806D32AC
    r12 = *(0x68 + r12); // lwz @ 0x806D32B0
    /* mtctr r12 */ // 0x806D32B4
    /* bctrl  */ // 0x806D32B8
    r12 = *(0 + r29); // lwz @ 0x806D32BC
    r3 = r29;
    /* li r4, 0xc7 */ // 0x806D32C4
    /* li r5, 0 */ // 0x806D32C8
    r12 = *(0x24 + r12); // lwz @ 0x806D32CC
    /* mtctr r12 */ // 0x806D32D0
    /* bctrl  */ // 0x806D32D4
    /* li r0, 3 */ // 0x806D32D8
    *(0x6c + r29) = r0; // stw @ 0x806D32DC
    /* b 0x806d32ec */ // 0x806D32E0
    r3 = r29;
    FUN_806D37FC(r3); // bl 0x806D37FC
    r0 = *(0x24 + r1); // lwz @ 0x806D32EC
    r31 = *(0x1c + r1); // lwz @ 0x806D32F0
    r30 = *(0x18 + r1); // lwz @ 0x806D32F4
    r29 = *(0x14 + r1); // lwz @ 0x806D32F8
    return;
}