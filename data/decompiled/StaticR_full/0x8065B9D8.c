/* Function at 0x8065B9D8, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8065B9D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8065B9EC
    r29 = r3;
    r3 = r3 + 0x268; // 0x8065B9F4
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x8065bac4;
    /* lis r3, 0 */ // 0x8065BA04
    r3 = *(0 + r3); // lwz @ 0x8065BA08
    r3 = *(0 + r3); // lwz @ 0x8065BA0C
    r30 = *(0x25c + r3); // lwz @ 0x8065BA10
    if (!=) goto 0x0x8065ba24;
    /* li r30, 0 */ // 0x8065BA1C
    /* b 0x8065ba78 */ // 0x8065BA20
    /* lis r31, 0 */ // 0x8065BA24
    r31 = r31 + 0; // 0x8065BA28
    if (==) goto 0x0x8065ba74;
    r12 = *(0 + r30); // lwz @ 0x8065BA30
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065BA38
    /* mtctr r12 */ // 0x8065BA3C
    /* bctrl  */ // 0x8065BA40
    /* b 0x8065ba5c */ // 0x8065BA44
    if (!=) goto 0x0x8065ba58;
    /* li r0, 1 */ // 0x8065BA50
    /* b 0x8065ba68 */ // 0x8065BA54
    r3 = *(0 + r3); // lwz @ 0x8065BA58
    if (!=) goto 0x0x8065ba48;
    /* li r0, 0 */ // 0x8065BA64
    if (==) goto 0x0x8065ba74;
    /* b 0x8065ba78 */ // 0x8065BA70
    /* li r30, 0 */ // 0x8065BA74
    r3 = *(0x4c4 + r29); // lwz @ 0x8065BA78
    r0 = r3 + -2; // 0x8065BA7C
    if (<=) goto 0x0x8065baa0;
    if (!=) goto 0x0x8065bac4;
    r4 = *(0x4c0 + r29); // lwz @ 0x8065BA90
    r3 = r30;
    FUN_80663BC8(r3); // bl 0x80663BC8
    /* b 0x8065bac4 */ // 0x8065BA9C
    r31 = *(0x4c0 + r29); // lwz @ 0x8065BAA0
    r3 = *(0x4bc + r29); // lwz @ 0x8065BAA4
    r4 = r31;
    FUN_8066E0EC(r4); // bl 0x8066E0EC
    r4 = r3;
    r3 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x8065BABC
    FUN_806637F4(r4, r3, r5, r6); // bl 0x806637F4
    r0 = *(0x24 + r1); // lwz @ 0x8065BAC4
    r31 = *(0x1c + r1); // lwz @ 0x8065BAC8
    r30 = *(0x18 + r1); // lwz @ 0x8065BACC
    r29 = *(0x14 + r1); // lwz @ 0x8065BAD0
    return;
}