/* Function at 0x806651B8, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806651B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806651D4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806651DC
    r28 = r3;
    r0 = *(0 + r4); // lwz @ 0x806651E4
    /* li r4, 0 */ // 0x806651E8
    if (==) goto 0x0x80665210;
    r3 = r29;
    r4 = r31;
    FUN_8066C444(r4, r3, r4); // bl 0x8066C444
    r4 = r3;
    r3 = r29;
    FUN_8066C4AC(r3, r4, r4, r3); // bl 0x8066C4AC
    r4 = r3;
    if (!=) goto 0x0x80665240;
    r0 = *(0 + r30); // lwz @ 0x80665218
    if (==) goto 0x0x80665240;
    r3 = r30;
    r4 = r31;
    FUN_8066C444(r3, r4); // bl 0x8066C444
    r4 = r3;
    r3 = r30;
    FUN_8066C4AC(r3, r4, r4, r3); // bl 0x8066C4AC
    r4 = r3;
    if (==) goto 0x0x80665264;
    r12 = *(0 + r28); // lwz @ 0x80665248
    r3 = r28;
    /* li r5, 0 */ // 0x80665250
    r12 = *(0x7c + r12); // lwz @ 0x80665254
    /* mtctr r12 */ // 0x80665258
    /* bctrl  */ // 0x8066525C
    /* b 0x80665284 */ // 0x80665260
    r12 = *(0 + r28); // lwz @ 0x80665264
    /* lis r4, 0 */ // 0x80665268
    r3 = r28;
    /* li r5, 0 */ // 0x80665270
    r12 = *(0x7c + r12); // lwz @ 0x80665274
    r4 = r4 + 0; // 0x80665278
    /* mtctr r12 */ // 0x8066527C
    /* bctrl  */ // 0x80665280
    r0 = *(0x24 + r1); // lwz @ 0x80665284
    r31 = *(0x1c + r1); // lwz @ 0x80665288
    r30 = *(0x18 + r1); // lwz @ 0x8066528C
    r29 = *(0x14 + r1); // lwz @ 0x80665290
    r28 = *(0x10 + r1); // lwz @ 0x80665294
    return;
}