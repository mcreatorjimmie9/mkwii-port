/* Function at 0x8065AAE0, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8065AAE0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8065AAE8
    *(0x18 + r1) = r30; // stw @ 0x8065AAF4
    *(0x14 + r1) = r29; // stw @ 0x8065AAF8
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8065AB00
    r3 = *(0 + r3); // lwz @ 0x8065AB04
    r30 = *(0x25c + r3); // lwz @ 0x8065AB08
    if (!=) goto 0x0x8065ab1c;
    /* li r30, 0 */ // 0x8065AB14
    /* b 0x8065ab70 */ // 0x8065AB18
    /* lis r31, 0 */ // 0x8065AB1C
    r31 = r31 + 0; // 0x8065AB20
    if (==) goto 0x0x8065ab6c;
    r12 = *(0 + r30); // lwz @ 0x8065AB28
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065AB30
    /* mtctr r12 */ // 0x8065AB34
    /* bctrl  */ // 0x8065AB38
    /* b 0x8065ab54 */ // 0x8065AB3C
    if (!=) goto 0x0x8065ab50;
    /* li r0, 1 */ // 0x8065AB48
    /* b 0x8065ab60 */ // 0x8065AB4C
    r3 = *(0 + r3); // lwz @ 0x8065AB50
    if (!=) goto 0x0x8065ab40;
    /* li r0, 0 */ // 0x8065AB5C
    if (==) goto 0x0x8065ab6c;
    /* b 0x8065ab70 */ // 0x8065AB68
    /* li r30, 0 */ // 0x8065AB6C
    r3 = *(0x25c + r29); // lwz @ 0x8065AB70
    r0 = r3 + -2; // 0x8065AB74
    if (<=) goto 0x0x8065ab98;
    if (!=) goto 0x0x8065abbc;
    r4 = *(0x258 + r29); // lwz @ 0x8065AB88
    r3 = r30;
    FUN_80663BC8(r3); // bl 0x80663BC8
    /* b 0x8065abbc */ // 0x8065AB94
    r31 = *(0x258 + r29); // lwz @ 0x8065AB98
    r3 = *(0x254 + r29); // lwz @ 0x8065AB9C
    r4 = r31;
    FUN_8066E0EC(r4); // bl 0x8066E0EC
    r4 = r3;
    r3 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x8065ABB4
    FUN_806637F4(r4, r3, r5, r6); // bl 0x806637F4
    r0 = *(0x24 + r1); // lwz @ 0x8065ABBC
    r31 = *(0x1c + r1); // lwz @ 0x8065ABC0
    r30 = *(0x18 + r1); // lwz @ 0x8065ABC4
    r29 = *(0x14 + r1); // lwz @ 0x8065ABC8
    return;
}